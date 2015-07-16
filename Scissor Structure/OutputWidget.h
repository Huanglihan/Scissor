#pragma once
#include <QWidget>
// #include <opencv2/highgui/highgui.hpp>
// #include <opencv2/imgproc/imgproc.hpp>
// #include <opencv2/core/core.hpp>
/*using namespace cv;*/

QT_BEGIN_NAMESPACE
class QImage;
class QPainter;
QT_END_NAMESPACE


class OutputWidget :
	public QWidget
{
	Q_OBJECT

public:
	OutputWidget(void){};
	OutputWidget(QWidget* parent = 0, Qt::WindowFlags f = 0){};
	~OutputWidget(void){};

protected:
	void paintEvent(QPaintEvent *paintevent);

public:
	void widget_position(int start_pos_x, int start_pos_y, int width, int height);

private:
	int start_pos_x_;
	int start_pos_y_;
	int width_;
	int height_;


};