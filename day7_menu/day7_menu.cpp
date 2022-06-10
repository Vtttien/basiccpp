#include<iostream>
using namespace std;

typedef int item;
#define MAX 100

struct stack {
	int Top;
	item DATA[MAX];
};

stack S;

void menu();
void Init(stack& S);
//kiem tra ngan xep trong hay khong
int IsEmpty(stack S);
//kiem tra ngan xep day hay khong
int IsFull(stack S);
//them mot phan tu vao dinh ngan xep
void Push(stack& S, item x);
//xoa bo phan tu dau tien o dinh ngan xep
item Pop(stack& S);

void Input(stack& S);
void Output(stack S);
void Sum(stack S);

int main() {
	menu();
	return 0;
}
void menu() {

	bool quit = false;
	while (quit == false) {
		cout << "-----Menu-----\n";
		cout << "Option 1: Nhap ngan xep\n";
		cout << "Option 2: Xuat ngan xep\n";
		cout << "Option 3: Tong cac phan tu trong ngan xep\n";
		cout << "Option 4: Thoat khoi chuong trinh\n";
		int opt;
		cout << "Nhap option: ";
		cin >> opt;
		switch (opt) {
		case 1:
			Input(S);
			break;
		case 2:
			Output(S);
			break;
		case 3:
			Sum(S);
			break;
		case 4:
			quit = true;
			break;
		}
	}
}

void Init(stack& S) {
	S.Top = 0;
}

int IsEmpty(stack S) {
	return (S.Top == 0);
}

int IsFull(stack S) {
	return (S.Top == MAX);
}

void Push(stack& S, item x) {
	if (IsFull(S))
		cout << "Ngan xep day\n";
	else {
		S.Top++;
		S.DATA[S.Top] = x;
	}
}

item Pop(stack& S) {
	if (IsEmpty(S))
		cout << "Ngan xep rong\n";
	else {
		item x = S.DATA[S.Top];
		S.Top--;
		return x;
	}
}

void Input(stack& S) {
	cout << "Nhap gia tri cho ngan xep\n" << "Nhap 0 de ket thuc\n";
	item x;
	do {
		cin >> x;
		if (x != 0)
			Push(S, x);
	} while (x != 0);

}

void Output(stack S) {
	while (S.Top != 0)
		cout << Pop(S) << "\n";
}

void Sum(stack S) {
	int Sum = 0;
	for (int i = S.Top; i >= 0; i--) {
		Sum += S.DATA[S.Top];
		S.Top--;
	}
	cout << "Tong cac phan tu trong ngan xep la : " << Sum << "\n";
}
