#include "files.h"
#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include <QDirIterator>
#include <QApplication>

void Files::appendTextToFile(const QString& text, const QString& fileName) {
    QString fileNameText= fileName + ".txt";
    if(fileNameText==".txt"){
        fileNameText="paragraph_" + QDateTime::currentDateTime().toString("yyyyMMdd_hhmmss") + ".txt";
    }
    QFile file(fileNameText);
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
    }
}

QString Files::readAllParagraphs()
{
    QString projectDirPath = QApplication::applicationDirPath();

    if (projectDirPath.isEmpty()) {
        qWarning() << "Failed to get project directory path.";
    }

    QDir projectDir(projectDirPath);


    QStringList filters = {"paragraph*.txt", ".dat"};
    QStringList textFiles = projectDir.entryList(filters, QDir::Files);
    QString allParagraph="";

    foreach (const QString &fileName, textFiles) {
        QString filePath = projectDir.filePath(fileName);
        QFile file(filePath);

        if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            qWarning() << "Failed to open file:" << filePath;
            continue;
        }

        QTextStream in(&file);
        QString line="";

        while (!in.atEnd()) {
            line += in.readLine();
            line+=" ";
        }
        allParagraph+=line;
        file.close();
    }
    return allParagraph;
}

