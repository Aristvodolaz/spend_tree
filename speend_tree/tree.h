#pragma once
#include <vector>
#include "point.h"
#include "path.h"

class Tree
{
private:
	std::vector<Point*> points;
	std::vector<Path*> pathes;

	std::vector<Path*> minTree;
public:
	Tree(void);
	~Tree(void);

	void AddPoint(int id, int x, int y);
	Point* GetPoint(int id);
	int GetPath(int a_id, int b_id);
	int GetPath(Point p1, Point p2);

	void CalculatePathes();
	void PrintPathes();

	void CalculateMinTree();
	void PrintMinTree();
};

