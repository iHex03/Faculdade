public class Shampoo extends Produto implements Comparable<Shampoo>
{
    private int indexIrritabilidade;

    public Shampoo(String nome, double preco, int indexIrritabilidade)
    {
        super(nome, preco);
        this.indexIrritabilidade = indexIrritabilidade;
    }

    public int getIndexIrritabilidade()
    {
        return indexIrritabilidade;
    }

    public void infoProd()
    {
        System.out.println("Nome: "+ super.getNome() + ", Preco: "+ super.getPreco() + ", Indice de Irritabilidade: " + indexIrritabilidade);
    }

    @Override
    public int compareTo(Shampoo compare)
    {
        return Double.compare(super.getPreco()/this.getIndexIrritabilidade(), compare.getPreco()/compare.getIndexIrritabilidade());
    }
}
