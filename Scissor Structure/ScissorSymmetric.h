#pragma once

class ScissorSymmetric
{
public:
	ScissorSymmetric();
	~ScissorSymmetric();

	void InitParameter(double left_length_, double right_length_, double external_, double inner_, double pivot_x_, double pivot_y_, double normal_x_, double normal_y_);
	void drawScissor();
	
private:
	//a outside
	double left_length;
	//b inside
	double right_length;
	//e
	double external;
	//parallel to e
	double inner;
	
	//location information
	//point to inside(e to d)
	double normal_x;
	double normal_y;
	double pivot_x;
	double pivot_y;
};

