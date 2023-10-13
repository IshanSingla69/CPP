#include <iostream>

using namespace std;
int main()
{

    int index = 69;
    int sum = 0;

    // while (index >= 0){
    //     sum += index;
    //     index--;
    // }
    // int i = 1;
    for (int i = 1; i <= index; i++)
    {
        sum += i;
    }
    cout << "Sum of all number till index is " << sum << endl;
    return 0;
}