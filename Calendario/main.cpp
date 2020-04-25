#include <iostream>
#include <string>

using namespace std;


int zeller(int ano,int mes, int dia)// este es una formula que al ingresar estos parametros, te dará 0 si es dom., 1 si es lun., etc.
{
    //Dom 0,  Lun 1, Mart 2, Mier 3, Juev 4, Vier 5, Sab 6
    int a = (14-mes)/12;
    int y = ano - a;
    int m = mes + 12*a - 2;

    int d = (dia + y+ y/4 - y/100 + y/400 + (31*m)/12)%7;
    return d;
}

bool es_o_noes_bisi(int ano)
{
    bool bisiesto=false;
    if(ano%4==0)
    {
        bisiesto=true;
        if (ano%100==0)
        {
            bisiesto=false;
            if (ano%400==0)
            {
                bisiesto=true;
            }
        }
    }
    if(bisiesto==true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int calculator_dias(int mes, int ano)
{
    if(es_o_noes_bisi(ano))
    {
        if(mes==2)
        {
            return 29;
        }
    }
    if (mes==1 ||mes==3 ||mes==5 ||mes==7 ||mes==8 ||mes==10 ||mes==12)
    {
        return 31;
    }
    else if(mes==4 ||mes==6 ||mes==9 ||mes==11)
    {
        return 30;
    }
    else
    {
        return 28;
    }
}

int main()
{
    //CALENDARIO COMPLETO
    int ano;
    cout<<"año: ";
    cin>>ano;
    cout<<endl;
    string meses[12]={"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    for(int mes=1; mes<13; mes++)
    {
        cout<<endl;
        cout<<meses[mes-1]<<endl;
        cout<<"Dom Lun Mar Mie Jue Vie Sab"<<endl;

        int empuje= zeller(ano,mes,1);

        for(int i=0; i<empuje; i++)
        {
            cout<<"    ";
        }

        int n_dias_en_mes = calculator_dias(mes,ano);

        for(int dia=1; dia<=n_dias_en_mes; dia++)
        {
            if(dia<10)
            {
                cout<<" "<<dia<<"  ";
            }
            else
            {
                cout<<" "<<dia<<" ";
            }
            empuje++;
            if(empuje%7==0)
            {
                cout<<endl;
            }
        }
        cout<<endl;
    }
    cout<<endl;cout<<endl;

    //CALENDARIO POR MES
    int mes;

    cout<<"año: ";
    cin>>ano;
    cout<<"mes: ";
    cin>>mes;
    if(mes<1 || mes>12)
    {
        cout<<"te pasaste"<<endl;
        return 0;
    }
    cout<<endl;
    cout<<meses[mes-1]<<endl;
    cout<<"Dom Lun Mar Mie Jue Vie Sab"<<endl;
    int empuje= zeller(ano,mes,1);
    for(int i=0; i<empuje; i++)
    {
        cout<<"    ";
    }
    int n_dias_en_mes = calculator_dias(mes,ano);
    for(int dia=1; dia<=n_dias_en_mes; dia++)
    {
        if(dia<10)
        {
            cout<<" "<<dia<<"  ";
        }
        else
        {
            cout<<" "<<dia<<" ";
        }
        empuje++;
        if(empuje%7==0)
        {
            cout<<endl;
        }
    }
}
