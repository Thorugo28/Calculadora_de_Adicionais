#include <iostream>

using namespace std;

int main(){
    int tot, cont;
    float pg, pl, v, t, d, r;

    cout << "Quantos produtos voce deseja calcular? ";
    cin >> tot;
    cout << "Qual o valor atual do Dolar?";
    cin >> d;

    for(cont=1;cont<=tot;cont++){
        cout << "Insira o valor do produto (Use . para adicionar a parte decimal): ";
        cin >> v;

        pg = ((v/100)*7);
        t = v+pg;
        pl = ((t/100)*20);
        t = t+pl;
        r = t*d;

        cout << "O valor total do produto em dolares e de: $  " << t;
        cout << "O valor total do produto em reais e de: R$ " << r;

    }

    system("pause");

    return 0;
}