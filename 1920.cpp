#include <iostream>
#include <algorithm>
using namespace std;

int v[100001];
void search(int v[], int start, int end, int key);

int main()
{
    ios::sync_with_stdio(0); //
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n;
    for (int i = 0; i<n; i++)
        cin >> v[i];
    
    sort(v, v+n);
    
    cin >> m;
    for (int i=0; i<m; i++)
    {
        int temp;
        cin >> temp;
        search(v, 0, n-1, temp);
            
    }
    
}
void search(int v[], int start, int end, int key)
{
    if (start > end) 
    {
        cout << '0' << '\n';
        return;
    }
    int mid = (start + end) /2;
    if (v[mid] == key)
    {
        cout << '1' << '\n' ;
        return;
    }
    else if (v[mid] > key) return search(v, start, mid-1, key);
    else return search(v, mid + 1, end, key);
}
