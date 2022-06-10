#include<iostream>
using namespace std;

int sum(int sum, int n);
int sum2(int& sum2, int& n);

int main() {

	int sumN = 0;
	int N;
	cout << "Nhap so nguyen N: ";
	cin >> N;

	sum(sumN, N);
	cout << "Sau khi goi sum thi sumN = " << sumN << endl;
	sum2(sumN, N);
	cout << "Sau khi goi sum2 thi sumN = " << sumN << endl;

	return 0;
}

int sum(int sum, int n) {

	sum = 0;
	int t = n;
	while (t > 0) {
		int dv = t % 10;
		sum = sum + dv;
		t = t / 10;
	}
	cout << "Tong cac chu so cua so nguyen duong " << n << " la: " << sum << endl;

	return sum;
}

int sum2(int& sum2, int& n) {

	sum2 = 0;
	int t = n;
	while (t > 0) {
		int dv = t % 10;
		sum2 = sum2 + dv;
		t = t / 10;
	}
	cout << "Tong cac chu so cua so nguyen duong " << n << " la: " << sum2 << endl;

	return sum2;
}