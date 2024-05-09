/********************************************************************************
** Form generated from reading UI file 'correctpage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CORRECTPAGE_H
#define UI_CORRECTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CorrectPage
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *CorrectPage)
    {
        if (CorrectPage->objectName().isEmpty())
            CorrectPage->setObjectName("CorrectPage");
        CorrectPage->resize(400, 300);
        label = new QLabel(CorrectPage);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 90, 221, 31));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);
        lineEdit = new QLineEdit(CorrectPage);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(190, 90, 201, 31));
        pushButton = new QPushButton(CorrectPage);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(300, 230, 81, 31));

        retranslateUi(CorrectPage);

        QMetaObject::connectSlotsByName(CorrectPage);
    } // setupUi

    void retranslateUi(QDialog *CorrectPage)
    {
        CorrectPage->setWindowTitle(QCoreApplication::translate("CorrectPage", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("CorrectPage", "The corrected word is : ", nullptr));
        pushButton->setText(QCoreApplication::translate("CorrectPage", "close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CorrectPage: public Ui_CorrectPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CORRECTPAGE_H
