#include <iostream>
#include <string>
#include <locale>
#define MAX 10 //Define o tamanho máximo que pode ser trabalhado


using namespace std;

int main()
{
    setlocale(LC_ALL, "");

        int tam_tabela = 0, i = 0, j = 0;

        float tabela_entrada[MAX][MAX];
        float tabela_dif_div[MAX][MAX];

        for(i = 0; i < MAX-1; i++){
            for(j = 0; j < MAX - 1; j++){
                tabela_dif_div[i][j] = INT_MIN;
            }
        }

        for(i = 0; i < 2; i++){
            for(j = 0; j < MAX - 1; j++){
                tabela_entrada[i][j] = INT_MIN;
            }
        }

        cout << "Informe o tamanho da tabela de entrada: ";
        cin >> tam_tabela;

        cout << "\nInforme primeiro o valor para 'x' e em seguida o correspondente em 'y'.\n\n";

        for(i = 0; i < tam_tabela; i++){
            cout << "Valor X["<<i<<"] = ";
            cin >> tabela_entrada[0][i];
            cout << "Valor Y["<<i<<"] = ";
            cin >> tabela_entrada[1][i];
        }

        for(i = 0; i < tam_tabela; i++) // como o tabela_dif_div depende dos valores de f(x) ele é copiado para a matriz tabela_dif_div
            tabela_dif_div[i][0] = tabela_entrada[1][i];

        int ordem = 0, linha = tam_tabela, aux = 0;
        for(ordem = 1; ordem < tam_tabela; ordem++){
            linha--;
            aux = ordem;
            for(j = 0; j <linha; j++){
                tabela_dif_div[j][ordem] = (tabela_dif_div[j+1][ordem-1]-tabela_dif_div[j][ordem-1])/ (tabela_entrada[0][aux]-tabela_entrada[0][j]);
                aux++;
            }
        }

        cout << "\nTabela de diferenças divididas:";
        for(j = 0; j < tam_tabela; j++){
            cout << "\nOrdem("<<j<<")"<< endl;
            for(i = 0; i < 8; i++){
                if(tabela_dif_div[i][j] != INT_MIN){
                    cout << "\tLinha["<<i<<"] Valor: "<<tabela_dif_div[i][j] << endl;
                }
            }
        }

        cout <<"\n\nPolinômio de Newton:\n";
        string polinomio;

        string str1 = "", str2 ="";
        for(ordem = 0; ordem < tam_tabela - 1; ordem++){
            str1 = "";
            for(i = 0; i < ordem+1; i++){
                if(tabela_entrada[0][i]>=0){
                    str1 = str1 + "(x - " + to_string(tabela_entrada[0][i]) + ")";
                }
                else{
                    str1 = str1 + "(x + " + to_string(tabela_entrada[0][i]*-1) + ")";
                }
            }
            str2 = str2 + str1 + "("+to_string(tabela_dif_div[0][ordem+1]) + ")";

            if(ordem < tam_tabela - 2){
                str2 = str2 + " + ";
            }
        }

        polinomio = to_string(tabela_dif_div[0][0]) + " + " + str2;

        cout << "p(x) = " + polinomio;
    return 0;
}
