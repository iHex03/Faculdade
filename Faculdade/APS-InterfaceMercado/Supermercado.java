import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class Supermercado
{
    public static void main(String args[])
    {
        Biscoito[] biscoitos = new Biscoito[3];
        Leite[] leites = new Leite[3];
        Shampoo[] shampoos = new Shampoo[3];


        biscoitos[0] = new Biscoito("Oreo", 5.00, 2);
        biscoitos[1] = new Biscoito("Trakinas", 3.25, 4);
        biscoitos[2] = new Biscoito("Bauducco", 4.20, 1);

        leites[0] = new Leite("Integral", 1.80, 30);
        leites[1] = new Leite("Desnatado", 2.30, 25);
        leites[2] = new Leite("Achocolatado", 4.00, 20);

        shampoos[0] = new Shampoo("Head and Shoulders", 7.80, 8);
        shampoos[1] = new Shampoo("Tio Nacho", 12.50, 4);
        shampoos[2] = new Shampoo("Johnsons Baby", 8.99, 3);

        List<Biscoito> listaB = new ArrayList<>();
        listaB.add(biscoitos[0]);
        listaB.add(biscoitos[1]);
        listaB.add(biscoitos[2]);
        Collections.sort(listaB);

        System.out.println("Custo Beneficio dos Biscoitos: \n");
        for(Biscoito biscoito: listaB)
        {
            biscoito.infoProd();
        }

        System.out.println("\n\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n");



        List<Leite> listaL = new ArrayList<>();
        listaL.add(leites[0]);
        listaL.add(leites[1]);
        listaL.add(leites[2]);
        Collections.sort(listaL);

        System.out.println("Custo Beneficio dos Leites: \n");
        for(Leite leite: listaL)
        {
            leite.infoProd();
        }

        System.out.println("\n\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n");



        List<Shampoo> listaS = new ArrayList<>();
        listaS.add(shampoos[0]);
        listaS.add(shampoos[1]);
        listaS.add(shampoos[2]);
        Collections.sort(listaS);

        System.out.println("Custo Beneficio dos Shampoos: \n");
        for(Shampoo shampoo: listaS)
        {
            shampoo.infoProd();
        }

        System.out.println("\n\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n");

    }
}