#include <iostream>

using namespace std;
int removeDuplicates(int arr[], int n);


int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    n = removeDuplicates(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}

int removeDuplicates(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n;)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < n - 1; ++k)
                {
                    arr[k] = arr[k + 1];
                }
                --n;
            }
            else
            {
                ++j;
            }
        }
    }

    return n;
}