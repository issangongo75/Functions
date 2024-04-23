 #include "stdafx.h"
#include "Constants.h"

#include"FillRand.h"
#include"Print.h"
#include"Sort.h"
#include"Statistics.h"
#include"Shift.h"
 
 
void shiftLeft(int arr[], const int n, int number_of_shifts);
void shiftRight(int arr[], const int n, int number_of_shifts);

void main()
{
	setlocale(LC_ALL, "");
	const int I_SIZE = 5;
	int i_arr[I_SIZE];
	FillRand(i_arr, I_SIZE);
	Print(i_arr, I_SIZE);
	Sort(i_arr, I_SIZE);
	Print(i_arr, I_SIZE);
	cout << "Sum of array elements: " << Sum(i_arr, I_SIZE) << endl;
	cout << "Avarage of array elements: " << Avg(i_arr, I_SIZE) << endl;
	cout << "minValue in array: " << minValueIn(i_arr, I_SIZE) << endl;
	cout << "maxValue in array: " << maxValueIn(i_arr, I_SIZE) << endl;
	int number_of_shifts;
	//cout << "Enter number of shifts: "; cin >> number_of_shifts;
	//shiftLeft(arr, n, number_of_shifts);
	//Print(arr, n);
	//cout << "Enter number of shift: "; cin >> number_of_shifts;
	//shiftRight(arr, n, number_of_shifts);
	//Print(arr, n);
	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "Sum of array elements: " << Sum(d_arr, D_SIZE) << endl;
	cout << "minValue in array: " << minValueIn(d_arr, D_SIZE) << endl;
	cout << "maxValue in array: " << maxValueIn(d_arr, D_SIZE) << endl;
	Sort(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);

	cout << delimiter << endl;

	const int C_SIZE = 11;
	char c_arr[C_SIZE];
	FillRand(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);
	cout << "Sum of elements: " << Sum(c_arr, C_SIZE) << endl;

	cout << delimiter << endl;

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Sum of elements: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Aritmetic_mean_of_array_elements : " << Avg(i_arr_2, ROWS, COLS) << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
}

 