#include<iostream>
#include "VecNf.h"
using namespace std;

int main() {
	VecNf empty;
	float a_value[] = { 3.0, 2.0 };
	float b_value[] = { 1, 2, 3 };
	float c_value[] = { 6, 5, 4 };
	VecNf A(a_value, 2);
	VecNf B(b_value, 3);
	VecNf C(c_value, 3);
	VecNf T(A);

	A = A; // Assignment
	for (int i = 0; i <A.Size(); i++) {
		cout << A[i] << " ";
	} 
	cout << endl;

	T = A; // Assignment
	for (int i = 0; i < T.Size(); i++) {
		cout << T[i] << " ";
	} 
	cout << endl;

	T = B+C; // Vector addition
	//cout << T.Size();
	for (int i = 0; i < T.Size(); i++) {
		cout << T[i] << " ";
	}
	cout << endl;
	
	cout << C * B << endl; // Scale

	cout << A * C << endl; // Inconsistent

	return 0;

}