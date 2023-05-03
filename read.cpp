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
	cout << "Введите длину вектора: ";
	cin >> size;
	if (size <= 0)
	{
		cout << "Длина вектора должна быть больше нуля ";
		exit(0);
	}
	cout << "Введите элементы вектора: ";
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
		std::cout << "Количество элементов, которые вы ввели, не совпадает с размером вектора, введенного вами. Перезапустите программу" << endl;
		exit(0);
	}

}