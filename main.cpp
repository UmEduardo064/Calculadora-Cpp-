#include <iostream>
#include <stdlib.h>


using namespace std;

int main()
{
    int opcao;
    int num1, num2;
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
            case 0:
                continuar = false;
            break;

            case 1:
                cout << "digite dois numeros" << endl;
                cin >> num1; cin >> num2;

                cout << "Resposta: " << num1+num2 << endl;
            break;

            case 2:
                cout << "digite dois numeros" << endl;
                cin >> num1; cin >> num2;

                cout << "Resposta: " << num1-num2 << endl;
            break;

            case 3:
                cout << "digite dois numeros" << endl;
                cin >> num1; cin >> num2;

                cout << "Resposta: " << num1*num2 << endl;
            break;

            case 4:
                cout << "digite dois numeros" << endl;
                cin >> num1; cin >> num2;

                cout << "Resposta: " << num1/num2 << endl;
            break;

            default: cout << "Error" endl;
        }

        cout << "Quer continuar(S/N)" << endl;
        cin >> prosseguir;

        if(prosseguir != 'S' && prosseguir != 's')
            continuar = false;
    }
    return 0;
}
