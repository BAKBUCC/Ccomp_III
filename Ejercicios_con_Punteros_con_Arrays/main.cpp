#include <iostream>

using namespace std;
void printArray(int *Ar, int Tam)
{
    cout<<"{";
    for(int i=0; i<Tam; i++)
    {
        if(i<Tam-1)
        {
            cout<<*Ar<<", ";
        }
        else
        {
            cout<<*Ar<<"}";
        }
        Ar++;
    }
}
void ejercicio_1(int *Input,int *Output_1, int *Output_2, int Tam)
{
    for(int i=0; i<Tam; i++)
    {
        if (*Input%2==0)
        {
            *Output_1=*Input;
            *Output_2=0;
        }
        else
        {
            *Output_2=*Input;
            *Output_1=0;
        }
        Output_1++;
        Output_2++;
        Input++;
    }
}

void ejercicio_2(int *Arr, int Tam)
{
    bool intercambio;
    int *Aux,*inicio,*fin;
    do
    {
        inicio=Arr;
        intercambio=false;
        for(int i=0; i<Tam-2; i++)
        {
            Aux=inicio+1;
            if(*inicio>*Aux)
            {
                swap(*inicio,*Aux);
                intercambio=true;
            }
            inicio++;
        }
        if(intercambio==false)
        {
            break;
        }
        fin=Arr+(Tam-2);
        for(int i=Tam-2; i>0; i--)
        {
            Aux=fin+1;
            if(*fin>*Aux)
            {
                swap(*fin,*Aux);
                intercambio=true;
            }
        }
    }
    while(intercambio);

}

void ejercicio_3(int *Input_1, int *Input_2, int *Output, int Tam)
{
    for(int i=0; i<Tam*2; i++)
    {
        if(*Input_1<*Input_2)
        {
            *Output=*Input_1;
            Output++;
            Input_1++;
        }
        else
        {
            *Output=*Input_2;
            Output++;
            Input_2++;
        }
    }
}

int main()
{
    /*
    1.	Construya una función que reciba los siguientes parámetros

        •	3 punteros a enteros, en los que se recibirán 3 arrays de enteros del mismo tamaño,
            llenos con números aleatorios. Los tres punteros se llamaran Input, Output_1 y Output_2
        •	Un entero Tam, que indique el tamaño de los arrays

    La función realizará lo siguiente:
        •	Recorrerá utilizando únicamente aritmética de punteros, el array Input, si el valor del
            elemento es par, copiará el valor del elemento en la lista Output_1 y si es impar en la lista
            Output_2. El recorrido de los arrays tanto de Input como de Output debe ser estrictamente
            usando aritmética de punteros, no siendo permitido el uso de índices,  es decir que no está
            admitido el uso de expresiones como

            o	Output_1 [j] = Input[i]
            o	*(Output_1+j) = *(Input+i)

        Deberá usar expresiones como (es solo un ejemplo, no debe usarse a literal)

        For(Input; Input < Input:fin; Input++)
        {  *Output_1 = *Input; Output_1++; }

        •	Culminada la lectura del array Input, si alguno de los Arrays Output_1 u Output_2,
        no estuvieran llenas, deberán llenar los espacios sobrantes con 0.
    */
    int Tam=6;
    int input[Tam]={5,2,3,1,21,4};
    int output_1[Tam]={};
    int output_2[Tam]={};
    ejercicio_1(input,output_1,output_2,Tam);
    cout<<"EJERCICIO 1\nInput:";
    printArray(input,Tam);
    cout<<"\noutput_1:";
    printArray(output_1,Tam);
    cout<<"\noutput_2:";
    printArray(output_2,Tam);

    /*
    2.	Construya una función que reciba un puntero a entero que apunte al primer elemento de un array y
    un entero que indique cuantos elementos tienen el Array. El array contendrá números aleatorios y estará
    desordenado. La función tendrá que realizar el ordenamiento del array usando el método de ordenación
    Cocktail sort, únicamente utilizando aritmética de punteros.
    */

    Tam=8;
    int arr[Tam]={345,23,12156,75,4242,6436,1,76};
    cout<<"\n\nEJERCICIO 2\narr:";
    printArray(arr,Tam);
    ejercicio_2(arr,Tam);
    cout<<"\narr ordenado: ";
    printArray(arr,Tam);

    /*
    3.	Construya una función que reciba los siguientes parámetros

        •	3 punteros a enteros, en los que se recibirán 3 arrays de enteros

            o	Input 1 e Input2, que son del mismo tamaño y serán los arrays de entrada

                	Input 1, está lleno de enteros pares ordenados no necesariamente consecutivos

                	Input 2, está lleno de enteros impares ordenados no necesariamente consecutivos


            o	Output, un array del doble del tamaño del  los input, y será el array de salida

        •	Un entero Tam, que indique el tamaño de los arrays de entrada

        La función realizará lo siguiente:
            •	Recorrerá utilizando únicamente aritmética de punteros, y deberá mezclar
            los dos arrayas de entrada, en el de salida de tal manera que el array de salida
            sea una lista ordenada.
            •	El programa debe recorrer los 2 arrays de entrada e ir mezclándolos de forma
            ordenada en el de salida. No está permitido copiar un array detrás de otro y luego
            utilizar un algoritmo de ordenación. En caso que eso sea realizado, el ejercicio no
            será considerado válido.
    */
    cout<<"\n\nEJERCICIO 3\nPares: ";
    Tam=7;
    int input_pares[Tam]={2,28,42,42,44,66,180};
    int input_impares[Tam]={23,27,77,79,93,209,3014};
    printArray(input_pares,Tam);
    cout<<"\nImpares: ";
    printArray(input_impares,Tam);
    int output[Tam*2]={};
    ejercicio_3(input_pares,input_impares,output,Tam);
    cout<<"\nOutput: ";
    printArray(output,Tam*2);
}
