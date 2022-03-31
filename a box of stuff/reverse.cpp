#include "pch.h"
#include <iostream>

//======================================================================================================
//template of a function that reverse an array.
//Takes a pointer to the first argument of the array as an argument.
//If the array consists of char then no additional actions are needed.
//If the array is an integer or float, then NULL should be added as the last element.
template<typename Type>
void reverse(Type * a)
{
	int i = 0;
	int j = 0;
	Type b;
	while ((a[i] != '\0') or (a[i] != NULL))
	{
		++i;
	};
	for (j = 0; j < i / 2; ++j)
	{
		b = a[j];
		a[j] = a[i - j - 1];
		a[i - j - 1] = b;
	}
}


//Example how to use functions
void reverse_test_example_1()
{
	int i = 0;
	char s[] = "helloua";
	char * a = s;
	/*int s[] = { 1, 2, 3, NULL};
	int * a = s;*/

	reverse<char>(a);
	while ((a[i] != '\0') or (a[i] != NULL))
	{
		std::cout << a[i];
		++i;
	}
}


//======================================================================================================
//The second version of the reverse is now recursive, but it is now somewhat more difficult to work with. 
//You need to drive a pointer to the last element of the array into it yourself.
template<typename Type>
void reverse(Type *ArrLeft, Type *ArrRight) {
	if (ArrRight <= ArrLeft) return;
	std::swap(*ArrLeft, *ArrRight);
	reverse(ArrLeft + 1, ArrRight - 1);
}


////Example how to use functions
void reverse_test_example_2()
{
	const int N = 5;
	//const int N = 6

	char Arr[N] = { 'A','B','C','D','E' };
	//int Arr[N] = { 1, 2, 3, 4, 5, 6 };
	
	reverse(Arr, Arr + N - 1);

	for (int i = 0; i < N; i++) std::cout << Arr[i] << "  ";
}

//======================================================================================================
int main()
{
	return 0;
}

