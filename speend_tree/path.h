#pragma once
class Path
{
private:
	int id_a;
	int id_b;
	int path;
public:
	Path(void);
	Path(int a_id, int b_id, int _path);
	~Path(void);

	int GetA();
	int GetB();
	int GetPath();

};