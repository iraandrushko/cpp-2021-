#include <iostream>;

using namespace std;

double sum(double x, double y);
double substract(double x, double y);

int main() 
{
	double x, y, res;
	char op;



	cout << "Enter x: ";
	cin >> x;

	cout << "Enter operation: ";
	cin >> op;

	cout << "Enter y: ";
	cin >> y;
	switch (op)
	{
		case '+':
			res = sum(x, y);
			break;
		case '-':
			res = substract(x, y);
			break;
		default:
			// throw "Unsupported operation";
			break;
	}


	cout << "Result is: " << res;

	return 0;
}

double sum(double x, double y)
{
	return x + y;
}

double substract(double x, double y) 
{
	return x - y;
}
