#include "tree.h"
#include <Windows.h>
#include <iostream>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("color F0");
	int n;
	cout << "Введите количество точек>";
	cin >> n;
	Tree tree;
	cout << "Введите " << n << " точек в формате <point_id> <x> <y>" << endl;
	for (int i = 0; i < n; i++)
	{
		int id, x, y;
		cin >> id >> x >> y;
		tree.AddPoint(id, x, y);
	}
	tree.CalculatePathes();
	cout << "=================================================" << endl;
	cout << "Граф целиком:" << endl;
	tree.PrintPathes();
	tree.CalculateMinTree();
	cout << "=================================================" << endl;
	cout << "Минимальный остовый граф" << endl;
	tree.PrintMinTree();
	system("pause");
	return 0;
}