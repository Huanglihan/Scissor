#include "scissorstructure.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	int a;
	QApplication a(argc, argv);
	ScissorStructure w;
	w.show();
	return a.exec();
}
