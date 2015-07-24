#include "SegmentParallel.h"
#include <math.h>

SegmentParallel::SegmentParallel()
{
}

SegmentParallel::~SegmentParallel()
{
}

void SegmentParallel::InitOriginParameter(double x1, double y1, double x2, double y2, double origin_unit_line_)
{
	start_x = x1;
	start_y = y1;
	end_x = x2;
	end_y = y2;
	origin_length = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
	origin_unit_line = origin_unit_line_;
}

void SegmentParallel::InitTargetParameter(double x1, double y1, double x2, double y2, double target_unit_line_)
{
	target_length = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
	target_unit_line = target_unit_line_;
}

void SegmentParallel::computeMinimalN()
{
	minimal_n = (int)sqrt(((target_length*target_length) - (origin_length*origin_length)) / ((origin_unit_line*origin_unit_line) - (target_unit_line*target_unit_line))) + 1;
}

void SegmentParallel::computeScissorParameter()
{
	//compute attributes and location
}
