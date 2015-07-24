#include "SegmentSymmetric.h"
#include <math.h>

SegmentSymmetric::SegmentSymmetric()
{
}

SegmentSymmetric::~SegmentSymmetric()
{
}

void SegmentSymmetric::InitOriginParameter(double x1, double y1, double x2, double y2, double x3, double y3, double origin_unit_line_,double origin_external_)
{
	start_x = x1;
	start_y = y1;
	middle_x = x2;
	middle_y = y2;
	end_x = x3;
	end_y = y3;
	origin_external = origin_external_;
	origin_angle = acos(((x1 - x2)*(x3 - x2) + (y1 - y2)*(y3 - y2)) / (sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2))*sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2))));
	origin_unit_line = origin_unit_line_;
}

void SegmentSymmetric::InitTargetParameter(double x1, double y1, double x2, double y2, double x3, double y3, double target_unit_line_)
{
	target_angle = acos(((x1 - x2)*(x3 - x2) + (y1 - y2)*(y3 - y2)) / (sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2))*sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2))));
	target_unit_line = target_unit_line_;
}

void SegmentSymmetric::computeDiagonalLength()
{
	diagonal_length = sqrt(origin_unit_line*origin_unit_line*cos(origin_angle / 2.0)*cos(origin_angle / 2.0) + (origin_external - origin_unit_line*cos(origin_angle / 2.0))*(origin_external - origin_unit_line*cos(origin_angle / 2.0)));
}

void SegmentSymmetric::computeScissorParameter()
{
	//compute attributes and location
}