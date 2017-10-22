////////// reader.h
#include <QObject>
#include <QDebug>

class Reader : public QObject
{
	Q_OBJECT
public:
	Reader() {}

	void receiveNewspaper(const QString & name)
	{
		qDebug() << "C5: " << name;
	}
};
