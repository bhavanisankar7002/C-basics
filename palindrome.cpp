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

        pnum = (pnum * 10) + vnum;
         num = num/10;

    }
    cout << pnum << endl;
    cout << org << endl;
    return 0;
}