#include<iostream>
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);

void Print(  int arr[], const int n);
void Print(  double arr[], const int n);

void Sort(int arr[], const int n);

int Sum(  int arr[], const int n);
double Sum(  double arr[], const int n);
double Avg(  int arr[], const int n);
int minValueIn(  int arr[], const int n);
int maxValueIn(int arr[], const int n);
void shiftLeft(int arr[], const int n, int number_of_shifts);
void shiftRight(int arr[], const int n, int number_of_shifts);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "Sum of array elements: " << Sum(arr, n) << endl;
	cout << "Avarage of array elements: " << Avg(arr, n) << endl;
	cout << "minValue in array: " << minValueIn(arr,n) << endl;
	cout << "maxValue in array: " << maxValueIn(arr,n) << endl;
	int number_of_shifts;
	//cout << "Enter number of shifts: "; cin >> number_of_shifts;
	//shiftLeft(arr, n, number_of_shifts);
	//Print(arr, n);
	//cout << "Enter number of shift: "; cin >> number_of_shifts;
	//shiftRight(arr, n, number_of_shifts);
	//Print(arr, n);
	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	cout << "Sum of array elements: " << Sum(brr, SIZE) << endl;
	//cout << "minValue in array: " << minValueIn(brr,SIZE) << endl;
	//cout << "maxValue in array: " << maxValueIn(brr, SIZE) << endl;
}
 
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void Print(  int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if(arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
int Sum(  int arr[], const int n)
{
	int Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += arr[i];
	}
	return Sum;
}
double Sum(double arr[], const int n)
{
	int Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += arr[i];
	}
	return Sum;
}
double Avg(  int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
int minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
int maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
void shiftLeft(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
}
void shiftRight(int arr[], const int n, int number_of_shifts)
{
	shiftLeft(arr, n, number_of_shifts);
}