import interfaceAereo.*;

public class AppAeroporto{
    public static void main(String args[])
    {
        Dragao dragaoBranco = new Dragao("Draconato","Branco",8,"Montanha","Ilhas",4);
        Helicoptero helicopteroRec = new Helicoptero("Barbosa","Recreativo",5,"Sorocaba","Mongagua",1);
        Aviao aviaoTransporte = new Aviao("Airlines","Comercial",80,"Salto","Itu",42);


        Aeroporto Airlines = new Aeroporto();
        Aeroporto Montanha = new Aeroporto();
        Aeroporto Sorocaba = new Aeroporto();

        Montanha.getAceita(dragaoBranco);
        Sorocaba.getAceita(helicopteroRec);
        Airlines.getAceita(aviaoTransporte);
    }
}