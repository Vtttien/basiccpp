#include<iostream>
using namespace std;

void menu();
void sum(int a, int b);
void subtract(int a, int b);
void multi(int a, int b);

int main() {
	bool quit = true;
	while (quit == true) {
		menu();
		int n;
		cout << "Input opiton: ";
		cin >> n;
		switch (n) {
		case 1: 
			int x, y;
			cout << "Input first number: ";
			cin >> x;
			cout << "Inpur second number: ";
			cin >> y;
			sum(x, y);
			break;

		case 2:
			int x2, y2;
			cout << "Input first number: ";
			cin >> x2;
			cout << "Input second number: ";
			cin >> y2;
			subtract(x2, y2);
			break;

		case 3:
			int x3, y3;
			cout << "Input first number: ";
			cin >> x3;
			cout << "Input second number: ";
			cin >> y3;
			multi(x3, y3);
			break;

		case 4:
			quit = false;
			break;

		default:
			cout << "Wrong input\n";
		}
	}
	return 0;
}

void menu() {

	cout << "------Menu-----\n";
	cout << "Option 1: Sum of 2 integers\n";
	cout << "Option 2: Subtraction of 2 integer\n";
	cout << "Option 3: Multiplication of 2 interger\n";
	cout << "Option 4: Quit the program\n";
}

void sum(int a, int b) {

	int sum = a + b;
	cout << "Sum is: " << sum << endl;

}

void subtract(int a, int b) {

	int subtract = a - b;
	cout << "Subtraction is: " << subtract << endl;

}

void multi(int a, int b) {

	int multi = a * b;
	cout << "Multiplication is: " << multi;

}