#include <iostream>
#include <stdlib.h>

using namespace std;

void printMt(char mat[][5])
{
    char *i;
    for(i=mat[0]; i<mat[0]+20; i++)
    {
        cout<<"{ "<<*i<<" }";
        if(i==mat[0]+4 || i==mat[1]+4 ||i==mat[2]+4)
        {
            cout<<endl;
        }
    }
}

bool Gane(char mat[][5], char signo)
{
    for(char *i=mat[0]; i<mat[0]+20; i++)
    {
        if(*i==signo)
        {
            if(*(i+4)==signo && *(i+8)==signo && *(i+12)==signo)//  (\)
            {
                return true;
            }
            else if(*(i+6)==signo && *(i+12)==signo && *(i+18)==signo)// (/)
            {
                return true;
            }
            else if(*(i+1)==signo && *(i+2)==signo && *(i+3)==signo)// (--)
            {
                return true;
            }
            else if(*(i+5)==signo && *(i+10)==signo && *(i+15)==signo)// (|)
            {
                return true;
            }
        }
    }
    return false;
}

void Colocar(char mat[][5], int columna, char signo, int &refTurno)
{
    int *i= new int;
    for(*i=0; mat[*i][columna-1]==' ' && *i<4; (*i)++)
    {}
    (*i)--;
    if(mat[*i][columna-1]==' ')
    {
        refTurno++;
    }
    mat[*i][columna-1]=signo;
    delete i;
}

void Cuatro_Linea(char mat[][5])
{
    int columna;
    int turno=0;
    bool gane=Gane(mat,'X');
    char signo;
    while(!gane)
    {
        if(turno%2==0)
        {
            cout<<"\"X\""<<endl;
            signo='X';
        }
        else
        {
            cout<<"\"O\""<<endl;
            signo='O';
        }
        printMt(mat);
        cout<<"\ncolumna: ";
        cin>>columna;
        cout<<endl;
        if(columna>0 && columna<6)
        {
            Colocar(mat,columna,signo,turno);
        }
        else
        {
            cout<<"solo hay 5 columnas"<<endl;
        }
        system("cls");
        gane=Gane(mat,'X');

    }
    cout<<"GANOOOOO LAAAAAA "<<signo<<endl;
}

int main()
{
    char mat_vacia[4][5]={{' ',' ',' ',' ',' '},{' ',' ',' ',' ',' '},{' ',' ',' ',' ',' '},{' ',' ',' ',' ',' '}};
    Cuatro_Linea(mat_vacia);
    return 0;
}
