#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxSum = 0;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        int count = 1;
        int j = i;

        while (j + count <= n)
        {
            for (int k = 0; k < count; k++)
            {
                sum = sum + arr[j];
                j++;
            }

            count++;
        }

        if (sum > maxSum)
        {
            maxSum = sum;
        }
    }

    cout << maxSum;

    return 0;
}
