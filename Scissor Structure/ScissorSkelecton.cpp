#include "ScissorSkelecton.h"


ScissorSkelecton::ScissorSkelecton(int point_num)
{
	
}

void ScissorSkelecton::set_skelecton_type_to_close()
{
	skelecton_type_ = kClose;
}
void ScissorSkelecton::set_skelecton_type_to_notclose()
{
	skelecton_type_ = kNotClose;
}
void ScissorSkelecton::change_point_position(int num, QPoint new_point_coordinate)
{
	scissor_skelecton_point_[num] = new_point_coordinate;
}
void ScissorSkelecton::draw_skelecton(QPainter &paint)
{
	if (scissor_skelecton_point_.empty())
	{
		return;
	}
	if (skelecton_type_ == kClose)
	{
		int i;
		for (i = 0; (i + 1) < scissor_skelecton_point_.size(); i++)
		{
			paint.drawLine(scissor_skelecton_point_[i], scissor_skelecton_point_[i + 1]);
		}
		paint.drawLine(scissor_skelecton_point_[i], scissor_skelecton_point_[0]);

	}
	else
	{
		int i;
		for (i = 0; (i + 1) < scissor_skelecton_point_.size(); i++)
		{
			paint.drawLine(scissor_skelecton_point_[i], scissor_skelecton_point_[i + 1]);
		}
	}
}