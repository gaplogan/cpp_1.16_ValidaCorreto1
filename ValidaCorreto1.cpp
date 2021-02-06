#include <iostream>
#include <locale>
#include <cmath> // math.h

using namespace std;

int main()
{
    // Idioma Portugu�s
    setlocale(LC_ALL, "Portuguese");

    //Declara��o de vari�veis
    double num, raiz;

    //{entrada de dados}
    num = -1; //valor inicial conveniente para testar a valida��o
    while (num < 0)
    {
        cout << "Digite um n�mero positivo: ";
        cin >> num;
        if (num < 0) // Redund�ncia de verifica��o, isto pode ser melhorado !!!
        {
            cout << "Valor Inv�lido";
        }                
        cout << endl; // Pular linha"
    }

    //{Processamento: Tenta extrair a raiz quadrada do n�mero lido}
    raiz = sqrt(num);

    //{Sa�da de dados}
    cout << "Raiz quadrada de " << num << ": " << raiz << endl;

    return 0;
}