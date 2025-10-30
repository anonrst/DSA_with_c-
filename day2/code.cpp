#include <iostream>
using namespace std;

int factorial(int n){
    int first = 1;
    for(int i = 1; i <= n; i++){
        first *= i;
    }
    return first;
}

int main(){
    int n = 4;
    int factoiral = factorial(n);
    cout << "the factorial is  " << factoiral << "\n";
    return 0;
}