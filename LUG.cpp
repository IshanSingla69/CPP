#include <iostream>
using namespace std;
int main(){

    cout<<"Enter a number \n";
    int a;
    cin>>a;
    const int count = 5;
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        arr[i] = i + a;
    }
    
    for (int i = 0; i < count; i++)
    {
        cout<<arr[i]<<"\n";
    }
    
    return 0;
}