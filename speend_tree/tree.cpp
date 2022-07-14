#include "tree.h"
#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

double round(double x)
{
	return floor(x + 0.5);
}

bool PathComparator(Path* a, Path* b)
{
	return a->GetPath() < b->GetPath();
}

bool IdComparator(Path* a, Path* b)
{
	return a->GetA() < b->GetA();
}

Tree::Tree(void)
{
}


Tree::~Tree(void)
{
}


void Tree::AddPoint(int id, int x, int y)
{
	points.push_back(new Point(id, x, y));
}

Point* Tree::GetPoint(int id)
{
	for (int i = 0; i < points.size(); i++)
	{
		if (points[i]->GetId() == id)
		{
			return points[i];
		}
	}
	cout << "ss" << endl;
	return nullptr;
}

int Tree::GetPath(int a_id, int b_id)
{
	for (int i = 0; i < pathes.size(); i++)
	{
		if (pathes[i]->GetA() == a_id && pathes[i]->GetB() == b_id)
		{
			return pathes[i]->GetPath();
		}
	}
	return -1;
}


void Tree::CalculatePathes()
{
	for (int i = 0; i < points.size(); i++)
	{
		for (int j = i + 1; j < points.size(); j++)
		{
			int _path = round(sqrt(points[i]->CalculatePathToPoint(points[j])));
			Path* path = new Path(points[i]->GetId(), points[j]->GetId(), _path);
			pathes.push_back(path);
		}
	}
}