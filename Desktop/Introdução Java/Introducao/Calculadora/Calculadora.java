import java.util.Scanner;

public class Calculadora {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String operador, continuar;
        Double num1, num2;

        do {
            System.out.print("Digite o operador +, -, *, / ou **: ");
            operador = scanner.next(); 
            
        } while (!operador.equals("+") && !operador.equals("-") && !operador.equals("*") && !operador.equals("/") && !operador.equals("**"));

        System.out.print("Digite o primeiro número: ");
        num1 = scanner.nextDouble();

        System.out.print("Digite o segundo número: ");
        num2 = scanner.nextDouble();

        if (operador.equals("+")) {
            System.out.println("A soma de " + num1 + " e " + num2 + " é igual à: " + soma(num1, num2));
        } else if (operador.equals("-")) {
            System.out.println("A subtração de " + num1 + " e " + num2 + " é igual à: " + subtracao(num1, num2));
        } else if (operador.equals("*")) {
            System.out.println("A multiplicação de " + num1 + " e " + num2 + " é igual à: " + multiplicacao(num1, num2));
        } else if (operador.equals("**")) {
            System.out.println("A potenciação de " + num1 + " e " + num2 + " é igual à: " + potenciacao(num1, num2));
        } else if (operador.equals("/")) {
            if (num2.equals(0.0)) {
                System.out.println("Erro: Divisão por zero não é permitida.");
            } else {
                System.out.println("A divisão de " + num1 + " por " + num2 + " é igual à: " + divisao(num1, num2));
            }
        }

        System.out.print("Deseja realizar outra operação? (s/n): ");
        continuar = scanner.next();

        if (continuar.equalsIgnoreCase("s")) {
            main(args); // Chama o método main novamente para reiniciar a calculadora
        } else {
            System.out.println("Calculadora encerrada.");
        }

        scanner.close();
    }

    private static double soma(double num1, double num2) {
        return num1 + num2;
    }

    private static double multiplicacao(double num1, double num2) {
        return num1 * num2;
    }

    private static double subtracao(double num1, double num2) {
        return num1 - num2;
    }

    private static double divisao(double num1, double num2) {
        return num1 / num2;
    }

    private static double potenciacao(double num1, double num2) {
        return Math.pow(num1, num2);
    }
}
