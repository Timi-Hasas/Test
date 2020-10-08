#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void main()
{
	int* v;
	srand(time(NULL));
	int n;
	cin >> n;
		int maxval = 100;
	v = new int[n];

	for (int i = 0; i < n; i++)
		v[i] = rand() % maxval;

	int * vn = new int[maxval];
	for (int i = 0; i < maxval; i++)
		vn[i]=0;

	for (int i = 0; i < n; i++)
		vn[v[i]]++;

	for (int i = 0; i < n; i++)
		cout << v[i] << " ";
	cout << endl;

	for (int i = 0; i < maxval; i++)
		for (int j = 0; j < vn[i]; j++)
			cout << i << " ";


	system("pause");
}