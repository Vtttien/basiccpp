#include<iostream>
using namespace std;

void swap1(int x, int y);
void swap2(int& x, int& y);

int main() {

	int a, b;
	cout << "Nhap bien a: ";
	cin >> a;
	cout << "Nhap bien b: ";
	cin >> b;

	if (a > b && a + b >= 6) {
		swap1(a, b);
		cout << "Gia tri cua a sau khi goi swap1: " << a << endl;
		cout << "Gia tri cua b sau khi goi swap1: " << b << endl;

	}
	else if (a == 4)
		cout << "demo else if";

	else {
		swap2(a, b);
		cout << "\nGia tri cua a sau khi goi swap2: " << a << endl;
		cout << "Gia tri cua b sau khi goi swap2: " << b << endl;

	}
	return 0;
}

void swap1(int x, int y) {

	int temp = x;
	x = y;
	y = temp;

	return;
}

void swap2(int& x, int& y) {

	int temp = x;
	x = y;
	y = temp;

	return;
}