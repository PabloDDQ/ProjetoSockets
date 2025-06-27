import java.util.Scanner;

public class CapturadeDados {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);


        System.out.print("Digite o primeiro número: ");
        Double num1 = scanner.nextDouble();

        System.out.print("Digite o segundo número: ");
        Double num2 = scanner.nextDouble();

        Double soma = num1 + num2;


        System.out.print(soma);
    
        
    }
    
}
