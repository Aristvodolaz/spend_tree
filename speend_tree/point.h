#pragma once
class Point
{
private:
	int id;
	int x;
	int y;
	bool use;
public:
	Point(void);
	Point(int id, int x, int y);
	~Point(void);

	int GetId();
	int GetX();
	int GetY();
	bool GetUse();

	void SetUse(bool _use);

	int CalculatePathToPoint(Point* p);
};

