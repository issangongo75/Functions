#include"Shift.h"

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