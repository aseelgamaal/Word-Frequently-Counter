/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
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
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_10;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_12;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_14;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_16;
    QLabel *label_17;
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
        lineEdit->setGeometry(QRect(840, 420, 181, 41));
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(830, 60, 271, 281));
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
        pushButton_3->setGeometry(QRect(1030, 420, 51, 41));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(840, 350, 241, 51));
        pushButton_4->setFont(font1);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(840, 570, 241, 91));
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
        listView->setGeometry(QRect(840, 470, 181, 81));
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
        tableWidget_2->setGeometry(QRect(1120, 60, 261, 281));
        tableWidget_2->setFont(font1);
        tableWidget_2->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(1120, 350, 251, 311));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        label_6->setFont(font1);

        horizontalLayout_2->addWidget(label_6);

        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");
        label_7->setFont(font1);

        horizontalLayout_2->addWidget(label_7);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");
        label_8->setFont(font1);

        horizontalLayout_3->addWidget(label_8);

        label_9 = new QLabel(widget);
        label_9->setObjectName("label_9");
        label_9->setFont(font1);

        horizontalLayout_3->addWidget(label_9);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_10 = new QLabel(widget);
        label_10->setObjectName("label_10");
        label_10->setFont(font1);

        horizontalLayout_5->addWidget(label_10);

        label_11 = new QLabel(widget);
        label_11->setObjectName("label_11");
        label_11->setFont(font1);

        horizontalLayout_5->addWidget(label_11);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_12 = new QLabel(widget);
        label_12->setObjectName("label_12");
        label_12->setFont(font1);

        horizontalLayout_4->addWidget(label_12);

        label_13 = new QLabel(widget);
        label_13->setObjectName("label_13");
        label_13->setFont(font1);

        horizontalLayout_4->addWidget(label_13);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_14 = new QLabel(widget);
        label_14->setObjectName("label_14");
        label_14->setFont(font1);

        horizontalLayout_6->addWidget(label_14);

        label_15 = new QLabel(widget);
        label_15->setObjectName("label_15");
        label_15->setFont(font1);

        horizontalLayout_6->addWidget(label_15);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_16 = new QLabel(widget);
        label_16->setObjectName("label_16");
        label_16->setFont(font1);

        horizontalLayout_7->addWidget(label_16);

        label_17 = new QLabel(widget);
        label_17->setObjectName("label_17");
        label_17->setFont(font1);

        horizontalLayout_7->addWidget(label_17);


        verticalLayout_3->addLayout(horizontalLayout_7);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1800, 21));
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
        label_6->setText(QCoreApplication::translate("MainWindow", "Number Of Words", nullptr));
        label_7->setText(QString());
        label_8->setText(QCoreApplication::translate("MainWindow", "Number Of characters", nullptr));
        label_9->setText(QString());
        label_10->setText(QCoreApplication::translate("MainWindow", "Number Of Sentences", nullptr));
        label_11->setText(QString());
        label_12->setText(QCoreApplication::translate("MainWindow", "Number Of Paragraphs", nullptr));
        label_13->setText(QString());
        label_14->setText(QCoreApplication::translate("MainWindow", "Reading Time", nullptr));
        label_15->setText(QString());
        label_16->setText(QCoreApplication::translate("MainWindow", "Speaking Time", nullptr));
        label_17->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
