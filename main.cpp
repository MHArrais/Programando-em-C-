#include <iostream>

using namespace std;

int main()
{
    int valor_litro, valor_peca, valor_desconto, taxa, valor1000, valoralem, distancia, frete_km, pecas, qtd_alem, rastreia;
    int total_frete;
    int regiao;


    cout << "Digite o total de pecas: " << endl;
    cin >> pecas;
    cout << "Digite o valor do litro de combustivel" << endl;
    cin >> valor_litro;
    cout << "Quer com rastreamento?" << endl;
    cout << "1 - Sim " << endl;
    cout << "2 - Nao " << endl;
    cin >> rastreia;
       if (rastreia <= 1) {
        taxa = 200;
        cout << "---Com rastreamento---" << endl;
    } else {
        taxa = 0;
        cout << "---Sem rastreamento---" << endl;
        }

    cout << "Digite a distancia em KM: " << endl;
    cin >> distancia;
    cout << "Regioes para Frete: " << endl;
    cout << "1 - Sul: " << endl;
    cout << "2 - Sudeste: " << endl;
    cout << "3 - Centro Oeste" << endl;
    cout << "Digite a regiao: " << endl;
    cin >> regiao;
    if (pecas <= 1000) {
        if(regiao = 1) {
            valor_peca = 1.00*pecas;
        } else {
        if(regiao = 2)
            {
                valor_peca = 1.20*pecas;
            } else{
            valor_peca = 1.30*pecas;
            }
        }
    } else {
    qtd_alem = (pecas - 1000);
    }
    if(regiao = 1) {
        valor_desconto = 1.00 - (1.0*10/100);
        valor1000 = 1000*1.00;
        valoralem = qtd_alem * valor_desconto;
        valor_peca = valor1000 + valoralem;
    } else{
    if(regiao = 2)
        {
        valor_desconto <- 1.20 - (1.0 * 12/100);
        valor1000 = 1000 * 1.20;
        valoralem = qtd_alem*valor_desconto;
        valor_peca = valor1000+valoralem;
        } else{
        valor_desconto <- 1.30 - (1.0 * 13/100);
        valor1000 = 1000 * 1.30;
        valoralem = qtd_alem * valor_desconto;
        valor_peca = valor1000 + valoralem;
        }
    }
    frete_km = distancia * valor_litro;
    total_frete = taxa + valor_peca + frete_km;
    cout << "Valor da taxa do frete (rastreamento) = " << taxa << endl;
    cout << "Valor frete pelas pecas e regiao = " << valor_peca << endl;
    cout << "Valor Total por KM = " << frete_km << endl;
    cout << "Valor Total do Frete = " << total_frete << endl;







    return 0;
}

