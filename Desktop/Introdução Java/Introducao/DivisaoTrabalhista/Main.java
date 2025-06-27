import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        List<String> funcionariosTerceirizado = new ArrayList<>();
        List<String> funcionariosContratados = new ArrayList<>();

        String tipoProfissional = "";
        double acrescimoTerceirizado = 3.50;

        while (!(tipoProfissional.equalsIgnoreCase("sair"))) {
            System.out.print("Digite se o trabalhador é terceirizado ou contratado (ou 'sair' para finalizar): ");
            tipoProfissional = scanner.nextLine();

            if (tipoProfissional.equalsIgnoreCase("contratado")) {
                System.out.print("Nome do funcionário: ");
                String nomeFuncionario = scanner.nextLine();

                System.out.print("Salário por hora: ");
                double salarioHora = scanner.nextDouble();
                scanner.nextLine();

                System.out.print("Horas trabalhadas no mês: ");
                int horasTrabalhadas = scanner.nextInt();
                scanner.nextLine();

                double totalSalarioContratado = salarioHora * horasTrabalhadas;

                System.out.println("\n--- Dados do Contratado ---");
                System.out.println("Nome: " + nomeFuncionario);
                System.out.println("Salário por Hora: " + String.format("%.2f", salarioHora));
                System.out.println("Horas Trabalhadas: " + horasTrabalhadas);
                System.out.println("Total Salário: " + String.format("%.2f", totalSalarioContratado));
                System.out.println("---------------------------\n");

                funcionariosContratados.add(nomeFuncionario);

            } else if (tipoProfissional.equalsIgnoreCase("terceirizado")) {
                System.out.print("Nome do funcionário: ");
                String nomeFuncionario = scanner.nextLine();

                System.out.print("Salário por hora: ");
                double salarioHora = scanner.nextDouble();
                scanner.nextLine();

                System.out.print("Horas trabalhadas no mês: ");
                int horasTrabalhadas = scanner.nextInt();
                scanner.nextLine();

                double totalSalarioTerceirizado = (salarioHora * horasTrabalhadas) + acrescimoTerceirizado;

                System.out.println("\n--- Dados do Terceirizado ---");
                System.out.println("Nome: " + nomeFuncionario);
                System.out.println("Salário por Hora: " + String.format("%.2f", salarioHora));
                System.out.println("Horas Trabalhadas: " + horasTrabalhadas);
                System.out.println("Acréscimo Terceirizado: " + String.format("%.2f", acrescimoTerceirizado));
                System.out.println("Total Salário: " + String.format("%.2f", totalSalarioTerceirizado));
                System.out.println("-----------------------------\n");

                funcionariosTerceirizado.add(nomeFuncionario);

            } else if (tipoProfissional.equalsIgnoreCase("sair")) {
                System.out.println("Você finalizou o sistema.");
            } else {
                System.out.println("Opção inválida. Digite 'contratado', 'terceirizado' ou 'sair'.");
            }
        }

        System.out.println("\nRegistros de Contratados:");
        for (String nome : funcionariosContratados) {
            System.out.println(nome);
        }

        System.out.println("\nRegistros de Terceirizados:");
        for (String nome : funcionariosTerceirizado) {
            System.out.println(nome);
        }

        scanner.close();
    }
}
