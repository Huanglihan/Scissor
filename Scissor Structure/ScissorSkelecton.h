#pragma once
#include <vector>
#include <QtGui>
using namespace std;

enum SkelectonType
{
	kNotClose = 0,
	kClose = 1,
};

class ScissorSkelecton
{
public:
	ScissorSkelecton(int point_num);
	~ScissorSkelecton(){};

public:
	vector<QPoint> scissor_skelecton_point_;
	SkelectonType skelecton_type_;

public slots:
	void set_skelecton_type_to_close();
	void set_skelecton_type_to_notclose();

public:
	void change_point_position(int num, QPoint new_point_coordinate);
	void draw_skelecton(QPainter &paint);
};