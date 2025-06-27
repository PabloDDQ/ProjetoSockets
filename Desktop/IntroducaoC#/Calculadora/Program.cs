using System;

class Program
{
    static void Main(string[] args)
    {
        string operador, continuar;
        double num1, num2;

        do
        {
            do
            {
                Console.Write("Digite um dos seguintes operadores +, -, /, * ou **: ");
                operador = Console.ReadLine();

            } while (operador != "+" && operador != "-" && operador != "*" && operador != "**" && operador != "/");

            Console.Write("Digite o primeiro número: ");
            num1 = double.Parse(Console.ReadLine());

            Console.Write("Digite o segundo número: ");
            num2 = double.Parse(Console.ReadLine());

            if (operador == "+")
            {
                Console.WriteLine("A soma de " + num1 + " e " + num2 + " é: " + Soma(num1, num2));
            }
            else if (operador == "-")
            {
                Console.WriteLine("A subtração de " + num1 + " e " + num2 + " é: " + Subtracao(num1, num2));
            }
            else if (operador == "*")
            {
                Console.WriteLine("A multiplicação de " + num1 + " e " + num2 + " é: " + Multiplicacao(num1, num2));
            }
            else if (operador == "**")
            {
                Console.WriteLine("A potenciação de " + num1 + " e " + num2 + " é: " + Potenciacao(num1, num2));
            }
            else if (operador == "/")
            {
                if (num2 == 0)
                {
                    Console.WriteLine("Erro: Divisão por 0 não existe!");
                }
                else
                {
                    Console.WriteLine("A divisão de " + num1 + " e " + num2 + " é: " + Divisao(num1, num2));
                }
            }

            Console.Write("Deseja realizar outra operação (S/N): ");
            continuar = Console.ReadLine().ToUpper();

        } while (continuar == "S");
    }

    static double Soma(double num1, double num2)
    {
        return num1 + num2;
    }

    static double Multiplicacao(double num1, double num2)
    {
        return num1 * num2;
    }

    static double Potenciacao(double num1, double num2)
    {
        return Math.Pow(num1, num2);
    }

    static double Divisao(double num1, double num2)
    {
        return num1 / num2;
    }

    static double Subtracao(double num1, double num2)
    {
        return num1 - num2;
    }
}
