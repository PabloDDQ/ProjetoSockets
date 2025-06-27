public class Potenciacao extends Operacoes{
    public Potenciacao(double num1, double num2) {
        super(num1, num2);
    }

    @Override
    public double calcular(){
        return Math.pow(getNum1(), getNum2());
    }
}
