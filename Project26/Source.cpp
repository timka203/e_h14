#include<iostream> 
#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<Windows.h>
#include <iomanip>
#include<cstring>
#include<fstream>
using namespace std;
void t()
{
	ifstream mu("out1.txt");
	ofstream my("out.txt");
	ofstream my1("out1.txt");
	char str[100];
	for (size_t i = 0; i < 10; i++)
	{
		cin.getline(str, 100);
		my1 << str << endl;
	}
	while (mu >> str)
	{
		if (strlen(str) >= 7)
			my << str << " ";
	}
}
void task1()
{
	char str[30];
	ifstream mu("out1.txt");
	ofstream my1("out.txt");
	int a[10];
	int g = 0;
	t();
cout << " __________________________________ " << endl;
	int  h;
	cin >> h;
	for (size_t i = 0; i < 9; i++)
	{
		mu >> str; 
		g = strlen(str);
		for (size_t j = 0; j < g; j++)
		{
			if (str[j] + h > 90 && str[j] < 91)
			{
				int k = (str[j] + h) - 90;
				str[j] = 64 + k;
			}
			if (str[j] + h > 122 && str[j] < 123)
			{
				int k = (str[j] + h) - 122;
				str[j] = 96 + k;
			}
			else
				str[j] = str[j] + h;
		}
		my1 << str << endl;
	}
}
int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int a, d;
	do
	{
		printf("Which task");
		scanf_s("%d", &d);
		switch (d)
		{
		case 1: task1(); break;
		
		default:
			break;
		}
		printf(" do you want continue y(1)/no(2)");
		scanf_s("%d", &a);
	} while (a == 1);
	system("pause");
}