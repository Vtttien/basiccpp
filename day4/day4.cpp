#include<iostream>
using namespace std;

#define MAX 100

void Menu();
void Nhap(int arr[], int& n);
void Xuat(int arr[], int n);
void Themgiatricuoi(int arr[], int& n);
void Themvaovitribatki(int arr[], int& n);
void Xoa(int arr[], int& n);

int main() {

	Menu();
	return 0;
}

void Menu() {

	int arr[MAX];
	int n;

	bool quit = false;
	while (quit == false) {
		cout << "-----Menu-----\n";
		cout << "Option 1: Nhap vao gia tri cac phan tu trong mang\n";
		cout << "Option 2: Xuat cac phan tu trong mang\n";
		cout << "Option 3: Them mot phan tu vao cuoi mang\n ";
		cout << "Option 4: Them mot phan tu vao vi tri bat ki\n";
		cout << "Option 5: Thoat khoi chuong trinh\n";
		cout << "Option 6: Thoat khoi chuong trinh\nXoa mot phan tu bat ki\n";

		int t;
		cout << "Nhap option: ";
		cin >> t;
		switch (t) {
		case 1:
			Nhap(arr, n);
			break;
		case 2:
			Xuat(arr, n);
			break;
		case 3:
			Themgiatricuoi(arr, n);
			Xuat(arr, n);
			break;
		case 4:
			Themvaovitribatki(arr, n);
			Xuat(arr, n);
			break;
		case 5:
			Xoa(arr, n);
			Xuat(arr, n);
			break;
		case 6:
			quit = true;
			break;
		}
	}
}

void Nhap(int arr[], int& n) {

	do {
		cout << "Nhap so luong phan tu: ";
		cin >> n;
		if (n <= 0 || n > MAX)
			cout << "So luong khong hop le, nhap lai\n";
	} while (n <= 0 || n > MAX);
	for (int i = 0; i < n; i++) {
		cout << "Gia tri thu " << i << ": ";
		cin >> arr[i];
	}
}

void Xuat(int arr[], int n) {

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
}

void Themgiatricuoi(int arr[], int& n) {

	int GT;
	cout << "Nhap vao bien GT: ";
	cin >> GT;

	arr[n] = GT;
	n++;
}

void Themvaovitribatki(int arr[], int& n) {

	int vt;
	do {
		cout << "Nhap vi tri muon them: ";
		cin >> vt;
		if (vt > n)
			cout << "Nhap lai\n";
	} while (vt > n);

	cout << "Nhap gia tri muon them: ";
	int gt;
	cin >> gt;
	for (int i = n; i > vt; i--) {
		arr[i] = arr[i - 1];
	} 
	arr[vt] = gt;
	n++;
}

void Xoa(int arr[], int& n) {

	int vt;
	do {
		cout << "Nhap vi tri muon them: ";
		cin >> vt;
		if (vt > n)
			cout << "Khong hop le, nhap lai\n";
	} while (vt > n); 

	for (int i = vt; i < n; i++) {
		arr[i] = arr[i + 1];
	}
	n--;
}