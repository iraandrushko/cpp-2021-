#include <iostream>
#include <string>
using namespace std;

int convertToDecimal(int n);

int main_1()
{
    int n;
    cout << "Enter binary number: ";
    cin >> n;
    cout << "Decimal(" << n << ") = " << convertToDecimal(n) << "\n";
    return 0;
}

int convertToDecimal(int n)
{
    if (n > 0)
    {
        int decresult = 0;

        int currentmult = 1;

        int remaining = n;

        while (remaining)
        {
            int last = remaining % 10;
            remaining = remaining / 10;

            decresult += last * currentmult;

            currentmult *= 2;
        }

        return decresult;
    }

    return -1;
}