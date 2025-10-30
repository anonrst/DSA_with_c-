#include <iostream>
using namespace std;

// int sumOfDigits(int n){
//     int sum = 0;
//     while(n > 0){
//         int last = n % 10;
//         n = n/10;
//         sum+= last;
        
//     }
//     return sum;
// }

int factorial(int x){
    int let =1;
    for(int i = 0; i < x; i++){
        let *=  i+1;
    }
    return let;
}
int binomialCoefficient(int n , int r){
    return factorial(n) / (factorial(r) * factorial(n-r));
}

bool isPrime(int x){
 bool prime = true;
 if(x <= 1){
    prime = false;
    return true;
 }
 for(int i = 2; i < x/2; i++){
    int numer = x % i;
    if(numer == 0){
        prime = false;
        break;
    }
 }
 return prime;
}


int printALlPrime(int x){
    for(int i = 0; i < x; i++){
         bool thisISPime= isPrime(i);
         if(thisISPime == 1){
            cout << i << endl;
         }
    }

    return 0;
}
int main(){
    int n = 1000;
    int rimt = printALlPrime(n);
    return 0;
}