#include <iostream>

using namespace std;

struct Point
{
	double x;
	double y;


	Point() : Point(0, 0) {}

	Point(double x, double y)
	{
		this->x = x;
		this->y = y;
	}

	double distance(const Point& t)
	{
		return pow((pow((x - t.x), 2) + pow((y - t.y), 2)), 0.5);
	}

	void print() const
	{
		cout << "(" << x << ", " << y << ")" << endl;
	}
};

int main_8664()
{
	Point A(1, 1);
	Point B(0, 3);

	cout << A.distance(B);

	return 0;
}
