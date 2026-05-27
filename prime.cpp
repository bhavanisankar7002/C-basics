#include <iostream>
using namespace std;

int prime(int n){

    if(n < 2){
        return 0;
    }

    for(int i=2; i<n; i++){

        if(n%i == 0){
            return prime(n-1);
        }
    }

    cout << n << " ";

    return prime(n-1);
}

int main(){
    int n=0;
    cin >> n;
    prime(n);

    return 0;
}