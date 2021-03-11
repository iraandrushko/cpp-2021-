#include <iostream>
#include <string>
using namespace std;

int factorial(int n);
double power(double x, int y);

int main_4()
{
    double x, eps, xi, res = 0.0;
    xi = 1;
    int k = 1;
    int n = 0;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter eps: ";
    cin >> eps;


    while (xi > eps)
    {
        xi = (power(x, 2 * n + 1) / factorial(2 * n + 1));

        res += k * xi;
        k *= (-1);
        n++;
    }

    cout << "iterations: " << n << endl;
    cout << "result: " << res;
    return 0;
}


int factorial(int n)
{
    if (n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}

double power(double x, int y)
{
    if (y == 0)
        return 1;

    if (x == 0)
        return 0;

    return x * power(x, y - 1);

}

//input : x = 0.89; eps = 0.0001;
//output : sin x = 0.777071;