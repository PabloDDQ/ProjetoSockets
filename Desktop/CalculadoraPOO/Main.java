import java.util.Scanner;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String operador;
        double num1, num2;
        String continuar = "sim";

        while (continuar.equalsIgnoreCase("sim")) {  // Laço para continuar fazendo operações
            // Solicitar o operador
            do {
                System.out.print("Digite +, *, -, ** ou /: ");
                operador = scanner.nextLine();
            } while (!(operador.equals("+") || operador.equals("-") || operador.equals("*") || operador.equals("/") || operador.equals("**")));

            // Solicitar os números
            System.out.print("Digite o primeiro número: ");
            num1 = scanner.nextDouble();
            System.out.print("Digite o segundo número: ");
            num2 = scanner.nextDouble();
            scanner.nextLine();  // Consumir a quebra de linha deixada por nextDouble()

            // Realizar a operação baseada no operador
            if (operador.equals("+")) {
                Soma soma = new Soma(num1, num2);
                System.out.println("Soma de " + num1 + " e " + num2 + " é igual: " + soma.calcular());
            } else if (operador.equals("-")) {
                Subtracao subtracao = new Subtracao(num1, num2);
                System.out.println("Subtração de " + num1 + " e " + num2 + " é igual: " + subtracao.calcular());
            } else if (operador.equals("*")) {
                Multiplicacao multiplicacao = new Multiplicacao(num1, num2);
                System.out.println("Multiplicação de " + num1 + " e " + num2 + " é igual: " + multiplicacao.calcular());
            } else if (operador.equals("/")) {
                Divisao divisao = new Divisao(num1, num2);
                if (num2 != 0) {  // Verificar se o denominador é zero para evitar divisão por zero
                    System.out.println("Divisão de " + num1 + " por " + num2 + " é igual: " + divisao.calcular());
                } else {
                    System.out.println("Erro: Divisão por zero não permitida.");
                }
            } else if (operador.equals("**")) {
                Potenciacao potenciacao = new Potenciacao(num1, num2);
                System.out.println("Resultado de " + num1 + " elevado a " + num2 + " é igual: " + potenciacao.calcular());
            }

            // Perguntar se o usuário deseja realizar outra operação
            System.out.print("Deseja fazer outra operação? (sim/não): ");
            continuar = scanner.nextLine();
        }

        System.out.println("Obrigado por usar a calculadora!");
        scanner.close();
    }
}
