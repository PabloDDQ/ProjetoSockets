package ContaBancaria;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String resposta, numeroConta, nome;
        double valorInicial;

        System.out.println("Seja bem-vindo(a) ao nosso banco!");
        System.out.print("Antes de iniciar o programa você já é nosso cliente (S/N): ");
        resposta = scanner.nextLine();

        Informacoes informacoesCadastrado = null;

        if (resposta.equals("S")) {
            System.out.print("Digite o número de sua conta: ");
            numeroConta = scanner.nextLine();
            System.out.print("Digite seu nome: ");
            nome = scanner.nextLine();
            System.out.print("Digite o valor contido na conta R$ ");
            valorInicial = scanner.nextDouble();
            scanner.nextLine();  // Limpar buffer após o valor double

            informacoesCadastrado = new Informacoes(numeroConta, nome, valorInicial);

        } else {
            System.out.print("Digite o número de sua conta: ");
            numeroConta = scanner.nextLine();
            System.out.print("Digite seu nome: ");
            nome = scanner.nextLine();

            informacoesCadastrado = new Informacoes(numeroConta, nome);
        }

        // Exibindo o menu e executando as operações com if-else
        System.out.println("Deseja realizar o quê?");
        System.out.println("1 - Depositar");
        System.out.println("2 - Sacar");
        System.out.println("3 - Sair");
        System.out.print("Escolha uma opção: ");
        int opcao = scanner.nextInt();
        scanner.nextLine();  // Limpar buffer

        if (opcao == 1) {
            System.out.print("Digite o valor para depósito R$ ");
            double valorDeposito = scanner.nextDouble();
            scanner.nextLine();
            informacoesCadastrado.depositarDinheiro(valorDeposito);
            System.out.println("Novo saldo: R$ " + informacoesCadastrado.getValorInicial());
        } else if (opcao == 2) {
            System.out.print("Digite o valor para saque R$ ");
            double valorSaque = scanner.nextDouble();
            scanner.nextLine();  // Limpar buffer
            informacoesCadastrado.retirarDinheiro(valorSaque);
            System.out.println("Novo saldo: R$ " + informacoesCadastrado.getValorInicial());
        } else if (opcao == 3) {
            System.out.println("Saindo...");
        } else {
            System.out.println("Opção inválida. Tente novamente.");
        }

        scanner.close();
    }
}

