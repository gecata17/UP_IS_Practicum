#include<iostream>
using namespace std;

const int MAX_SIZE = 100;

double calculateHelper(double arr[], double &result, int size)
{
	if (size <= 1)
	{
		return 1;
	}		

	if (arr[size - 2] > 0 && arr[size - 1] < arr[size - 2] && arr[size - 1] > 0)
	{
		return arr[size - 1] * calculateHelper(arr, result, size - 1);
	}		

	return 1 * calculateHelper(arr, result, size - 1);
}

double calculate(double arr[], int size)
{
	double result = 0;

	return calculateHelper(arr, result, size);
}

int main()
{
	double arr[MAX_SIZE];
	int size = 0;

	cout << "How Many Elements Do You Want To Store: ";
	cin >> size;

	cout << "Now Please Enter Your Elements: ";
	for (int i = 0; i < size; ++i)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}

	cout <<"\n    Result: "<< calculate(arr, size) << endl;

    return 0;
}
