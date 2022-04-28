#include <iostream>
#include <vector>

using namespace std;

vector <int> time[100000];

int result = 0;

int main()
{
    int n, start, end;
    scanf("%d", &n);
    
    for (int i = 0; i<n; i++)
    {
        scanf("%d %d", &start, &end);
        time.push_back((start, end));
    }
    
    for (int i = 0; i<n; i++)
    {
        int temp;
        temp = time[i][0]; 
        if (time[i][1] <= time[i+1][0])
            temp = time[i+1][0]
            result += 1;
    }
    
    
    printf("%d", result);
    return 0;
}
