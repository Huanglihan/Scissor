#ifndef SCISSORSTRUCTURE_H
#define SCISSORSTRUCTURE_H

#include <QtWidgets/QMainWindow>
#include "ui_scissorstructure.h"

class ScissorStructure : public QMainWindow
{
	Q_OBJECT

public:
	ScissorStructure(QWidget *parent = 0);
	~ScissorStructure();

private:
	Ui::ScissorStructureClass ui;
};

#endif // SCISSORSTRUCTURE_H
