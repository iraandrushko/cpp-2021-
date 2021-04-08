#include <iostream>

using namespace std;

double** input(int n, int m);
void print(double** matrix, int n, int m);
double** result(double** m1, double** m2, int n, int m);



int main()
{
	int n,m;

	cout << "enter n: ";
	cin >> n;

	cout << "enter m: ";
	cin >> m;

	double** matrix1 = input(n,m);
	double** matrix2 = input(n,m);
	double** resultmatrix = result(matrix1, matrix2, n, m);

	cout << "matrix1 " << endl;
	print(matrix1, n, m);
	cout << "matrix2 " << endl;
	print(matrix2, n, m);
	cout << "resultmatrix " << endl;
	print(resultmatrix, n, m);
	
	for(int i = 0; i < n; i++)
	{
		delete [] matrix1[i];
	}
	delete [] matrix1;
	
	for(int i = 0; i < n; i++)
	{
		delete [] matrix2[i];
	}
	delete [] matrix2;
	
	for(int i = 0; i < n; i++)
	{
		delete [] resultmatrix[i];
	}
	delete [] resultmatrix;
	
	return 0;
}

double** input(int n, int m)
{
	double** matrix = new double* [n];

	for (int i = 0; i < n; i++)
	{
		matrix[i] = new double[n];

		for (int j = 0; j < m; j++)
		{
			cin >> matrix[i][j];
		}
	}

	return matrix;
}

void print(double** matrix, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}

}

double** result(double** m1, double** m2, int n, int m)
{
	double** matrix = new double* [n];
	for (int i = 0; i < n; i++)
	{
		matrix[i] = new double[m];

		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = 2 * m1[i][j] - 3 * m2[i][j];
		}

	}
	return matrix;
}
