#include <iostream>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "Russian");
	float a, b;
	cout << "1 числo (A):";
	cin >> a;
	cout << "2 числo (B):";
	cin >> b;
	if (a > b) {
		a = a + b;
		b = a - b;
		a = a - b;
		cout << "A: " << a << ' ' << "B: " << b;
	}
	else {
		cout << "A: " << a << ' ' << "B: " << b;
	}
}