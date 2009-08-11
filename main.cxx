#include <QtCore/QCoreApplication>
#include <QTextStream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

	// On est bourrin ou pas
	QTextStream cin(stdin);
	QTextStream cout(stdout);


    return a.exec();
}
