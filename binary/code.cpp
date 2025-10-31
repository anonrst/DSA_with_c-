#include <iostream>
using namespace std;


int binaryToDEc(int binary){
int decimal = 0;
int power = 1;
while(binary > 0){
    int reminder = binary % 2;
    decimal += reminder * power;
    power = power * 2;
    binary = binary / 10;
}
return decimal;
}
int main(){
    // int decimal = 30;
    // int binary = 0;
    // int power = 1;
    // while(decimal > 0){
    //     int remind = decimal % 2;
    //     decimal = decimal / 2;
    //     binary += power*remind;
    //     power = power * 10;
    // }
    // cout << binary << endl;
int num = 110;
    int decimal = binaryToDEc(num);
    cout << decimal << endl;

    return 0;
}