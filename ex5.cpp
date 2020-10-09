#include<iostream>

using namespace std;

int main(){
	int english = 85;
	int computer = 70;
	int maths = 96;
	int science = 75;
	int sum = english+computer+maths+science;
	int average = sum/4;
	cout << "Average: "<< average;
	return 0;
}