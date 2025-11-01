#include <iostream>
using namespace std;


bool isPowerOfTwo(int x){
    if((x & (x- 1))== 0) return true ;
return false;
}
int main(){
int number = 32;
bool isITOwer  = isPowerOfTwo(number);
cout << isITOwer << endl;
    return 0;
}
