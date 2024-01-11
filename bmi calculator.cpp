#include <iostream>
#include <cmath>
using namespace std;

void Function(double weight, double height) {
	double bmi = weight / (height * height);
	cout << bmi << endl;
}

int main() {
	double weight;
	double height;
	int times = 0;
	cout << "Yan Bin's BMI calculator." << endl;
	cout << " \n" << " \n";
	while (times < 100000) {
		cout << "What's your weight (in kg)?" << endl;
		cin >> weight;
		cout << "What's your height (in m)?\n" << endl;
		cin >> height;
		// LMAO XD Disclaimer for the users. 
		//cout << "Bro, in METRES ah, not in CM ah.\n" << "Make sure it is in METRES ah,or else you will get a different result ah" << endl;
		//cout << "I am not responsible for that if you type in CM or MM or even NM.\n" << endl; 
		cout << "------------------------------------------------------------------------------------------------------------------" << endl;
		cout << "BMI : " << endl;
		Function(weight, height);
		cout << " " << endl;
		cout << " " << endl;
		cout << " " << endl;
	}
	return 0;
}