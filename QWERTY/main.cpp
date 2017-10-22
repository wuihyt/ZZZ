#include "QWERTY.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QWERTY w;
	w.show();
	return a.exec();
}
