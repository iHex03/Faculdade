package interfaceAereo;

public class Helicoptero extends Aereo implements TransporteAereo
{
    private String origem;
    private String destino;
    private int passageiros;

    public Helicoptero(String fabricante, String modelo, int qtdPassageiros, String origem, String destino, int passageiros)
    {
        super(fabricante, modelo, qtdPassageiros);


        this.origem = origem;
        this.destino = destino;
        this.passageiros = passageiros;
    }

    
    public String getOrigem()
    {
        return origem;
    }

    public String getDestino()
    {
        return destino;
    }

    public int getPassageiros()
    {
        return passageiros;
    }

    public void voar(String origem, String destino, int passageiros)
    {
        System.out.println("    Origem: "+origem);
        System.out.println("    Destino: "+destino);
        System.out.println("    Passageiros: "+passageiros);
    }
}