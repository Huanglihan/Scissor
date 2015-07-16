#include "OutputWidget.h"
#include <QImage>
#include <QPainter>
#include <QtWidgets> 

void OutputWidget::paintEvent(QPaintEvent *paintevent)
{
	QPainter painter;
	painter.begin(this);

	// Draw background
// 	painter.setBrush(Qt::white);
// 	QRect back_rect(0, 0, width(), height());
// 	painter.drawRect(back_rect);

	painter.end();
}
void OutputWidget::widget_position(int start_pos_x, int start_pos_y, int width, int height)
{
	start_pos_x_ = start_pos_x;
	start_pos_y_ = start_pos_y;
	width_ = width;
	height_ = height;
}

