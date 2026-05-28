#include <iostream>
using namespace std;

int main()
{
    int n=0;
    cout << "Enter n: ";
    cin >> n;

    // cout << "Pattern -1 " << endl;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){

    //         cout <<  "* ";
    //     }
    //     cout<< endl;
    // }

    // cout << "Pattern-2" << endl;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n; j++){

    //         cout <<  "* ";
    //     }
    //     cout<< endl;
    // }

    // cout << "Pattern-3" << endl;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){

    //         cout <<  j << " ";
    //     }
    //     cout<< endl;
    // }

    // cout << "Pattern-4" << endl;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n+1-i; j++){

    //         cout << "* ";
    //     }
    //     cout<< endl;
    // }

    // cout << "Pattern-6" << endl;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n+1-i; j++){

    //         cout <<  j <<" ";
    //     }
    //     cout<< endl;
    // }

//     cout << "Pattern-7" << endl;
//    for (int i = 0; i < n; i++) 
//    {
            
//             for (int j=0; j <n-i-1; j++) {
//                 cout << " ";
//             }

//             for (int j = 0; j <2*i+1; j++) {
//                 cout << "*";
//             }

//             for (int j = 0; j <n-i-1; j++) {
//                 cout << " ";
//             }

//             cout << endl;
//     }
    
    // cout << "Pattern-8" << endl;
    // for(int i=0; i<n; i++)
    // {
    //     for(int j=0; j<i; j++)
    //     {
    //         cout << " ";

    //     }
    //     for(int j=0; j<2*n-(2*i+1); j++)
    //     {
    //         cout << "*";

    //     }
    //     for(int j=0; j<i; j++)
    //     {
    //         cout << " ";

    //     }
    //     cout << endl;
    // }

    // cout << "Pattern-9" << endl;
    // for(int i=0; i<n; i++)
    // {
    //     for (int j=0; j <n-i-1; j++) {
    //         cout << " ";
    //     }

    //     for (int j = 0; j <2*i+1; j++) {
    //         cout << "*";
    //         }
    //     for (int j = 0; j <n-i-1; j++) {
    //           cout << " ";
    //         }
    //     cout << endl;
    // }

    // for(int i=0; i<n; i++)
    // {
    //     for(int j=0; j<i; j++)
    //     {
    //         cout << " ";

    //     }
    //     for(int j=0; j<2*n-(2*i+1); j++)
    //     {
    //         cout << "*";

    //     }
    //     for(int j=0; j<i; j++)
    //     {
    //         cout << " ";

    //     }
    //     cout << endl;
    // }

    // cout << "Pattern -10" << endl;
    // for(int i=1; i<=2*n-1; i++){
    //     int star = i;
    //     if(i>n) star=2*n-i;
    //     for(int j=1; j<=star; j++){
            
    //         cout <<  "*";
    //     }
    //     cout<< endl;
    // }

    // cout << "Pattern -11" << endl;
    // int num=0;
    // for(int i=1; i<=n; i++){
    //     if(i%2!=0)  num=1;

    //     for(int j=1; j<=i; j++){

    //         cout <<  num;
    //         num = 1-num;
    //     }
    //     cout<< endl;
    // }

    cout << "Pattern -12" << endl;
    for(int i=1; i<=n; i++){
        char ch = 'A';
        for(int j=1; j<=i; j++){

            cout <<  ch;
            ch++;
        }
        cout<< endl;
    }

    
}
