#include <iostream>
#include <stdexcept> // Para std::out_of_range
using namespace std;

// Função que espera 21 parâmetros de entrada
void processInputs(int* inputs, int size) {
    if (size < 21) {
        throw out_of_range("Erro: Número insuficiente de parâmetros fornecidos. Esperados 21, mas recebidos menos.");
    }
    
    // Simulação de uso dos 21 parâmetros
    for (int i = 0; i < 21; ++i) {
        cout << "Parâmetro " << i + 1 << ": " << inputs[i] << endl;
    }
}

int main() {
    try {
        // Definindo 20 parâmetros (um a menos que o esperado)
        int inputParameters[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

        // Chamada da função com 20 parâmetros em vez de 21
        processInputs(inputParameters, sizeof(inputParameters)/4); // O sizeof é dividido por 4, pois está contando o número de bytes, como um int tem 4 bytes, precisamos dividir por 4
    } catch (const out_of_range& e) {
        // Captura e exibe o erro
        cerr << e.what() << endl;
    }
    return 0;
}
