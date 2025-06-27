
import java.util.Scanner;

public class Calculadora {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
    }

    private static double soma(double num1, double num2){
        return num1 + num2;
    }

    private static double multiplicacao(double num1, double num2){
        return num1 * num2;
    }

    private static double subtracao(double num1, double num2){
        return num1 - num2;
    }

    private static double divisao(double num1, double num2){
        return num1 / num2;
    }

    private static double potenciacao(double num1, double num2){
        return Math.pow(num1, num2);
    }
}
