#include <iostream>
#include <string>

using namespace std;

int cant(long long x)
{
    int cantidad=0;
    while(x>0)
    {
        x/=10;
        cantidad++;
    }
    return cantidad;
}

int main()
{
    string palabras_clave [38]={"uno","un","dos","tres","cuatro","cinco","sies","siete","ocho","nueve","diez",
    "once","doce","trece","catorce","quince","dieci","veinte","veinti","treinta","cuarenta","cincuenta","sesenta","ochenta",
    "noventa","cien","ciento","doscientos","trecientos","cuatrocientos","quinientos","seiscientos","setecientos","ochocientos",
    "novecientos","mil","millon","millones"};
    long long num;
    cin>>num;
    int cantidad=cant(num);


}
