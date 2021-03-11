#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, digit;

	cout << "Enter n: ";
	cin >> n;

	// even
	if (n % 2 == 0)
	{
		int dob = 1;

		while (n != 0) {
			digit = n % 10;
			n = n / 10;
			dob *= digit;
		}
		cout << "Product: " << dob;
	}
	else // odd
	{
		int sum = 0;
		while (n != 0) {
			digit = n % 10;
			n = n / 10;
			sum += digit;
		}
		cout << "Sum: " << sum;
	}

	return 0;
}
// input : n = 239; result(sum) = 14;
//         n = 892; result(product) = 144;
