#include <iostream>

using namespace std;

int main()
{
    int tablica[3];
    int wynik=0;
    for(int i=0; i<3; i++)
        {
            cout <<"podaj "<<i+1<<"liczbe"<<endl;
            cin>>tablica[i];
        }
        for(int a=0; a<3; a++)
        {
            wynik+=tablica[a];
        }
        
        cout<<endl<<"wynik: "<<wynik;
    
    return 0;
}
