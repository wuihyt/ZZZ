#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ASDF.h"

class ASDF : public QMainWindow
{
	Q_OBJECT

public:
	ASDF(QWidget *parent = Q_NULLPTR);

private:
	Ui::ASDFClass ui;
};
