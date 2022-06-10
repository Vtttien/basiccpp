#include<iostream>
using namespace std;

#define arrMAX 100
#define ROW 100
#define COLUMN 100

void Menu();
//nhap mang 1 chieu
void nhapArray(int arr[], int& n);  
//xuat mang 1 chieu
void xuatArray(int arr[], int n); 
//liet ke so chinh phuong trong mang
void checkCP(int arr[], int n);       
//tong cac so chinh phuong trong mang
void sumCP(int arr[], int n);      
//liet ke cac so chan trong mang
void checkEven(int arr[], int n);    
//tong cac so chan trong mang
void sumEven(int arr[], int n);      
//them mot phan tu vao mang
void addArray(int arr[], int& n);    
//xoa mot phan tu trong mang
void delArray(int arr[], int& n);    
//nhap matran
void nhapMatrix(int mt[][COLUMN], int& row, int& column);   
//xuat matran
void xuatMatrix(int mt[][COLUMN], int row, int column);      
//tim hang lon nhat trong ma tran
void maxRow(int mt[][COLUMN], int row, int column);     
//tim cot lon nhat trong ma tran
void maxColumn(int mt[][COLUMN], int row, int column);      

int main() {

	Menu();
	return 0;
}

void Menu() {
	int arr[arrMAX];
	int n;
	int matrix[ROW][COLUMN];
	int row, column;

	bool quit = false;
	while (quit == false) {
		cout << "-----Menu-----\n";
		cout << "Option 1: Nhap mang mot chieu\n";
		cout << "Option 2: Xuat mang mot chieu\n";
		cout << "Option 3: Liet ke cac so chinh phuong trong mang mot chieu\n";
		cout << "Option 4: Tinh tong cac so chinh phuong trong mang mot chieu\n";
		cout << "Option 5: Liet ke cac so chia het cho 2\n";
		cout << "Option 6: Tinh tong cac so chia het cho 2\n";
		cout << "Option 7: Them mot phan tu vao mang\n";
		cout << "Option 8: Xoa mot phan tu trong mang\n";
		cout << "Option 9: Nhap ma tran\n";
		cout << "Option 10: Xuat ma tran\n";
		cout << "Option 11: Tim hang co tong lon nhat\n";
		cout << "Option 12: Tim cot co tong lon nhat\n";
		cout << "Option 13: Thoat khoi chuong trinh\n";
		
		cout << "Nhap option: ";
		int opt;
		cin >> opt;

		switch (opt) {
		case 1:
			nhapArray(arr, n);
			break;
		case 2: 
			xuatArray(arr, n);
			break;
		case 3:
			checkCP(arr, n);
			break;
		case 4:
			sumCP(arr, n);
			break;
		case 5:
			checkEven(arr, n);
			break;
		case 6:
			sumEven(arr, n);
			break;
		case 7: 
			addArray(arr, n);
			xuatArray(arr, n);
			break;
		case 8:
			delArray(arr, n);
			xuatArray(arr, n);
			break;
		case 9: 
			nhapMatrix(matrix, row, column);
			break;
		case 10:
			xuatMatrix(matrix, row, column);
			break;
		case 11:
			maxRow(matrix, row, column);
			break;
		case 12:
			maxColumn(matrix, row, column);
			break;
		case 13:
			quit = true;
			break;
		}
	}
}

void nhapArray(int arr[], int& n) {

	cout << "Nhap so luong: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "Gia tri thu " << i << ": ";
		cin >> arr[i];
	}
	cout << "\n";
}

void xuatArray(int arr[], int n) {

	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\t";
	}
	cout << "\n";
}

void checkCP(int arr[], int n) {

	cout << "Cac so chinh phuong trong mang: ";
	for (int i = 0; i < n; i++) {
		float t = sqrt(arr[i]);
		if (t == (int)t)
			cout << arr[i] << "\t";
	}
	cout << "\n";
}

void sumCP(int arr[], int n) {

	int sumCP = 0;
	for (int i = 0; i < n; i++) {
		float t = sqrt(arr[i]);
		if (t == (int)t) {
			sumCP += arr[i];
		}
	}
	cout << "Tong cac so chinh phuong trong mang la: " << sumCP << "\n";
}

void checkEven(int arr[], int n) {

	cout << "Cac so chia het cho 2 trong mang la: ";
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0)
			cout << arr[i] << "\t";
	}
	cout << "\n";
}

void sumEven(int arr[], int n) {

	int sumEven = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0)
			sumEven += arr[i];
	}
	cout << "Tong cac so chia het cho 2 trong mang la: " << sumEven << "\n";
}
void addArray(int arr[], int& n) {

	cout << "Nhap vi tri muon them: ";
	int vt;
	cin >> vt;
	cout << "Nhap gia tri muon them: ";
	int gt;
	cin >> gt;

	for (int i = n; i > vt; i--) {
		arr[i] = arr[i - 1];
	}
	arr[vt] = gt;
	n++;
}

void delArray(int arr[], int& n) {

	cout << "Nhap vi tri muon xoa: ";
	int vt;
	cin >> vt;
	
	for (int i = vt; i < n; i++) {
		arr[i] = arr[i + 1];
	}
	n--;
}

void nhapMatrix(int mt[][COLUMN], int& row, int& column) {

	cout << "Nhap so hang: ";
	cin >> row;
	cout << "Nhap so cot: ";
	cin >> column;

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			cout << "Gia tri hang " << i << " cot " << j << ": ";
			cin >> mt[i][j];
		}
	}
} 

void xuatMatrix(int mt[][COLUMN], int row, int column) {

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			cout << mt[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << "\n";
}

void maxRow(int mt[][COLUMN], int row, int column) {

	int sumRow[ROW];
	for (int i = 0; i < column; i++) {
		for (int j = 0; j < row; j++) {
			sumRow[j] += mt[i][j];
		}
	}

	int maxIndexRow = 0;
	int sumMaxRow = sumRow[maxIndexRow];
	for (int i = 1; i < row; i++) {
		if (sumRow[i] > sumMaxRow) {
			sumMaxRow = sumRow[i];
			maxIndexRow = i;
		}
	}
	cout << "Hang thu " << maxIndexRow + 1 << " co tong cac phan tu lon nhat trong ma tran" << "\n";
}

void maxColumn(int mt[][COLUMN], int row, int column) {

	int sumColumn[COLUMN];
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			sumColumn[j] += mt[i][j];
		}
	}

	int maxIndexColumn = 0;
	int maxSumColumn = sumColumn[maxIndexColumn];
	for (int i = 1; i < column; i++) {
		if (sumColumn[i] > maxSumColumn) {
			maxSumColumn = sumColumn[i];
			maxIndexColumn = i;
		}
	}
	cout << "Cot thu " << maxIndexColumn + 1 << " co tong cac phan tu lon nhat trong ma tran" <<  "\n";
}