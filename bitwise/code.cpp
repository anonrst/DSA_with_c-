#include <iostream>
using namespace std;

int reversingAnInt(int x){
    int newNum = 0;
    while(x > 0){
        int reminder = x % 10;
        newNum = (10 * newNum) + reminder;
x = x / 10;
    }
    return newNum;
}
bool isPowerOfTwo(int x){
    if((x & (x- 1))== 0) return true ;
return false;
}
int main(){
// int number = 32;
// bool isITOwer  = isPowerOfTwo(number);
// cout << isITOwer << endl;
int num = 54321;
int reverse = reversingAnInt(num);
cout << reverse << endl;
    return 0;
}
