#include <iostream>
using namespace std;

int main(){
    int arr[5];
    cout<<"Enter the Elements of the array: ";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"The Array is: ";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    int*arr1[5];
    arr1[5]=&arr[5];
    cout<<"The reversed array is: ";
    for(int i=0;i<5;i++)
    {
        cout<<*(arr1[5]-i-1)<<" ";
    }

}


//Output:
//Enter the Elements of the array: siuuu
//The Array is: 0 0 1651076199 779647075 73728 The reversed array is: 73728 779647075 1651076199 0 0 
