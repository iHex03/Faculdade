package interfaceAereo;

public class Aeroporto
{
    private void aceita(TransporteAereo veiculo)
    {
        System.out.println("-----------------------------");
        veiculo.voar(veiculo.getOrigem(), veiculo.getDestino(), veiculo.getPassageiros());
        System.out.println("\nVeiculo aceito! Boa viagem.");
        System.out.println("-----------------------------");
    }

    public void getAceita(TransporteAereo veiculo)
    {
        aceita(veiculo);
    }
}