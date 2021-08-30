public class Biscoito extends Produto implements Comparable<Biscoito>
{
    private int qtdCancerigenos;

    public Biscoito(String nome, double preco, int qtdCancerigenos)
    {
        super(nome, preco);
        this.qtdCancerigenos = qtdCancerigenos;
    }

    public int getQtdCancerigenos()
    {
        return qtdCancerigenos;
    }

    public void infoProd()
    {
        System.out.println("Nome: "+ super.getNome() + ", Preco: "+ super.getPreco() + ", Componentes Cancerigenos: " + qtdCancerigenos);
    }

    @Override
    public int compareTo(Biscoito compare)
    {
        return Double.compare(super.getPreco()/this.getQtdCancerigenos(), compare.getPreco()/compare.getQtdCancerigenos());
    }
}
