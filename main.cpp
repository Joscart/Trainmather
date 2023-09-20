#include "bienvenida.h"
#include "menu.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QTime>

void delay(int mSecs);

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "Trainmather_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    Bienvenida w;
    w.show();
    delay(2500);
    w.close();

    Menu x;
    x.show();

    return a.exec();
}

void delay(int mSecs)
{
    QTime dieTime= QTime::currentTime().addMSecs(mSecs);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}
