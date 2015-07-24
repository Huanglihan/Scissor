#pragma once

class ScissorParallel
{
public:
	ScissorParallel();
	~ScissorParallel();
	
	void InitParameter(double left_length_,double right_length_,double angle_,double pivot_x_,double pivot_y_,double normal_x_,double normal_y_);
	void drawScissor();
	
private:
	//a
	double left_length;
	//b
	double right_length;
	//in the paper
	double angle;

	//location information
	//left to right
	double normal_x;
	double normal_y;
	double pivot_x;
	double pivot_y;
};

