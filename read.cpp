#include <vector>
#include <iostream>
#include <string>
#include <cstdlib> 
#include "inout.h"
using namespace std;

void read(vector<int>& vec)
{
	setlocale(LC_ALL, "ru");
	int size;
	string el;
	string a;
	cout << "������� ����� �������: ";
	cin >> size;
	if (size <= 0)
	{
		cout << "����� ������� ������ ���� ������ ���� ";
		exit(0);
	}
	cout << "������� �������� �������: ";
	cin.ignore();
	getline(cin, el);
	for (int i = 0; i < el.length(); i++)
	{
		if (el[i] == ' ')
		{
			if (!(a.empty()))
			{
				vec.push_back(stoi(a));
				a.clear();
			}
			else
			{
				continue;
			}
		}

		else
		{
			a.push_back(el[i]);
		}
	}
	vec.push_back(stoi(a));
	if (vec.size() != size)
	{
		std::cout << "���������� ���������, ������� �� �����, �� ��������� � �������� �������, ���������� ����. ������������� ���������" << endl;
		exit(0);
	}

}