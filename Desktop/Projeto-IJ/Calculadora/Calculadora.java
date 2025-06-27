import java.util.Scanner;

public class Calculadora {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String operador, continuar;
        Double num1, num2;

        do {
            do {
                System.out.print("Digite o operador a ser utilizado +(Soma), -(Subtração), *(Multiplicação), /(Divisão), **(Potenciação): ");
                operador = scanner.nextLine();

                if (operador.equals("+") || operador.equals("-") || operador.equals("*") || operador.equals("/") || operador.equals("**")) {
                    System.out.println("Operador digitado: " + operador);
                } else {
                    System.out.println("O operador '" + operador + "' não existe nesse programa.");
                }

            } while (!(operador.equals("+") || operador.equals("-") || operador.equals("*") || operador.equals("/") || operador.equals("**")));

            // Solicita os números
            System.out.print("Digite o primeiro número: ");
            num1 = scanner.nextDouble();

            System.out.print("Digite o segundo número: ");
            num2 = scanner.nextDouble();

            // Consome a quebra de linha deixada pelo nextDouble()
            scanner.nextLine();

            // Realiza a operação correspondente
            if (operador.equals("+")) {
                System.out.println("A soma de " + num1 + " e " + num2 + " é igual: " + soma(num1, num2));
            } else if (operador.equals("-")) {
                System.out.println("A subtração de " + num1 + " e " + num2 + " é igual: " + sub(num1, num2));
            } else if (operador.equals("*")) {
                System.out.println("A multiplicação de " + num1 + " e " + num2 + " é igual: " + mult(num1, num2));
            } else if (operador.equals("/")) {
                // Verifica se a divisão não será por zero
                if (num2 != 0) {
                    System.out.println("A divisão de " + num1 + " por " + num2 + " é igual: " + div(num1, num2));
                } else {
                    System.out.println("Erro: Não é possível dividir por zero.");
                }
            } else if (operador.equals("**")) {
                System.out.println("A potência de " + num1 + " elevado a " + num2 + " é igual: " + pot(num1, num2));
            }

            System.out.print("Deseja realizar outra operação? (s/n): ");
            continuar = scanner.nextLine();

        } while (continuar.equalsIgnoreCase("s"));

        System.out.println("Programa Encerrado!");
        scanner.close();
    }

    // Funções de operações
    public static double soma(double num1, double num2) {
        return num1 + num2;
    }

    public static double sub(double num1, double num2) {
        return num1 - num2;
    }

    public static double mult(double num1, double num2) {
        return num1 * num2;
    }

    public static double div(double num1, double num2) {
        return num1 / num2;
    }

    public static double pot(double num1, double num2) {
        return Math.pow(num1, num2);
    }
}
