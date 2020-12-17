#include <iostream>
#include <iomanip>
#include "aluno.hpp"

int main(){
    Aluno aluno[4];
    int notaMaior=0, alunoMaior=0;
    for (int i=0; i<4;i++){

      std::cin >> aluno[i].nome;

      for (int j=0; j<3;j++){
        std::cin >> aluno[i].notas[j];
      }
    }

    for (int i=0;i<4;i++){
      if (aluno[i].maiorNota() > notaMaior){
        notaMaior = aluno[i].maiorNota();
        alunoMaior = i;
      }
    }
    
    std::cout << std::fixed << std::setprecision(2) << aluno[alunoMaior].nome << " " << aluno[alunoMaior].maiorNota() << std::endl;

    return 0;
}