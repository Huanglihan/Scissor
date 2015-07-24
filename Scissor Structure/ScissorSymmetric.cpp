#include "ScissorSymmetric.h"
#include <math.h>

ScissorSymmetric::ScissorSymmetric()
{
}

ScissorSymmetric::~ScissorSymmetric()
{
}

void ScissorSymmetric::InitParameter(double left_length_, double right_length_, double external_,double inner_, double pivot_x_, double pivot_y_, double normal_x_, double normal_y_)
{
	left_length = left_length_;
	right_length = right_length_;
	external = external_;
	inner = inner_;
	pivot_x = pivot_x_;
	pivot_y = pivot_y_;
	normal_x = normal_x_;
	normal_y = normal_y_;
}

void ScissorSymmetric::drawScissor()
{
	//compute for corners' positions of the scissor
	double theta_external = asin(external/(2*left_length));
	double theta_inner = asin(inner / (2 * right_length));
	double norm = normal_x*normal_x + normal_y*normal_y;
	double right_up_x = pivot_x + cos(theta_inner)*right_length*normal_x / norm;
	double left_up_x = pivot_x - cos(theta_external)*left_length*normal_x / norm;
	double left_up_y = pivot_y + sin(theta_external)*left_length*normal_y / norm;
	double right_up_y = pivot_y + sin(theta_inner)*right_length*normal_y / norm;
	double left_down_x = pivot_y - sin(theta_external)*left_length*normal_x / norm;
	double right_down_x = pivot_y - sin(theta_inner)*right_length*normal_x / norm;
	double left_down_y = pivot_y - sin(theta_external)*left_length*normal_y / norm;
	double right_down_y = pivot_y - sin(theta_inner)*right_length*normal_y / norm;
	//draw

}