#include<iostream>
using namespace std;

int cul(int num1, int num2)
{
	char x;
	cout << "Enter an Operation type" << endl;
	cin >> x;
		int a;
		if (x == '-')
		{
			a = num1 - num2;
		}
		else if (x == '+')
		{
			a = num1 + num2;
		}
		else if (x == '*')
		{
			a = num1 * num2;
		}
		else if (x == '/')
		{
			a = num1 / num2;
		}
		else if (x == '%')
		{
			a = num1 % num2;
		} 
		return a;



}

int main()
{
	int y, x,z;
	cout << " Enter two numbers " << endl;
	cin >> x >> y;
	int *prt;
	int *prt1;
	prt = &x;
	prt1 = &y;
	z=  cul(x, y);
	 cout << z<< endl;
	 cout << "good bay\n";
	 system("pause");
	 return 0;
}