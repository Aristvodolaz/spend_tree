#include "path.h"


Path::Path(void)
{
}

Path::Path(int a_id, int b_id, int _path) : id_a(a_id), id_b(b_id), path(_path)
{
}

Path::~Path(void)
{
}

int Path::GetA()
{
	return id_a;
}

int Path::GetB()
{
	return id_b;
}

int Path::GetPath()
{
	return path;
}
