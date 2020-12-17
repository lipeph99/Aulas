#include "aluno.hpp"

float Aluno::maiorNota() {
    float maior=0;
    for (int i=0; i<3; i++){
        if (notas[i] > maior){
            maior = notas[i];
        }
    }
    return maior;
}