package ContaBancaria;

public class Informacoes {
    private String numeroConta;
    private String nome;
    private double valorInicial;

    public Informacoes(String numeroConta, String nome, double valorInicial) {
        this.numeroConta = numeroConta;
        this.nome = nome;
        this.valorInicial = valorInicial;
    }

    public Informacoes(String numeroConta, String nome) {
        this.numeroConta = numeroConta;
        this.nome = nome;
    }

    public String getNumeroConta() {
        return numeroConta;
    }

    public void setNumeroConta(String numeroConta) {
        this.numeroConta = numeroConta;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public double getValorInicial() {
        return valorInicial;
    }

    public void setValorInicial(double valorInicial) {
        this.valorInicial = valorInicial;
    }

    public double depositarDinheiro(double valor) {
        valorInicial += valor;
        return valorInicial;
    }

    public double retirarDinheiro(double valor) {
        if (valorInicial >= valor) {
            valorInicial -= valor;
            return valorInicial;
        } else {
            System.out.println("Saldo insuficiente para a retirada.");
            return valorInicial;
        }
    }
}

