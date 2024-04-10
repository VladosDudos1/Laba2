#include <iostream>
#include <math.h>


using namespace std;

void task1() {
	int n = 0, x = 0;

	cout << "¬ведите N" << endl;
	cin >> n;
	cout << "¬ведите X" << endl;
	cin >> x;

	cout << pow(pow(x, n), 2)/pow(2,n) << endl;
	cout << pow(pow(x, n), 3)/pow(3,n) << endl;
}