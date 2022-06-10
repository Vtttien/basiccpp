#include<iostream>
using namespace std;

typedef int item;
#define MAX 100

struct stack {
	int Top;
	item Data[MAX];
};

stack S;

void Init(stack& S);
int IsEmpty(stack S);
int Isfull(stack S);
//them phan tu vao ngan xep
void Push(stack& S, item x);
//lay phan tu khoi ngan xep
item Pop(stack& S);
void Input(stack& S);
void Output(stack S);

int main() {

	Input(S);
	Output(S);
	return 0;
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
		cout << "\nNgan xep day" << "\n";
	else {
		S.Top++;
		S.Data[S.Top] = x;
	}
}

item Pop(stack& S) {
	if (IsEmpty(S))
		cout << "\nNgan xep rong" << "\n";
	else {
		item x = S.Data[S.Top];
		S.Top--;
		return x;
	}
}

void Input(stack& S) {
	cout << "Nhap gia tri cho stack\n" << "Nhap 0 de ket thuc\n";
	item x;
	do {
		cin >> x;
		if (x != 0)
			Push(S, x);
	} while (x != 0);
}

void Output(stack S) {
	while (S.Top != 0) {
		cout << Pop(S);
	}
}

