#include <iostream>
#include <algorithm>
#include <functional>
#include <numeric>

using namespace std;

void main()
{
	int arr[15];
	
	for (int i = 0; i < 15; i++) 
	{
		arr[i] = rand() % 15 - 5;
	}
	arr[3] = -11;
	arr[10] = 11;
	cout << "Created array: " << endl;

	for (int i = 0; i < 15; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	
	int negative_sum = accumulate(begin(arr), end(arr), 0, [](int sum, int x) {
		return x < 0 ? sum + x : sum;
	});
		
	cout << "Sum of negative numbers: " << negative_sum << endl;

	int * min_elem = min_element(begin(arr), end(arr));
	int * max_elem = max_element(begin(arr), end(arr));
	int mult = accumulate(min_elem, max_elem, 1, [](int mult, int x) {
		return mult * x;
	});

	cout << "Multiplication of elements located between maximum and minimum elements : " << mult << endl;

	cout << "Sorted array: " << endl;
	sort(begin(arr), end(arr));
	for (int i = 0; i < 15; i++)
	{
		cout << arr[i] << " ";
	}

	system("pause");
}
