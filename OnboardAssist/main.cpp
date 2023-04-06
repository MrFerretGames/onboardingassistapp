#include "OnboardAssist.h"
#include <QtWidgets/QApplication>
#include <QFile>

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);

    //Style Sheet Stuff
    QFile styleSheetFile("./stylesheet.css");
    styleSheetFile.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(styleSheetFile.readAll());
    a.setStyleSheet(styleSheet);


    OnboardAssist w;
    w.show();
    return a.exec();
}