#include <iostream>

using namespace std;
int main()
{
    // int ar[] = {12, 23, 34, 45, 56, 67, 78, 89, 90};
    // int ar_length = sizeof(ar) / sizeof(ar[0]);

    // int eSum = 0;
    // int oSum = 0;
    // // cout << ar_length << endl;
    // for (int i = 0; i < ar_length; i++)
    // {
    //     if (ar[i] % 2 == 0)
    //     {
    //         eSum += ar[i];
    //     }
    //     else
    //     {
    //         oSum += ar[i];
    //     }
    // }

    // cout << "Sum of odd numbers in this array is " << oSum << endl;
    // cout << "Sum of even numbers in this array is " << eSum << endl;

    // cout << "Find product of all the numbers \n";
    // int prod = 1;
    // int arr[6];
    // for (int i = 0; i < 6; i++){
    //     cout << "Enter "<< i + 1 <<"th number \n";
    //     cin >> arr[i];
    // }
    // cout << "Product of ";
    // for (int i = 0; i < 6; i++){
    //     cout << arr[i] << "  ";
    // }
    // for (int i = 0; i < 6; i++)
    // {
    //     prod *= arr[i];
    // }
    // cout << " is " << prod << endl;

    int arr2d[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "Element at " << i << ", " << j << " is " << arr2d[i][j] << endl;
        }
    }

    return 0;
}