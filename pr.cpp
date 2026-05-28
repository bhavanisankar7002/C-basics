#include <iostream>
using namespace std;

// int main(){
//     int a=10;
//     float b=3.3;
//     float c=a/b;
//     cout << c;
//     // cout << a << endl;
//     cout << b<<endl;
// }

int reverseArray(int arr[], int size)
{
    int i=0,j=size-1;
    while(i<j){
        int temp= arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++, j--;
    }
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[]={1,2,3,4,5,6};
    int size=6;
    reverseArray(arr,size);

    return 0;
}