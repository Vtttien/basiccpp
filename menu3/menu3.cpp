#include<iostream>
using namespace std;

#define MAX 100

void menu(int arr[], int& n);
void nhap(int arr[], int& n);
void xuat(int arr[], int n);
void check(int arr[], int n);
void sum(int arr[], int n);

int main() {
	
	int arrT[MAX];
	int N;
	menu(arrT, N);

	return 0;
}

void menu(int arr[], int& n) {

	bool quit = true;
	while (quit == true) {
		cout << "\n-----Menu-----\n";
		cout << "Option 1: Nhap vao gia tri cac phan tu\n";
		cout << "Option 2: Xuat cac phan tu trong mang\n";
		cout << "Option 3: Tim cac phan tu chia het cho 2\n";
		cout << "Option 4: Tinh tong cac phan tu trong mang\n";
		cout << "Option 5: Thoat khoi chuong trinh\n";
		int t;
		cin >> t;
		switch (t) {
		case 1:
			nhap(arr, n);
			break;
		case 2: 
			xuat(arr, n);
		case 3:
			check(arr, n);
			break;
		case 4:
			sum(arr, n);
			break;
		case 5: 
			quit = false;
			break;
		default:
			cout << "Nhap sai option, moi nhap lai\n";
		}
	}
}

void nhap(int arr[], int& n) {

	do {
		cout << "Nhap so luong phan tu: ";
		cin >> n;
		if (n <= 0 || n > MAX)
			cout << "So luong khong hop le, moi nhap lai\n";
	} while (n <= 0 || n > MAX);
	for (int i = 0; i < n; i++) {
		cout << "Gia tri phan tu thu " << i << ": ";
		cin >> arr[i];
	}
}

void xuat(int arr[], int n) {
	
	nhap(arr, n);
	for (int i = 0; i < n; i++) {
		cout << "Gia tri phan tu thu " << i << " la: " << arr[i] << "\n";
	}
}

void check(int arr[], int n) {

	nhap(arr, n);
	cout << "Cac phan tu chia het cho 2 la: ";
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			cout << arr[i];
		}
	}
}

void sum(int arr[], int n) {

	nhap(arr, n);
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum = sum + arr[i];
	}
	cout << "Tong cac phan tu trong mang la: " << sum;
}