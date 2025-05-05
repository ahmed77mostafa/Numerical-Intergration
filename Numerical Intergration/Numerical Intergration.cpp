#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

double trapzoidal(vector<double> fx, double h);
double simpson(vector<double> fx, double h);

int main()
{
	double a = -1, b = 2;
	int n = 6;
	double h = (b - a) / n;

	vector<double> fx = { -0.5 , -0.4706, 0, 0.4706, 0.5, 0.2474, 0.1176 };

	cout << "Trapzoidal\nresult: " << fixed << setprecision(6) << trapzoidal(fx, h) << endl << endl;
	cout << "Simpson\nresult: " << fixed << setprecision(6) << simpson(fx, h);
}

double trapzoidal(vector<double> fx, double h) {
	double sum = fx.front() + fx.back();
	for (int i = 1; i < fx.size() - 1; i++) {
		sum += 2 * fx[i];
	}

	return (h / 2) * sum;
}

double simpson(vector<double> fx, double h) {
	double sum = fx.front() + fx.back();
	for (int i = 1; i < fx.size() - 1; i++) {
		if (i % 2 == 0) {
			sum += 2 * fx[i];
		}
		else {
			sum += 4 * fx[i];
		}
	}
	return (h / 3) * sum;
}
