#include <stdio.h>
#include <omp.h>
#include<iostream>
//reduction
int main()
{
	int i, n;
	double start = omp_get_wtime();
	double a[10000], b[10000], result;
	// initializations
	n = 10000;
	result = 0.0;
	for (i = 0; i < n; i++)
	{
		a[i] = i * 1.03;
		b[i] = i * 2.05;

	}
	for (i = 0; i < n; i++)
	{

		result = result + (a[i] * b[i]);
	}
	double end = omp_get_wtime();

	printf("a*b= % .15g\n", result);
	printf("Using time: %.15gS", end - start);
	system("pause");
	return 0;
}