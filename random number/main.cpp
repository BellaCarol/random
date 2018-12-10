#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{

int unesenibroj;
cout<<"Unesite broj!"<<endl;

int zamisljenibroj = rand()% 100 + 1;

cin>>unesenibroj;

    if (zamisljenibroj < unesenibroj || zamisljenibroj> unesenibroj)
{
     cout<<"HLADNO"<<endl;
}

   else

{

    cout<<"VRUCE"<<endl;
}

}



