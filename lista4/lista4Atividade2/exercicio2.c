/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio2.c
 * Author: Caio Costa Lopes
 *
 * Created on 5 de agosto de 2026, 18:03
 */

#include <stdio.h>
#include <stdlib.h>


#define DIA_INICIO_MES 1
#define MES_INICIO_ANO 1

#define QUANTIDADE_MESES_ANO 12

#define JANEIRO 1
#define FEVEREIRO 2
#define MARCO 3
#define ABRIL 4
#define MAIO 5
#define JUNHO 6
#define JULHO 7
#define AGOSTO 8
#define SETEMBRO 9
#define OUTUBRO 10
#define NOVEMBRO 11
#define DEZEMBRO 12

#define MES_28_DIAS 28
#define MES_29_DIAS 29
#define MES_30_DIAS 30
#define MES_31_DIAS 31


typedef struct {
    int dia, mes, ano;
}Data;

Data leData();
int dataIgual(Data dataAtual, Data dataFinal);
Data avancaData(Data data);
void imprimeData(Data data);

int dataAnoBissexto(Data data){
    return (((data.ano % 4 == 0) && (data.ano % 100 != 0)) || ((data.ano % 100 == 0) && (data.ano % 400 == 0)));
}

int quantidadeDiasMes(Data data){
    if (data.mes == FEVEREIRO){
        if (!(dataAnoBissexto(data)))
            return MES_28_DIAS;
        else
            return MES_29_DIAS;
    }else if ((data.mes == ABRIL) || (data.mes == JUNHO) || (data.mes == SETEMBRO) || (data.mes == NOVEMBRO)){
        return MES_30_DIAS;
    }else {
        return MES_31_DIAS;
    }
}

/*
 * Programa que avança de uma data para a outra;
 */
int main(int argc, char** argv) {
    Data dataInicio, dataFim, dataAtual;
    
    dataInicio = leData();
    dataFim = leData();
    
    dataAtual = dataInicio;
    
    while(!(dataIgual(dataAtual, dataFim))) {
        imprimeData(dataAtual);
        dataAtual = avancaData(dataAtual);
    }
    

    return (EXIT_SUCCESS);
}


Data leData(){
    Data data;
    
    scanf("%d %d %d", &data.dia, &data.mes, &data.ano);
    
    return data;
}

int dataIgual(Data dataAtual, Data dataFinal) {
    return ((dataAtual.dia == dataFinal.dia) && (dataAtual.mes == dataFinal.mes) && (dataAtual.ano == dataFinal.ano));
}

Data avancaData(Data data) {
    data.dia += 1;
    if (data.dia > quantidadeDiasMes(data)){
        data.dia = DIA_INICIO_MES;
        
        data.mes += 1;
        if (data.mes > QUANTIDADE_MESES_ANO){
            data.mes = MES_INICIO_ANO;
            data.ano += 1;
        }
    }
    
    return data;
}

void imprimeData(Data data) {
    printf("'%02d/%02d/%04d'\n", data.dia, data.mes, data.ano);
}

