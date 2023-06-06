#include <iostream>
#include <queue>
using namespace std;
/* *
* Lucas Gomes dos Santos
*/
int main() {
    queue<int> senhasGeradas;
    queue<int> senhasAtendidas;
    int senhaAtual = 1;

    while (true) {
        cout << "Selecione uma Opcao:\n";
        cout << "0. Sair\n";
        cout << "1. Gerar senha\n";
        cout << "2. Realizar atendimento\n";
        cout << "Opcao: ";

        int valor;
        cin >> valor;

        switch (valor) {
            case 0:
                if (senhasGeradas.empty()) {
                    cout << "Fila de senhas vazia. Encerrando o programa.\n";
                    cout << "Quantidade de senhas atendidas: " << senhasAtendidas.size() << endl;
                    return 0;
                } else {
                    cout << "Ainda existem senhas aguardando atendimento.\n";
                    break;
                }
            case 1:
                senhasGeradas.push(senhaAtual);
                cout << "Senha gerada: " << senhaAtual << endl;
                senhaAtual++;
                break;
            case 2:
                if (senhasGeradas.empty()) {
                    cout << "Não há senhas para atender.\n";
                } else {
                    int senha = senhasGeradas.front();
                    senhasGeradas.pop();
                    senhasAtendidas.push(senha);
                    cout << "Senha atendida: " << senha << endl;
                }
                break;
            default:
                cout << "Opcao invalida. Digite novamente.\n";
        }

        cout << "Quantidade de senhas aguardando atendimento: " << senhasGeradas.size() << endl;
        cout << endl;
    }
    return 0;
}
