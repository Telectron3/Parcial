#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#define TAM 10
#define TAMPla 7
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int Identificador;
    int Dni;
    char Nombres[TAM];
    int Edad;

}eProfesores;

typedef struct
{
    int Identificador;
    int Identifica;
    char Marca[TAM];
    char patente[TAM];
    char modelo[TAM];
    int Alta;

}eCoches;

typedef struct
{
    int Identificador;
    int Espacio;

}ePlayon;

void cargaProf(eProfesores[]);
void cargaCoche(eCoches[]);
void cargarPlayon(ePlayon[]);
void altaCoche(eCoches[],eProfesores[]);
void bajaCoche(eCoches[],eProfesores[]);
void ingresoPlayon(eCoches[],ePlayon[],eProfesores[]);
void egresoPlayon(eCoches[],ePlayon[],eProfesores[]);
void mostrar(eProfesores[],eCoches[],ePlayon[]);


#endif // FUNCIONES_H_INCLUDED
