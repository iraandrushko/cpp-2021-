#include <iostream>;

using namespace std;

double sum(double x, double y);

int main() 
{
	double x, y;

	cout << "Enter x:";
	cin >> x;
	cout << "Enter y:";
	cin >> y;

	double res = sum(x, y);

	cout << "sum is: " << res;

	return 0;
}

double sum(double x, double y)
{
	return x + y;
}
