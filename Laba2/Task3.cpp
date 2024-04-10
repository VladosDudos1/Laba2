#include <iostream>
#include <math.h>

using namespace std;

long fact(int num) {
	if (num == 0){
		return 1;
	}
	long res = 1;
	for (int i = 1; i <= num; i++) {
		res *= i;
	}
	return res;
}

void task3() {
	double n = 0, x = 0;
	double sum = 0;

	cout << "¬ведите N" << endl;
	cin >> n;
	cout << "¬ведите X" << endl;
	cin >> x;

	for (int s = 0; s <= 10; s++) {
		sum += pow((x / 2), (2 * s) + n) / (fact(s)*(fact(n+s)));
	}
	cout << sum << endl;
}