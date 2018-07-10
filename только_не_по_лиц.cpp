// ConsoleApplication3.cpp: определяет точку входа для консольного приложения.
//

// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
void task1(int n);
void task2(int n);
void task3(int n);
void task4(int n);
void task5(int n, int k);

void task8(int n, int k)
{
	int q = 0, t = 0;

	for (int i = n; i > 0; i /= 10)
	{
		for (int j = i; j > 0; j = j / 10)
		{
			if (i % 10 == j % 10)
			{
				q++;
			}
		}
		if (q > k)
		{
			t++;
		}
		q = 0;
	}

	if (t == 1) { cout << "true" << endl; }
	else { cout << "false" << endl; }
}

void task9(int n, int k)
{
	int q = k, s1=0, s2=0;
	int a = 0;
	for (int i = n; i > 0; i /= 10) {
		if (q > 0) {
			s1 += i % 10;
		}
		a += i % 10;
		a *= 10;
		q--;
	}
	a = a / 10;
	for (int i = 0; i < k; i++)
	{
		s2 += a % 10;
		a /= 10;
	}
	(s1 == s2) ? cout << "true" << endl : cout << "false" << endl;

}

void task11(int n, int k, int m)
{
	int q = 0, t = 0;

	for (int i = n; i > 0; i /= 10)
	{

		if (i % 10 < m)
		{
			t++;
		}

	}

	if (t == k) { cout << "true" << endl; }
	else { cout << "false" << endl; }

}

void task12(int n, int k)
{
	int q = n % 10 + ((n / 10) % 10), t = 0;

	for (int i = n; i > 0; i /= 10)
	{

		if (i % 10 > q)
		{
			t++;
		}

	}

	if (t > k) { cout << "true" << endl; }
	else { cout << "false" << endl; }
}

void task21(double a,int k)
{		
	double v;
	double n = modf(a,&v);
	int gh=0;
	int kt = 0;
	for (int i = k; i>0; i--)
	{
		if (kt % 10) 
		{
			gh++;
		}
		modf(a, &v);
		n *= 10;
		kt = v;
	}
	cout << gh<<endl;
}


void task22(double a, int k)
{
	double v;
	double n = modf(a, &v);
	int gh = 0;
	int kt = 0;
	for (int i = k; i>0; i--)
	{
		gh += kt % 10;
		modf(a, &v);
		n *= 10;
		kt = v;
	}
	cout << gh << endl;
}

void task23(double a, int k,int n2)
{
	double v;
	double n = modf(a, &v);
	int gh = 0, gh2 = 0;
	int kt = 0;
	for (int i = 0; i<k+n2; i++)
	{
		if (i < k) {
			gh += kt % 10;
		}
		if (i > k) {
			gh2 += kt % 10;
		}
		modf(a, &v);
		n *= 10;
		kt = v;

	}
	(gh == gh2) ? cout << "true" << endl : cout << "false" << endl;
}


void task24(double a, int k, int n2)
{
	double v;
	double n = modf(a, &v);
	int gh = 0,gh2 = 0;
	int kt = 0;
	for (int i = k; i<=k+n2; i++)
	{
		if (i == k+1) {
			gh = kt % 10;
		}
		if (i < k + n2) {
			gh2 = kt % 10;
		}
		modf(a, &v);
		n *= 10;
		kt = v;
	}
	(gh == gh2) ? cout << "true" << endl : cout << "false" << endl;
}

void task25(double a, int k)
{
	double v;
	double n = modf(a, &v);
	int gh = 0, gh2 = 0;
	int kt = 0;
	for (int i = 0; i <= k ; i++)
	{
		if (i == k) {
			gh = kt % 10;
		}
		else {
			gh = kt % 10;
		}
			modf(a, &v);
			n *= 10;
			kt = v;
		
	}
	(gh == gh2) ? cout << "true" << endl : cout << "false" << endl;
}

void task26(double a, int k, int n2)
{
	double v;
	double n = modf(a, &v);
	int gh = 0, gh2 = 0;
	int kt = 0;
	for (int i = 0; i <= k + n2; i++)
	{
		if (i > k) {
			gh = kt % 10;
		}

		modf(a, &v);
		n *= 10;
		kt = v;
	}
	cout << gh << endl;

}
void task27(double a, int k)
{
	double v;
	double n = modf(a, &v);
	int gh = 0, gh2 = 0;
	int kt = 0;
	 kt = v;
	while (kt > 0) 
	{
		gh2 += kt % 10;
		kt /= 10;
	}
	v = 0;
	kt = 0;
	for (int i = 0; i <= k; i++)
	{
		
			gh += kt % 10;
		

		modf(a, &v);
		n *= 10;
		kt = v;
	}
	(gh == gh2) ? cout << "true" << endl : cout << "false" << endl;

}

void task29(double a,int n2) 
{
	double v;
	double n = modf(a, &v);
	int gh = 0, gh2 = 0;
	modf( n*pow(10,n2), &v);
	int kt = v; 
	int q = 0, t = 0;
	for (int i = kt; i > 0; i /= 10)
	{
		for (int j = i; j > 0; j = j / 10)
		{
			if (i % 10 == j % 10)
			{
				q++;
			}
		}
		if (q > 1)
		{
			t++;
		}
		q = 0;
	}

	if (t == 0) { cout << "true" << endl; }
	else { cout << "false" << endl; }
}


void task211(double a, int n2)
{
	double v;
	double n = modf(a, &v);
	int gh = 0, gh2 = 0;
	modf(n*pow(10, n2), &v);
	int kt = v;
	int q = 0, q2 = 0, t = 0,q3 = 0;
	for (int i = kt; i > 0; i /= 10)
	{
		for (int j = kt; j > 0; j = j / 10)
		{
			if (i % 10 < j % 10)
			{
				q++;
			}
			if (i % 10 > j % 10)
			{
				q2++;
			}
			if (i % 10 == j % 10)
			{
				q3++;
			}
		}
		if (q == n2)
		{
			t++;
		}
		if (q2 == n2)
		{
			t++;
		}
		if (q3 == n2)
		{
			t++;
		}
		q = 0;
		q2= 0;
		q3 = 0;
	}
	if (t == n2) { cout << "true" << endl; }
	else { cout << "false" << endl; }
}


void task210(double a, int n2)
{
	double v;
	double n = modf(a, &v);
	int gh = 0, gh2 = 0;
	
	int kt = v;
	
	int t = 0, t2 = (v * 10);

	for (int i = 0; i < n2; i++)
	{
		
		if (t2 = kt % 10) {
			t++;
		}
		modf(a, &v);
		kt = v;
		n *= 10;
		
	}

	if (t == n2) { cout << "true" << endl; }
	else { cout << "false" << endl; }
}
void task212(double a, int n2)
{
	double v;
	double n = modf(a, &v);
	int gh = 0, gh2 = 0;
	modf(n*pow(10, n2), &v);
	int kt = v;
	int  t = 0,q = 0;
	int d = ((kt / 10) % 10) - kt % 10;
	for (int i = kt; i > 0; i /= 10)
	{
		
		if (i % 10 == (kt % 10 + q * d)) {
			t++;
		}
		q++;
	}
	if (t == n2) { cout << "true" << endl; }
	else { cout << "false" << endl; }
}
int main()
{
	cout << "task1" << endl;
	task1(26332);
	cout << "task2" << endl;
	task2(263322);
	cout << "task3" << endl;
	task3(20102);
	cout << "task4" << endl;
	task4(2134);
	cout << "task5" << endl;
	task5(212, 3);
	cout << "task8" << endl;
	task8(21222, 3);
	cout << "task9" << endl;
	task9(2222222, 3);
	cout << "task11" << endl;
	task11(222222, 3, 3);
	cout << "task12" << endl;
	task12(12343, 3);
	cout << "task21" << endl;
	task21(12.39990, 4);
	cout << "task22" << endl;
	task21(12.39990, 4);
	cout << "task22" << endl;
	task22(12.39990, 4);
	cout << "task23" << endl;
	task23(12.39990, 2,2);
	cout << "task24" << endl;
	task24(12.39990, 2, 2);
	cout << "task25" << endl;
	task25(12.39990, 2 );
	cout << "task26" << endl;
	task26(12.39990, 2,4);
	cout << "task27" << endl;
	task27(12.39990, 2);
	cout << "task29" << endl;
	task29(12.99990, 2);
	cout << "task 10" << endl;
	task210(12.99990, 2);
	cout << "task 11" << endl;
	task211(12.99990, 3);
	cout << "task 12" << endl;
	task212(12.12340, 3);

	system("pause");
	return 0;
}



void task1(int n) {


	int q = 0, t = 0;

	for (int i = n; i > 0; i /= 10)
	{
		for (int j = i; j > 0; j = j / 10)
		{
			if (i % 10 == j % 10)
			{
				q++;
			}
		}
		if (q == 2)
		{
			t++;
		}
		q = 0;
	}

	if (t == 1) { cout << "true" << endl; }
	else { cout << "false" << endl; }
}


void task2(int n) {


	int q = 0, t = 0;

	for (int i = n; i > 0; i /= 10)
	{
		for (int j = i; j > 0; j = j / 10)
		{
			if (i % 10 == j % 10)
			{
				q++;
			}
		}
		if (q == 3)
		{
			t++;
		}
		q = 0;
	}

	if (t == 1) { cout << "true" << endl; }
	else { cout << "false" << endl; }
}
void task3(int n)
{
	int a = 0;
	for (int i = n; i > 0; i /= 10) {
		a += i % 10;
		a *= 10;
	}
	a = a / 10;
	(a == n) ? cout << "true" << endl : cout << "false" << endl;

}
void task4(int n) {

	int q = 0, t = 0;

	for (int i = n; i > 0; i /= 10)
	{
		for (int j = i; j > 0; j = j / 10)
		{
			if (i % 10 == j % 10)
			{
				q++;
			}
		}
		if (q > 1)
		{
			t++;
		}
		q = 0;
	}

	if (t == 0) { cout << "true" << endl; }
	else { cout << "false" << endl; }


}


void task5(int n, int k)
{
	int q = 0, t = 0;

	for (int i = n; i > 0; i /= 10)
	{
		for (int j = i; j > 0; j = j / 10)
		{
			if (i % 10 == j % 10)
			{
				q++;
			}
		}
		if (q == k)
		{
			t++;
		}
		q = 0;
	}

	if (t == 1) { cout << "true" << endl; }
	else { cout << "false" << endl; }
}
