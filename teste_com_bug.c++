#include <iostream>
using namespace std;

// Função que espera 21 parâmetros de entrada
void processInputs(int* inputs, int size) {
    // Simulação de uso dos 21 parâmetros
    for (int i = 0; i < 21; ++i) {
        cout << "Parâmetro " << i + 1 << ": " << inputs[i] << endl;
    }
}

int main() {
    int inputParameters[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    processInputs(inputParameters, sizeof(inputParameters)/4); // O sizeof é dividido por 4, pois está contando o número de bytes, como um int tem 4 bytes, precisamos dividir por 4
    return 0;
}
