#include <iostream>
using namespace std;

int main(){
    int num,vnum;
    cout << "enter number: " << endl;
    cin >> num;
    int org = num;
    int pnum=0;
    while (num!=0){
        vnum = num % 10;
        // cout << vnum  endl;;
        pnum = (pnum * 10) + vnum;
        // pnum*=10;
        num = num/10;

    }
    cout << pnum << endl;
    cout << org << endl;
    return 0;
}