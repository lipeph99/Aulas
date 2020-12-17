#ifndef ALUNO_H
#define ALUNO_H

#include <string>

struct Aluno {
    std::string nome;
    float notas[3];
    float maiorNota();
};

#endif