
#include<iostream>
using namespace std;

int Sum(int a , int b  );

int Diff(int a, int b);
int Prod(int a, int b);
double Quot(int a, int b = 0);
double Factorial(int n);
double Power(double a, int n);
#define CLassWork
//#define Factorial
//#define Power
void main()
{
 
#ifdef CLassWork
	setlocale(LC_ALL, "");
	cout << "Hello Funcions" << endl;
	int a, b;
	cout << "Enter two numbers: "; cin >> a >> b;
	int c = Sum(a , b);
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Diff(a, b) << endl;
	cout << a << " * " << b << " = " << Prod(a, b) << endl;
	cout << a << " / " << b << " = " << Quot(a) << endl;

		 
#endif // CLassWork
#ifdef Factorial
	double Factorial(int n)
	{
		double f = 1;
		for (int i = 0; i < n; i++)
		{
			f *= 1;
		}
		return f;
	}
#endif // Factorial 

#ifdef Power

	int a;
	int n;
	cout << " Enter the degree base: "; cin >> a;
	cout << "Enter the exponent :"; cin >> n;
	cout << a << " ^ " << n << " = " << Power(a) << endl;
#endif // Power



}

int Sum(int a, int b)
{
	int c = a + b;
	return c;
}
int Diff(int a, int b)
{
	return a - b;
}
int Prod(int a, int b)
{
	return a * b;
}
double Quot(int a, int b)
{
	return (double)a / b;
	 
}
 
double Power(double a, int n)
{
	double N = 1;
	if (n < 0)
	{
		n = -n;
		a = 1 / a;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	return N;
}