#include <iostream>

using namespace std;


 int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size -1;
    // int mid = (start+end)/2;
    int mid = start + (end-start)/2;

    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }

         if(key > arr[mid]){
            start = mid+1;
        }

        else{
            end = mid-1;
        }

        mid = (start+end)/2;
    }

    return -1;
}

int main(){
    int even[8] = {2, 4,8,14,19,22, 25, 27};
    int odd[9] = {2, 4,8,14,18,22, 24, 30, 33};


    cout<<"odd "<<binarySearch(odd, 8, 18) << endl;

    return 0;
};
