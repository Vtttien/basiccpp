#include<iostream>
using namespace std;

#define ROW 100
#define COLUMN 100

void menu();
void nhap(int mt[][COLUMN], int& r, int& c);
void xuat(int mt[][COLUMN], int r, int c);
void CotLonNhat(int mt[][COLUMN], int r, int c);

int main() {

	menu();

	return 0;
}

void menu() {

	int matrix[ROW][COLUMN];
	int nRow, nColumn; 

	bool quit = false;
	while (quit == false) {
		cout << "-----Menu-----\n";
		cout << "Option 1: Nhap ma tran\n";
		cout << "Option 2: Xuat ma tran\n";
		cout << "Option 3: Tim cot co tong gia tri lon nhat\n";
		cout << "Option 4: Thoat khoi chuong trinh\n";
		int opt;
		cin >> opt;
		switch (opt) {
		case 1:
			nhap(matrix, nRow, nColumn);
			break;
		case 2:
			xuat(matrix, nRow, nColumn);
			break;
		case 3:
			CotLonNhat(matrix, nRow, nColumn);
			break;
		case 4:
			quit = true;
			break;
		}
	}
}
void nhap(int mt[][COLUMN], int& r, int& c) {

	cout << "Nhap vao so hang: ";
	cin >> r;
	cout << "\nNhap vao so cot: ";
	cin >> c;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << "Nhap gia tri hang " << i << " cot " << j << ": ";
			cin >> mt[i][j];
		}
	}
}

void xuat(int mt[][COLUMN], int r, int c) {

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << mt[i][j] << "\t";
		} 
		cout << "\n";
	}
}

void CotLonNhat(int mt[][COLUMN], int r, int c) {

	int sumColumn[COLUMN];
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			sumColumn[j] += mt[i][j];
		}
	}

	int maxIndexColumn = 0;
	int maxSumColumn = sumColumn[maxIndexColumn];
	for (int i = 1; i < c; i++) {
		if (maxSumColumn < sumColumn[i]) {
			maxSumColumn = sumColumn[i];
			maxIndexColumn = i;
		}
	}
	cout << "Cot thu " << maxIndexColumn + 1 << "co gia tri lon nhat\n";
}


