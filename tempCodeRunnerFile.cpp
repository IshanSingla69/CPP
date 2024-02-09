#include <iostream>
#include <vector>

using namespace std;

int main()
{

    const int n = 3;
    int num[n];

    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    vector<int> ans;

    int j = 0;
    while (j < 2)
    {
        for (int i = 0; i < n; i++)
        {
            ans.push_back(num[i]);
        }
        j++;
    }

    for (auto i = ans.begin(); i != ans.end(); ++i)
    {
        cout << *i << ", ";
    }
    
}