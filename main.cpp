/******Descripcion del tema*********
Uso de metodo burbuja
es una manera de ordenamiento

**************/
/*********Librerias******/
#include <iostream>
#include <conio.h>
#include <ctime>
#include <cstdlib>
/*********Usings************/
using namespace std;
/**********Prototipos****************/
void randomNumbers();
void Bubblesort();
void imprimir();
/*********Variables Globales********/
// Este length es el tamaño del arreglo me dio hueva hacer una estructura
int length = 10000;
//Declaramos arreglo dinamico
int *numeros = new int[0];
/*************Funcion Main**********/
int main(int argc, char const *argv[])
{
    /********Variables locales*****/
    /*****************************/
    /****asi se llama a una FUNCION SIN PARAMETROS****/
    randomNumbers();
    Bubblesort();
    imprimir();
    /*********El metodo o funcion clock de la libreria ctime (en c++), o time.h (en c), da el tiempo desde que inicia el programa.***/
    cout << "Tiempo de ejecucion: " << clock() << "ms" << endl;
    /***Getch este metodo cuando das click cualquier caracter del teclado***/
    getch();
    return 0;
}
/****************Metodos o funciones************/
void randomNumbers()
{
    // Rand es un metodo de cstdlib (en c++), y stdlib.h (en c), se divide entre 100 para que de un numero entre 0 y 100, y se le suma para que de entre 1 y 100.
    // length = rand() % 1000 + 1;
    *&numeros = new int[length];
    cout << "Arreglo desordenado: ";
    for (int i = 0; i < length; i++)
    {
        *&numeros[i] = rand() % 1000;
        cout << *&numeros[i] << ",";
    }
    cout << endl;
}
void Bubblesort()
{
    int aux = 0;
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length - 1; j++)
        {
            int num1 = *&numeros[j];
            int num2 = *&numeros[j + 1];
            if (num1 > num2)
            {
                aux = num1;
                *&numeros[j] = num2;
                *&numeros[j + 1] = aux;
            }
        }
    }
}
void imprimir()
{
    cout << "Arreglo ordenado: ";
    for (int i = 0; i < length; i++)
    {
        cout << *&numeros[i] << ",";
    }
    cout << endl;
}