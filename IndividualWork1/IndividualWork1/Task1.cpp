#include <iostream>
using namespace std;

void buildTriangle(int n);

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    buildTriangle(n);
    return 0;
}

void buildTriangle(int n)
{
    int current = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << current << " ";
            current++;
        }
        cout << endl;
    }
}