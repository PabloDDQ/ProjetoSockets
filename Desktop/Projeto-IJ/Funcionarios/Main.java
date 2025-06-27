package Funcionarios;

import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ArrayList<Trabalhador> trabalhadores = new ArrayList<>();
        boolean querAdicionar = true;  // Variável de controle para adicionar trabalhadores

        // Loop para adicionar trabalhadores
        do {
            System.out.println("Deseja adicionar um trabalhador (S/N): ");
            String resposta = scanner.nextLine().toLowerCase();

            if (resposta.equals("n")) {
                querAdicionar = false;
                break; // Encerra o loop externo se o usuário não quiser adicionar mais trabalhadores
            }

            // Pergunta o tipo de trabalhador
            do {
                System.out.println("Qual tipo de trabalhador deseja adicionar? (1 - Registrado / 2 - Tercerizado): ");
                int tipo = scanner.nextInt();
                scanner.nextLine(); // Consumir o newline após o nextInt()

                if (tipo != 1 && tipo != 2) {
                    System.out.println("Opção inválida! Digite 1 para Registrado ou 2 para Tercerizado.");
                    continue; // Volta para perguntar o tipo de trabalhador novamente
                }

                System.out.print("Nome: ");
                String nome = scanner.nextLine();
                System.out.print("Valor por hora: ");
                double valorHora = scanner.nextDouble();
                System.out.print("Horas trabalhadas: ");
                int horasTrabalhadas = scanner.nextInt();
                scanner.nextLine(); // Consumir o newline após o nextInt()

                Trabalhador trabalhador;
                if (tipo == 1) {
                    trabalhador = new Registrado(nome, valorHora, horasTrabalhadas);
                } else {
                    trabalhador = new Tercerizado(nome, valorHora, horasTrabalhadas);
                }

                // Adiciona o trabalhador ao ArrayList
                trabalhadores.add(trabalhador);

                System.out.println("Trabalhador adicionado com sucesso!");
                System.out.println("Deseja adicionar outro trabalhador? (S/N): ");
                resposta = scanner.nextLine().toLowerCase();

                if (resposta.equals("n")) {
                    querAdicionar = false;
                    break; // Encerra o loop de adicionar trabalhadores
                }
            } while (querAdicionar);

        } while (querAdicionar);

        // Exibe todos os trabalhadores e seus salários
        System.out.println("\nLista de trabalhadores e seus salários:");
        for (Trabalhador t : trabalhadores) {
            System.out.println(t.getNome() + " - Salário: R$ " + t.calcularSalario());
        }

        scanner.close();  // Fechamento do scanner
    }
}
