// Example program
#include <iostream>
#include <string>
using namespace std;

int getNumber(int i);

int main_3()
{
    int n, sum = 0;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        sum += getNumber(i);
    }

    cout << "result: " << sum;
    return 0;
}


int getNumber(int i)
{
    if (i == 1) return 2;
    if (i == 0) return 1;

    return 2 * getNumber(i - 1) + 4 * getNumber(i - 2) + 1;
}
// input : amount of numbers (n) = 4;
// output : result = 1 + 2 + 9 + 27 = 39;