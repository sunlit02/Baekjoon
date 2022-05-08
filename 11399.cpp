#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> v;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i<n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    
    sort(v.begin(), v.end());
    int sum = 0;
    for (int i = 0; i<n ; i++)
    {
        sum += v[i]*(n-i);
    }
    
    cout << sum;
}
