#include <iostream>
#include <stdlib.h>
using namespace std;

void printMt(int mat[][4])
{
    int *i;
    for(i=mat[0]; i<mat[0]+16; i++)
    {
        cout<<"{ "<<*i<<" }";
        if(*i==mat[0][3] || *i==mat[1][3] ||*i==mat[2][3] )
        {
            cout<<endl;
        }
    }
}

bool Comparacion(int mat[][4])
{
    bool c=false;
    int mat_o[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,0}};
    for(int *i=mat[0], *j=mat_o[0]; i<mat[0]+16 && *j==*i; i++, j++)
    {
        if(i==mat[0]+15)
        {
            c=true;
        }
    }
    return c;
}

void Change(int mat[][4], char dir)
{
    int *i;
    bool encontrado=false;
    for(i=mat[0]; i<mat[0]+16 && encontrado==false; i++)
    {
        if(*i==0)
        {
            encontrado=true;
        }
    }
    i--;

    if(dir=='w')
    {
        if(i > mat[0]+3)
        {
            swap(*i,*(i-4));
        }
    }
    if(dir=='s')
    {
        if(i < mat[3])
        {
            swap(*i,*(i+4));
        }
    }
    if(dir=='a')
    {
        if(i != mat[0] && i != mat[1] && i != mat[2] && i != mat[3])
        {
            swap(*i,*(i-1));
        }
    }
    if(dir=='d')
    {
        if(i != mat[0]+3 && i != mat[1]+3 && i != mat[2]+3 && i != mat[3]+3)
        {
            swap(*i,*(i+1));
        }
    }
}

void juego_15(int mat[][4])
{
    char dir;
    bool comparacion=Comparacion(mat);
    while(!comparacion)
    {
        printMt(mat);
        cout<<"\nw(arriba)\na(izq)\ns(abajo)\nd(der)\n";
        cin>>dir;
        Change(mat,dir);
        comparacion=Comparacion(mat);
        system("cls");
    }
    cout<<"GANASTE"<<endl;
}


int main()
{

    int arr_des[4][4]={{10,11,2,3},{4,5,6,7},{8,9,15,12},{13,14,0,1}};
    //int mat[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,0},{13,14,15,12}};
    juego_15(arr_des);

    return 0;
}
