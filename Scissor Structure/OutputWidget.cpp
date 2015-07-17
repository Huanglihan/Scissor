#include "OutputWidget.h"
#include <QImage>
#include <QPainter>
#include <QtWidgets> 

void OutputWidget::paintEvent(QPaintEvent *paintevent)
{
	QPainter painter;
	painter.begin(this);

	// Draw background
	painter.setBrush(Qt::white);
	QRect back_rect(0, 0, width(), height());
	painter.drawRect(back_rect);

	painter.end();
}

