#include "ScissorSkelecton.h"


ScissorSkelecton::ScissorSkelecton(int point_num, int width, int height)
{
	for (int i = 0; i < point_num; i++)
	{
		QPoint newpoint( (i+1)*width / (point_num + 2), height / 2);
		scissor_skelecton_point_.push_back(newpoint);
	}
	skelecton_type_ = kNotClose;
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
	paint.setBrush(Qt::black);
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


	paint.setBrush(Qt::blue);
	for (int i = 0; i < scissor_skelecton_point_.size(); i++)
	{
		paint.drawEllipse(scissor_skelecton_point_[i], 5, 5);
	}

}