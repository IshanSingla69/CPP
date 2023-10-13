#include <iostream>

using namespace std;
int main()
{
    cout << "What is your age \n";
    int age;
    cin >> age;
    if (age >= 18 && age < 150)
    {
        cout << "You can watch adult content \n";
    }
    else if (age > 0 && age < 18)
    {
        cout << "You should't watch adult content \n";
    }
    else if (age >= 150)
    {
        cout << "You're probably dead! \n";
    }
    else
    {
        cout << "You are a liar \n";
    }

    return 0;
}