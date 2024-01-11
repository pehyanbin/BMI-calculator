#include <iostream>
#include <cmath>
using namespace std;

void Function(double weightinpounds, double heightininch) {
	const double POUNDTOKG = 0.45359237;
	const double INCHTOMETRE = 0.0254;

	double weight = weightinpounds * POUNDTOKG;
	double height = heightininch * INCHTOMETRE;
	double bmi = weight / (height * height);
	cout << bmi << endl;
}

int main() {
	double weightinpounds;
	double heightininch;
	int times = 0;
	cout << "Yan Bin's BMI calculator." << endl;
	cout << " \n" << " \n";
	while (times < 100000) {
		cout << "What's your weight (in pounds)?" << endl;
		cin >> weightinpounds;
		cout << "What's your height (in inches)?\n" << endl;
		cin >> heightininch;
		cout << "------------------------------------------------------------------------------------------------------------------" << endl;
		cout << "BMI : " << endl;
		Function(weightinpounds, heightininch);
		cout << " " << endl;
		cout << " " << endl;
		cout << " " << endl;
	}
	return 0;
}