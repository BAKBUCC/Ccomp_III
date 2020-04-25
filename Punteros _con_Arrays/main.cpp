#include <iostream>

using namespace std;

//TODO CON PUNTEROS

void funcion (int *Input, int *Output_1, int *Output_2, int *Tam)
{
    for(int i=0; i<*Tam; i++)
    {
        if(*Input%2==0)
        {
            *Output_1=*Input;
        }
        else
        {
            *Output_1=0;
        }

        if(*Input%2==1)
        {
            *Output_2=*Input;
        }
        else
        {
            *Output_2=0;
        }
        Input++;
        Output_1++;
        Output_2++;
    }
}

int main()
{
    /*
    1. Construya una función que reciba los siguientes parámetros
         3 punteros a enteros, en los que se recibirán 3 arrays de enteros del mismo tamaño, llenos
        con números aleatorios. Los tres punteros se llamaran Input, Output_1 y Output_2
         Un entero Tam, que indique el tamaño de los arrays

        La función realizará lo siguiente:
             Recorrerá utilizando únicamente aritmética de punteros, el array Input, si el valor del
            elemento es par, copiará el valor del elemento en la lista Output_1 y si es impar en la lista
            Output_2. El recorrido de los arrays tanto de Input como de Output debe ser
            estrictamente usando aritmética de punteros, no siendo permitido el uso de índices, es
            decir que no está admitido el uso de expresiones como
                o Output_1 [j] = Input[i]
                o *(Output_1+j) = *(Input+i)
            Deberá usar expresiones como (es solo un ejemplo, no debe usarse a literal)
                    For(Input; Input &lt; Input:fin; Input++)
                        { *Output_1 = *Input; Output_1++; }
             Culminada la lectura del array Input, si alguno de los Arrays Output_1 u Output_2, no
            estuvieran llenas, deberán llenar los espacios sobrantes con 0.
    */

    /*
    2. Construya una función que reciba un puntero a entero que apunte al primer elemento de un
       array y un entero que indique cuantos elementos tienen el Array. El array contendrá números
       aleatorios y estará desordenado. La función tendrá que realizar el ordenamiento del array
       usando el método de ordenación Cocktail sort, únicamente utilizando aritmética de punteros.
    */


}

