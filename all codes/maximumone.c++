#include <iostream>
using namespace std;
int r(int n)
{
    int c = 0;
    while (n != 0)
    {
        if (n & 1)
            c++;
        n >>= 1;
    }
    return c;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int k;
    scanf("%d", &k);
    int b[n];
    for (int i = 0; i < n; i++)
    {
        b[i] = r(arr[i]);
    }
    int t;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (b[i] < b[j])
            {
                t = b[i];
                b[i] = b[j];
                b[j] = t;
            }
            else if (arr[i] > arr[j])
            {
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
    for (int i = 0; i < k; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}