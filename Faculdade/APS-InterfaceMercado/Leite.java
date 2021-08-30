public class Leite extends Produto implements Comparable<Leite>
{
    private int validade;

    public Leite(String nome, double preco, int validade)
    {
        super(nome, preco);
        this.validade = validade;
    }

    public int getValidade()
    {
        return validade;
    }

    public void infoProd()
    {
        System.out.println("Nome: "+ super.getNome() + ", Preco: "+ super.getPreco() + ", Data de Validade: " + validade);
    }

    @Override
    public int compareTo(Leite compare)
    {
        return Double.compare(super.getPreco()/this.getValidade(), compare.getPreco()/compare.getValidade());
    }
}
