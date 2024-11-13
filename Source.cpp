#include <iostream>
#define N 30
using namespace std;
int A[N], B[N];
void fill_array(int x[])
{
	srand(time(0));
	for (int i{ 0 }; i < N; i++)
	{
		x[i] = rand() % 21;
	}
}
void print_array(int x[])
{
	cout << " = {";
	for (int j{ 0 }; j < N - 1; j++)
	{
		cout << x[j] << ", ";
	}
	cout << x[N - 1] << "}\n";
}
void swap(int &x, int &y)
{
	int t = x;
	x = y;
	y = t;
}
void select_short(int x[])
{
	for (int I{ 0 }; I < N - 1; I++)
	{
		int m = x[I], n{I};
		for (int k{ I + 1 }; k < N; k++)
		{
			if (m > x[k])
			{
				m = x[k];
				n = k;
			}
		}
		swap(x[I], x[n]);
	}
	print_array(x);
}
int main()
{
	fill_array(A);
	print_array(A);
	select_short(A);
	return 0;
}