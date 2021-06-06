/********************************************************************************
** Form generated from reading UI file 'widget2048.ui'
**
** Created: Sat May 29 10:28:19 2021
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET2048_H
#define UI_WIDGET2048_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget2048
{
public:
    QWidget *widget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton;

    void setupUi(QWidget *Widget2048)
    {
        if (Widget2048->objectName().isEmpty())
            Widget2048->setObjectName(QString::fromUtf8("Widget2048"));
        Widget2048->resize(480, 630);
        Widget2048->setMinimumSize(QSize(480, 630));
        Widget2048->setMaximumSize(QSize(480, 630));
        Widget2048->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 248, 239);"));
        widget = new QWidget(Widget2048);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(15, 165, 450, 450));
        widget->setMinimumSize(QSize(450, 450));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(187, 173, 160);\n"
"border-radius:5px;"));
        label = new QLabel(Widget2048);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(15, 15, 150, 60));
        QFont font;
        font.setPointSize(48);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(118, 111, 101);"));
        label_2 = new QLabel(Widget2048);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(290, 20, 80, 30));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(187, 173, 160);\n"
"color: rgb(235, 223, 209);\n"
"border-top-left-radius:5px;\n"
"border-top-right-radius:5px;"));
        label_2->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        label_3 = new QLabel(Widget2048);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(380, 20, 80, 30));
        label_3->setFont(font1);
        label_3->setFocusPolicy(Qt::NoFocus);
        label_3->setLayoutDirection(Qt::RightToLeft);
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(187, 173, 160);\n"
"color: rgb(235, 223, 209);\n"
"border-top-left-radius:5px;\n"
"border-top-right-radius:5px;"));
        label_3->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        label_4 = new QLabel(Widget2048);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(380, 50, 80, 30));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        label_4->setFont(font2);
        label_4->setFocusPolicy(Qt::NoFocus);
        label_4->setLayoutDirection(Qt::RightToLeft);
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(187, 173, 160);\n"
"color: rgb(255, 255, 255);\n"
"border-bottom-left-radius:5px;\n"
"border-bottom-right-radius:5px;"));
        label_4->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_5 = new QLabel(Widget2048);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(290, 50, 80, 30));
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(187, 173, 160);\n"
"color: rgb(255, 255, 255);\n"
"border-bottom-left-radius:5px;\n"
"border-bottom-right-radius:5px;"));
        label_5->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        pushButton = new QPushButton(Widget2048);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(345, 105, 120, 40));
        pushButton->setSizeIncrement(QSize(100, 35));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        pushButton->setFont(font3);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(144, 122, 99);\n"
"color: rgb(255, 255, 255);\n"
"border-radius:5px;"));

        retranslateUi(Widget2048);

        QMetaObject::connectSlotsByName(Widget2048);
    } // setupUi

    void retranslateUi(QWidget *Widget2048)
    {
        Widget2048->setWindowTitle(QApplication::translate("Widget2048", "Widget2048", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Widget2048", "2048", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Widget2048", "SCORE", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Widget2048", "BEST", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Widget2048", "0", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Widget2048", "0", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Widget2048", "New Game", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget2048: public Ui_Widget2048 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET2048_H
