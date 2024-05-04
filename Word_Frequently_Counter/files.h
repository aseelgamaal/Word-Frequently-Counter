#ifndef FILES_H
#define FILES_H
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QFileDialog>

class Files {
public:
    static void appendTextToFile(const QString& text);
    static QString loadFile(const QString& filepath);
    static void updateFile(const QString& filename, const QString& newText);
    static QString readAllParagraphs();
};

#endif // FILES_H
