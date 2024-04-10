#include <iostream>
#include <string>

using namespace std;

void task2() {
	cout << "¬ведите 37 чисел, каждое на отдельной строке" << endl;
	string result = "";
	for (int i = 0; i < 37; i++) {
		double t = 0;
		cin >> t;
		t -= 0.5;
		result += to_string(t) + " ";
	}
	cout << result << endl;
}