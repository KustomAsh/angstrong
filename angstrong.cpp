#include<iostream>
using namespace std;
int main()
{
	cout << "\t\t\tAngstrong Number checker"<<endl<<endl;
	unsigned int n, digit, real, cube=0;
	cout << "Enter Number : "; cin >> n;
	real=n;
	while (n!=0)
	{
		digit = n % 10;
		cube += (digit*digit*digit);
		n /= 10;
	}
	if (cube == real)
		cout << "The number is an Angstrong number ";
	else cout << "The number is not an Angstrong number. ";
	system("pause>0");
}