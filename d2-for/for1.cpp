#include<iostream>
using namespace std;

int sum();

int main() {

	sum();
	return 0;
}

int sum() {

	int sum = 0;
	while (sum < 11) {
		sum++;
	}
	cout << sum;
	return 0;
}