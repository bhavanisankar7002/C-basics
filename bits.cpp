#include <iostream>
#include <cmath>
using namespace std;

int decimalToBinary(int n) {
    while(n>0){
        int bit = n%2;
        cout << bit << endl;
        n/=2;
    }
}

int decimalToBinaryMethod(int n){
    int i=0,bin=0;
    while(n>0){
        int bit = n%2;
        bin = bit*pow(10, i++) + bin;
    
        n/=2;
    }
    return bin;
}

int binaryToDecimal(int N){
    int i=0, sum=0;
    while(N>0){
        int dig = N%10;
        sum += dig*pow(2,i);
        i++;
        N = N/10;
    }
    return sum;
}

int main(){
    int n=0;
    cin >> n;

    int binary = decimalToBinary(n);
    cout << binary << endl;

    int binaryd = decimalToBinaryMethod(n);
    cout << binaryd << endl;

    int N=0;
    cin >> N;
    cout << binaryToDecimal(N);

    return 0;
}