#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	ifstream fin("input.txt");
	ofstream fout("output.txt");
	int a[3],n;
	fin >> a[0] >> a[1] >> a[2] >> n;
	if(n<=2)
		fout << a[n];
	else
	{
		int *t = new int[n];
		t[0] = a[0];
		t[1] = a[1];
		t[2] = a[2];
		for(int i=3;i<=n;i++)
		{
			t[i] = t[i-1] + t[i-2] - t[i-3];
		}
		fout << t[n];
		delete[] t;
	}
}