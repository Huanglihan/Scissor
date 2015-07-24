#pragma once
#include "ScissorParallel.h"
#include <vector>
using namespace std;

class SegmentParallel
{
public:
	SegmentParallel();
	~SegmentParallel();

	void InitOriginParameter(double x1, double y1, double x2, double y2, double origin_unit_line_);
	void InitTargetParameter(double x1, double y1, double x2, double y2, double target_unit_line_);
	void computeMinimalN();
	void computeScissorParameter();

private:
	double origin_length;
	double target_length;
	double origin_unit_line;
	double target_unit_line;
	int minimal_n;

	//parameters to be computed in the paper
	double a;
	double b;
	double origin_angle;
	double target_angle;
	vector<ScissorParallel> parallel_segment;

	//location information
	double start_x;
	double start_y;
	double end_x;
	double end_y;
};

