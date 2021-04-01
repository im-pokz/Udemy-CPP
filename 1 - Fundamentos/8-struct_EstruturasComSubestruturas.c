#include <stdio.h>

typedef struct Data{
    int dia;
    int mes;
    int ano;
}Data;

struct Aluno{
    int id;
    Data nascimento;
};

int main(){

    //Criando um aluno
    struct Aluno aluno1;

    //Modificando valors
    aluno1.id = 15;
    aluno1.nascimento.ano = 2001;
    aluno1.nascimento.mes = 5;
    aluno1.nascimento.dia = 26;

    printf("Id: %d, Nascido em: %d / %d / %d", aluno1.id, aluno1.nascimento.dia, aluno1.nascimento.mes, aluno1.nascimento.ano);

    return 0;
}
