#include <iostream>
using namespace std;
 
string wiadomosc="", zaszyfrowana="", zdeszyfrowana="";
 
string zaszyfruj(string wiadomosc) {
     for(int i=0; i<wiadomosc.length(); i++) {
        cout << wiadomosc[i]<<" ";
        wiadomosc[i]+=2; // ASCII
        cout << wiadomosc[i] << endl;
    }
    return wiadomosc;
}
 
string deszyfruj (string wiadomosc) {
    for(int i=0; i<wiadomosc.length(); i++) {
        cout << wiadomosc[i]<<" ";
        wiadomosc[i]-=2; // ASCII
        cout << wiadomosc[i] << endl;
    }
    return wiadomosc;
}
 
int main()
{
    cout<<"Szyfr cezara" << endl;
    cout<<"Podaj wiadomość"<<endl;
    cin>>wiadomosc;
 
   zaszyfrowana = zaszyfruj(wiadomosc);
   cout << deszyfruj(zaszyfrowana) << endl;
 
    return 0;
}
