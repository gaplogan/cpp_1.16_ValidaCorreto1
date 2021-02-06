#include <iostream>
#include <locale>
#include <cmath> // math.h

using namespace std;

int main()
{
    // Idioma Português
    setlocale(LC_ALL, "Portuguese");

    //Declaração de variáveis
    double num, raiz;

    //{entrada de dados}
    num = -1; //valor inicial conveniente para testar a validação
    while (num < 0)
    {
        cout << "Digite um número positivo: ";
        cin >> num;
        if (num < 0) // Redundância de verificação, isto pode ser melhorado !!!
        {
            cout << "Valor Inválido";
        }                
        cout << endl; // Pular linha"
    }

    //{Processamento: Tenta extrair a raiz quadrada do número lido}
    raiz = sqrt(num);

    //{Saída de dados}
    cout << "Raiz quadrada de " << num << ": " << raiz << endl;

    return 0;
}