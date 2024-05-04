#include "mainwindow.h"
#include "files.h"
#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QDir>
#include <QFile>
#include <QFileInfo>
#include <QTextStream>
#include <QStringList>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "Word_Frequently_Counter_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }

    MainWindow w;


    QString appTitle("Word Frequently Count");
    w.setWindowTitle(appTitle);
    w.show();
    return a.exec();
}
