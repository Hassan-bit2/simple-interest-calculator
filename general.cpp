// Write a program in C++ to enter P, T, R and calculate Simple Interest
#include <iostream>
using namespace std;

SimpleInterest(int P, int T, int R)
{
	cout << "The simple interest for the amount " << P << " for time " << T << " year " << " is " << (P*T*R)/100;
}

int main()
{
	int P, T, R;
	cout << "Please enter the Principle\n";
	cin >> P;
	cout << "Please enter the Time\n";
	cin >> T;
	cout << "Please enter the Rate of interest\n";
	cin >> R;
	SimpleInterest(P, T, R);
}
