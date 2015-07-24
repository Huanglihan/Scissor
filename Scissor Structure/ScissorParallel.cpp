#include "ScissorParallel.h"
#include <math.h>

ScissorParallel::ScissorParallel()
{
}

ScissorParallel::~ScissorParallel()
{
}

void ScissorParallel::InitParameter(double left_length_, double right_length_, double angle_, double pivot_x_, double pivot_y_,double normal_x_,double normal_y_)
{
	left_length = left_length_;
	right_length = right_length_;
	angle = angle_;
	pivot_x = pivot_x_;
	pivot_y = pivot_y_;
	normal_x = normal_x_;
	normal_y = normal_y_;
}

void ScissorParallel::drawScissor()
{
	//compute for corners' positions of the scissor
	double theta = (3.1415926 - 2 * angle) / 2.0;
	double norm = normal_x*normal_x + normal_y*normal_y;
	double right_up_x = pivot_x + cos(theta)*right_length*normal_x/norm;
	double left_up_x = pivot_x - cos(theta)*left_length*normal_x/norm;
	double left_up_y = pivot_y + sin(theta)*left_length*normal_y/norm;
	double right_up_y = pivot_y + sin(theta)*right_length*normal_y/norm;
	double left_down_x = pivot_y - sin(theta)*left_length*normal_x/norm;
	double right_down_x = pivot_y - sin(theta)*right_length*normal_x/norm;
	double left_down_y = pivot_y - sin(theta)*left_length*normal_y/norm;
	double right_down_y = pivot_y - sin(theta)*right_length*normal_y / norm;
	//draw
}