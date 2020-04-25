#include <iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;
    int l[9]={1000, 500, 200, 100, 50, 20, 10, 5, 1};
    for(int *ptrl=l; num>0; ptrl++)
    {
        short c=num/(*ptrl);
        num%=(*ptrl);
        if (c!=0)
        {
            if (c>1)
            {
                cout<<c<<" billetes de "<<*ptrl<<endl;
            }
            else if (c==1)
            {
                cout<<c<<" billete de "<<*ptrl<<endl;
            }
        }
    }
}
