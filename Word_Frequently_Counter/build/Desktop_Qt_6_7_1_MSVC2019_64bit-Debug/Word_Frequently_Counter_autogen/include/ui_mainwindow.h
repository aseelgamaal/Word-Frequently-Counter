/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QTableWidget *tableWidget;
    QLabel *label;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_4;
    QListView *listView;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *browseButton;
    QPushButton *addButton;
    QPushButton *updateButton;
    QTableWidget *tableWidget_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1800, 1000);
        QFont font;
        font.setBold(true);
        MainWindow->setFont(font);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("accessories-dictionary")));
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(1080, 410, 181, 41));
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(920, 60, 271, 281));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        tableWidget->setFont(font1);
        tableWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(530, -10, 381, 91));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font2.setPointSize(22);
        font2.setBold(true);
        label->setFont(font2);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(1270, 410, 51, 41));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(1080, 350, 241, 51));
        pushButton_4->setFont(font1);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(1080, 520, 241, 91));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(true);
        label_3->setFont(font3);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font3);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font1);

        gridLayout->addWidget(label_5, 1, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);

        gridLayout->addWidget(label_4, 0, 1, 1, 1);

        listView = new QListView(centralwidget);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(1080, 450, 181, 61));
        listView->setProperty("showDropIndicator", QVariant(false));
        listView->setAlternatingRowColors(false);
        listView->setProperty("isWrapping", QVariant(false));
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(30, 60, 631, 601));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        plainTextEdit = new QPlainTextEdit(layoutWidget1);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setFont(font3);

        verticalLayout->addWidget(plainTextEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(20, 50));
        pushButton->setFont(font1);

        horizontalLayout->addWidget(pushButton);

        browseButton = new QPushButton(layoutWidget1);
        browseButton->setObjectName("browseButton");
        browseButton->setMinimumSize(QSize(20, 50));
        browseButton->setFont(font1);

        horizontalLayout->addWidget(browseButton);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        addButton = new QPushButton(layoutWidget1);
        addButton->setObjectName("addButton");
        addButton->setMinimumSize(QSize(20, 50));
        addButton->setFont(font1);

        verticalLayout_2->addWidget(addButton);

        updateButton = new QPushButton(layoutWidget1);
        updateButton->setObjectName("updateButton");
        updateButton->setMinimumSize(QSize(20, 50));
        updateButton->setFont(font1);

        verticalLayout_2->addWidget(updateButton);

        tableWidget_2 = new QTableWidget(centralwidget);
        if (tableWidget_2->columnCount() < 2)
            tableWidget_2->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        tableWidget_2->setObjectName("tableWidget_2");
        tableWidget_2->setGeometry(QRect(1210, 60, 261, 281));
        tableWidget_2->setFont(font1);
        tableWidget_2->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Word", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Frequency", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Word Frequently Counter", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Calculate Freqency", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Order", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Frequency", nullptr));
        label_5->setText(QString());
        label_4->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "Translate", nullptr));
        browseButton->setText(QCoreApplication::translate("MainWindow", "Upload", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        updateButton->setText(QCoreApplication::translate("MainWindow", "Update", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Word", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Total Frequency", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
