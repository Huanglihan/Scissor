#include "InputWidget.h"
#include <QImage>
#include <QPainter>
#include <QtWidgets> 

void InputWidget::paintEvent(QPaintEvent *paintevent)
{
	QPainter painter;
	painter.begin(this);

	// Draw background
	painter.setBrush(Qt::white);
	QRect back_rect(0, 0, width(), height());
	painter.drawRect(back_rect);

	painter.end();
}

void InputWidget::mousePressEvent(QMouseEvent *mouseevent)
{
	if (Qt::LeftButton == mouseevent->button())
	{
	}
}

void InputWidget::mouseMoveEvent(QMouseEvent *mouseevent)
{
	
}

void InputWidget::mouseReleaseEvent(QMouseEvent *mouseevent)
{
	
}