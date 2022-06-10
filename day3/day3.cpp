#include<iostream>
using namespace std;

#define MAX 5
void Nhap(int ar[], int &n);
void Xuat(int ar[], int n);
void Check(int ar[], int n);

int main() {

	int arrayT[MAX];
	int n;
	Nhap(arrayT, n);
	Xuat(arrayT, n);
	Check(arrayT, n);
	return 0;
}

void Nhap(int ar[], int& n) {
	do {
		cout << "Nhap so luong phan tu: ";
		cin >> n;
		if (n <= 0 || n > MAX)
			cout << "Nhap sai, xin moi nhap lai\n";

	} while (n <= 0 || n > MAX);

	for (int i = 0; i < n; i++) {
		cout << "Nhap ar[" << i << "]: ";
		cin >> ar[i];
	}
}

void Xuat(int ar[], int n) {

	for (int i = 0; i < n; i++) {
		cout << "\nGia tri ar[" << i << "]: " << ar[i];
	}
}

void Check(int ar[], int n) {

	for (int i = 0; i < n; i++) {
		if (ar[i] % 2 == 0)
			cout << "\nGia tri thu " << i << " chia het cho 2: " << ar[i];
	}
}