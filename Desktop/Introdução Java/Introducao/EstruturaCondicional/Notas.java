import java.util.Scanner;

public class Notas {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        double soma = 0;

        for (int i = 0; i <4 ; i++) {
            System.out.print("Digite a nota " + (i+1) + ": ");
            Double nota = scanner.nextDouble();
            soma += nota;
            
        }

        Double media = ( soma / 4);
        
        System.out.print("A nota final foi " + media);

        if (media <= 4) {
            System.out.println("Reprovado!");
            
        }

        else if (media <= 6) {
            System.out.println("Recuperação");

        }

        else if (media >= 7) {
            System.out.println("Aprovado!");
            
        }



    
}
}
