#include "files.h"
#include <QFile>
#include <QTextStream>
#include <QFileDialog>

void Files::appendTextToFile(const QString& text) {
    QString filename = "paragraph_" + QDateTime::currentDateTime().toString("yyyyMMdd_hhmmss") + ".txt";
    QFile file(filename);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        out << text;
        file.close();
    } else {
        qDebug() << "Failed to create file for writing";
    }
}

QString Files::loadFile(const QString& filePath) {
    QString fileContent;
    if (!filePath.isEmpty()) {
        QFile file(filePath);
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QTextStream in(&file);
            fileContent = in.readAll();
            file.close();
        } else {
            qDebug() << "Failed to open file for reading";
        }
    }
    return fileContent;
}

void Files::updateFile(const QString& filename, const QString& newText) {
    if (!filename.isEmpty()) {
        QFile file(filename);
        if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QTextStream out(&file);
            out << newText;
            file.close();
        } else {
            qDebug() << "Failed to open file for writing";
        }
        file.remove();
    }
}
