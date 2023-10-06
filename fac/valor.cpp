#include <iostream>
using namespace std;

int main() {
    float valor1, valor2, soma, res; // Corrigi a declaração das variáveis
    cout << "Digite um numero: "; // cout = ESCREVA
    cin >> valor1; // cin = LEIA
    cout << "Digite outro numero: ";
    cin >> valor2;

    soma = valor1 + valor2; // Corrigi para a soma em vez de divisão
    res = soma; // Corrigi para atribuir a soma à variável 'res'

    cout << "A resposta e: " << res << endl; // Adicionei endl para pular linha
    return 0; // Adicionei a declaração de retorno
}
