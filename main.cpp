#include <iostream>
#include <stdlib.h>

using namespace std;

double num1 = 0;
int tamanho = 0;
double endd = 0;

void som()
{
    cout << "Quantidade de numeros: " << endl;
    cin >> tamanho;

    for(int i = 1; i <= tamanho; i++)
    {
        cout << "|_ ";
        cin >> num1;
        endd += num1;
    }

    cout << "Resposta final: " << endd << endl;
}
void sub()
{
    cout << "Quantidade de numeros: " << endl;
    cin >> tamanho;

    for(int i = 1; i <= tamanho; i++)
    {
        cout << "|_ ";
        cin >> num1;
        endd -= num1;
    }

    cout << "Resposta final: " << endd << endl;
}
void vez()
{
    endd = 1;

    cout << "Quantidade de numeros: " << endl;
    cin >> tamanho;

    for(int i = 1; i <= tamanho; i++)
    {
        cout << "|_ ";
        cin >> num1;
        endd *= num1;
    }

    cout << "Resposta final: " << endd << endl;
}
void div()
{
    double resu;

    cout << "Quantidade de numeros: " << endl;
    cin >> tamanho;

    if(tamanho < 1)
    {
        cout << "Quantidade invalida" << endl;
        return;
    }

    cout << "Digite o Primeiro numero: " << endl;
    cin >> resu;

    for(int i = 1; i < tamanho; i++)
    {
        cout << "|_ ";
        cin >> num1;

        resu /= num1;
    }

    cout << "Resposta final: " << resu << endl;
}
void Fatorial()
{
    long resu = 1;

    cout << "Digite um um numero para fatorar: " << endl;
    cin >> num1;

    if(num1 <= 0)
    {
        cout << "Erro" << endl;
        return;
    }

    for(int i = 1; i <= num1; i++)
        resu *= i;

        cout << "|_ " << resu << endl;


}
int main()
{
    char opcao;

    bool continuar = true;
    char prosseguir = 'S';

    while(continuar == true)
    {
        system("cls");

        cout << "1(+)" << endl;
        cout << "2(-)" << endl;
        cout << "3(*)" << endl;
        cout << "4(/)" << endl;
        cout << "5(!)" << endl;
        cout << " " << endl;
        cout << "0(Sair)" << endl;

        cin >> opcao;

        switch(opcao)
        {
            case '0': continuar = false;
            break;

            case '1': som();
            break;

            case '2': sub();
            break;

            case '3': vez();
            break;

            case '4': div();
            break;

            case '5': Fatorial();
            break;

            default: cout << "Error" << endl;
        }

        cout << "Quer continuar(S/N)" << endl;
        cin >> prosseguir;

        if(prosseguir != 'S' && prosseguir != 's')
            continuar = false;
    }
    return 0;
}
