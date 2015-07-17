#include "InputWidget.h"
#include <QImage>
#include <QPainter>
#include <QtWidgets> 

InputWidget::InputWidget(QWidget* parent, Qt::WindowFlags f)
{
	scissor_skelecton_ = new ScissorSkelecton(3, /*this->geometry().width()=*/ 241, /*this->geometry().height()=*/ 141);

}
// 
// InputWidget::InputWidget(void)
// {
// 	this->setAutoFillBackground(true);
// 	QPalette background_;
// 	background_.setColor(QPalette::Background, Qt::white);
// 	this->setPalette(background_);
// 
// }
void InputWidget::paintEvent(QPaintEvent *paintevent)
{
	QPainter painter;
	painter.begin(this);

	// Draw background
	painter.setBrush(Qt::white);
 	QRect back_rect(0, 0, width(), height());
	painter.drawRect(back_rect);
	scissor_skelecton_->draw_skelecton(painter);

	painter.end();
}

void InputWidget::mousePressEvent(QMouseEvent *mouseevent)
{
	if (Qt::LeftButton == mouseevent->button())
	{
		exit(0);
	}
}

void InputWidget::mouseMoveEvent(QMouseEvent *mouseevent)
{
	
}

void InputWidget::mouseReleaseEvent(QMouseEvent *mouseevent)
{
	
}

