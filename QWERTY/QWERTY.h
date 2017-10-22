#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QWERTY.h"

class QWERTY : public QMainWindow
{
	Q_OBJECT

public:
	QWERTY(QWidget *parent = Q_NULLPTR);

private:
	Ui::QWERTYClass ui;
};
