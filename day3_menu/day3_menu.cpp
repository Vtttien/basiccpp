#include<iostream>
using namespace std;

#define MAX 100

void menu(int ar[], int& n);
void Nhap(int ar[], int& n);
void Xuat(int ar[], int n);
void Check(int ar[], int n);
void Sum(int ar[], int n);

int main() {
	
	int arrT[MAX];
	int N;
	menu(arrT, N);

	return 0;
}

void  menu(int ar[], int& n) {
	
	bool quit = true;
	while (quit == true) {
		cout << "\n-----Menu-----\n";
		cout << "Option 1: Nhap vao gia tri cac phan tu trong mang\n";
		cout << "Option 2: Xuat cac phan tu trong mang\n";
		cout << "Option 3: Tim cac phan tu chia het cho 2\n";
		cout << "Option 4: Tong cac phan tu trong mang\n";
		cout << "Option 5: Thoat khoi menu\n";
		int t;
		cin >> t;
		switch (t) {
		case 1:
			Nhap(ar, n);
			break;
		case 2:
			Xuat(ar, n);
			break;
		case 3:
			Check(ar, n);
			break;
		case 4:
			Sum(ar, n);
			break;
		case 5:
			quit = false;
			break;
		default:
			cout << "Nhap sai option, moi nhap lai\n";
		}
	}
}

void Nhap(int arr[], int& n) {

	do {
		cout << "Nhap so luong phan tu: ";
		cin >> n;
		if (n <= 0 || n > MAX)
			cout << "Nhap sai, moi nhap lai\n";
	} while (n <= 0 || n > MAX);

	for (int i = 0; i < n; i++) {
		cout << "Gia tri phan tu thu " << i << ": ";
		cin >> arr[i];
	}
}

void Xuat(int ar[], int n) {

	Nhap(ar, n);
	for (int i = 0; i < n; i++) {
		cout << "Gia tri phan tu thu " << i << " la: " << ar[i] << "\n";
	}
}

void Check(int ar[], int n) {

	Nhap(ar, n);
	cout << "Cac phan tu chia het co hai la: ";
	for (int i = 0; i < n; i++) {
		if (ar[i] % 2 == 0)
			cout << ar[i] << " ";
	}
}

void Sum(int ar[], int n) {
	
	Nhap(ar, n);
	int Sum = 0;
	for (int i = 0; i < n; i++) {
		Sum = Sum + ar[i];
	}
	cout << "Tong cac phan tu trong mang la: " << Sum << "\n";
}