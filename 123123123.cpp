#include <iostream>
using namespace std;

int fib(int n){
    if(n == 1) return 1234;
    else if(n == 2) return 1010;
    else if(n == 3) return 44;
    else return fib(n-1) - fib(n-2) + fib(n-3);
}

int main(){
    cout << "fib(24)" << fib(24) << endl;
    cout << "fib(19)" << fib(19) << endl;
    cout << "fib(8)" << fib(8) << endl;
    cout << "fib(14)" << fib(14) << endl;
return 0;
}
