#include "point.h"


Point::Point(void)
{
}

Point::Point(int _id, int _x, int _y) : id(_id), x(_x), y(_y), use(false)
{
}

Point::~Point(void)
{
}

int Point::GetId()
{
	return id;
}

int Point::GetX()
{
	return x;
}

int Point::GetY()
{
	return y;
}

bool Point::GetUse()
{
	return use;
}

void Point::SetUse(bool _use)
{
	use = _use;
}

int Point::CalculatePathToPoint(Point* p)
{
	int _x = (x - p->GetX()) * (x - p->GetX());
	int _y = (y - p->GetY()) * (y - p->GetY());
	return _x + _y;
}