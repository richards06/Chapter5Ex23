/*
Program Title: Chapter5Ex23
Programmer: Josh Richards
Date: November 21, 2024
Requirements: 

Write a program that uses a loop to display Pattern A below, followed by another loop that displays Pattern B.

*/

#include <iostream>
using namespace std;

void displayPatternA() {
	cout << "Pattern A\n";
	for (int i = 1; i <= 8; ++i) {
		for (int j = 1; j <= i; ++j) {
			cout << "+";
		}
		cout << endl;
	}
}

void displayPatternB() {
	cout << "\nPattern B\n";
	for (int i = 8; i >= 1; --i) {
		for (int j = 1; j <= i; ++j) {
			cout << "+";
		}
		cout << endl;
	}
}

int main() {
	displayPatternA();
	displayPatternB();

	return 0;
}