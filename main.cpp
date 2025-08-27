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
    endd = 1;
    cout << "Quantidade de numeros: " << endl;
    cin >> tamanho;

    cout << "Inicie a Divisao: ";
    cin >> num1;

    for(int i = 1; i <= tamanho; i++)
    {
        cout << "|_ ";
        cin >> num1;
        endd /= num1;
    }

    cout << "Resposta final: " << endd << endl;
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

            default: cout << "Error" << endl;
        }

        cout << "Quer continuar(S/N)" << endl;
        cin >> prosseguir;

        if(prosseguir != 'S' && prosseguir != 's')
            continuar = false;
    }
    return 0;
}
