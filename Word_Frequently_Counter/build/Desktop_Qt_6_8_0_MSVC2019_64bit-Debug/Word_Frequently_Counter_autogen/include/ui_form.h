/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLabel *label;
    QLabel *label_2;
    QListView *listView;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(154, 243);
        label = new QLabel(Form);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 20, 161, 20));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label->setFont(font);
        label_2 = new QLabel(Form);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 230, 91, 31));
        QFont font1;
        font1.setPointSize(14);
        label_2->setFont(font1);
        listView = new QListView(Form);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(0, 50, 151, 192));
        listView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listView->setProperty("showDropIndicator", QVariant(false));
        listView->setDragEnabled(true);

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        label->setText(QCoreApplication::translate("Form", "Did You mean:", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
