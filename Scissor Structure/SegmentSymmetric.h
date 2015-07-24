#pragma once
#include "ScissorSymmetric.h"
#include <vector>
using namespace std;

class SegmentSymmetric
{
public:
	SegmentSymmetric();
	~SegmentSymmetric();
	
	void InitOriginParameter(double x1, double y1, double x2, double y2, double x3, double y3, double origin_unit_line_,double origin_external_);
	void InitTargetParameter(double x1, double y1, double x2, double y2, double x3, double y3, double target_unit_line_);
	void computeDiagonalLength();
	void computeScissorParameter();
	
private:
	//e0
	double origin_external;
	double origin_angle;
	double target_angle;
	double origin_unit_line;
	double target_unit_line;
	//d
	double diagonal_length;

	//outside arm
	double a;
	//inside arm
	double b;
	//e1
	double target_external;
	vector<ScissorSymmetric> symmetric_segment;

	//location information
	double start_x;
	double start_y;
	double middle_x;
	double middle_y;
	double end_x;
	double end_y;
};

