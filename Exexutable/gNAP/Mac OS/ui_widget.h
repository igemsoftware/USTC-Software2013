/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QFrame *background;
    QLabel *Do;
    QPushButton *TF_TF;
    QPushButton *TF_Gene;
    QPushButton *Gene_Info;
    QPushButton *TU_Info;
    QPushButton *Promoter_Info;
    QPushButton *close;
    QPushButton *Take_a_nap;
    QLabel *doing;
    QProgressBar *progress_bar_start;
    QLabel *Team_logo;
    QLabel *Pro;
    QLabel *software_logo;
    QLabel *Dev_by;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(940, 540);
        QIcon icon;
        icon.addFile(QStringLiteral(":/picture/picture/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Widget->setWindowIcon(icon);
        Widget->setStyleSheet(QStringLiteral(""));
        background = new QFrame(Widget);
        background->setObjectName(QStringLiteral("background"));
        background->setGeometry(QRect(0, 0, 940, 540));
        background->setStyleSheet(QStringLiteral("#background{border-image: url(:/picture/picture/background.jpg);}"));
        background->setFrameShape(QFrame::StyledPanel);
        background->setFrameShadow(QFrame::Raised);
        Do = new QLabel(background);
        Do->setObjectName(QStringLiteral("Do"));
        Do->setGeometry(QRect(520, 140, 350, 121));
        Do->setStyleSheet(QLatin1String("#Do{\n"
"        font: 75 30pt \"Aharoni\";\n"
"        color:\"#DEE3E8\";\n"
"}"));
        Do->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        Do->setWordWrap(true);
        TF_TF = new QPushButton(background);
        TF_TF->setObjectName(QStringLiteral("TF_TF"));
        TF_TF->setGeometry(QRect(520, 310, 350, 40));
        TF_TF->setCursor(QCursor(Qt::PointingHandCursor));
        TF_TF->setStyleSheet(QLatin1String("#TF_TF{\n"
"        border-image: url(:/picture/picture/green1.png);\n"
"color:white;\n"
"        font: 75 20pt \"Aharoni\";\n"
"}\n"
"\n"
"#TF_TF:hover{\n"
"        border-image: url(:/picture/picture/green2.png);\n"
"}\n"
""));
        TF_Gene = new QPushButton(background);
        TF_Gene->setObjectName(QStringLiteral("TF_Gene"));
        TF_Gene->setGeometry(QRect(520, 310, 350, 40));
        TF_Gene->setCursor(QCursor(Qt::PointingHandCursor));
        TF_Gene->setStyleSheet(QLatin1String("#TF_Gene{\n"
"        border-image: url(:/picture/picture/green1.png);\n"
"color:white;\n"
"        font: 75 20pt \"Aharoni\";\n"
"}\n"
"\n"
"#TF_Gene:hover{\n"
"        border-image: url(:/picture/picture/green2.png);\n"
"}\n"
""));
        Gene_Info = new QPushButton(background);
        Gene_Info->setObjectName(QStringLiteral("Gene_Info"));
        Gene_Info->setGeometry(QRect(520, 310, 350, 40));
        Gene_Info->setCursor(QCursor(Qt::PointingHandCursor));
        Gene_Info->setStyleSheet(QLatin1String("#Gene_Info{\n"
"        border-image: url(:/picture/picture/green1.png);\n"
"        color:white;\n"
"        font: 75 20pt \"Aharoni\";\n"
"}\n"
"\n"
"#Gene_Info:hover{\n"
"        border-image: url(:/picture/picture/green2.png);\n"
"}\n"
""));
        TU_Info = new QPushButton(background);
        TU_Info->setObjectName(QStringLiteral("TU_Info"));
        TU_Info->setGeometry(QRect(520, 310, 350, 40));
        TU_Info->setCursor(QCursor(Qt::PointingHandCursor));
        TU_Info->setStyleSheet(QLatin1String("#TU_Info{\n"
"        border-image: url(:/picture/picture/green1.png);\n"
"color:white;\n"
"        font: 75 20pt \"Aharoni\";\n"
"}\n"
"\n"
"#TU_Info:hover{\n"
"        border-image: url(:/picture/picture/green2.png);\n"
"}\n"
""));
        Promoter_Info = new QPushButton(background);
        Promoter_Info->setObjectName(QStringLiteral("Promoter_Info"));
        Promoter_Info->setGeometry(QRect(520, 310, 350, 40));
        Promoter_Info->setCursor(QCursor(Qt::PointingHandCursor));
        Promoter_Info->setStyleSheet(QLatin1String("#Promoter_Info{\n"
"        border-image: url(:/picture/picture/green1.png);\n"
"color:white;\n"
"        font: 75 20pt \"Aharoni\";\n"
"}\n"
"\n"
"#Promoter_Info:hover{\n"
"        border-image: url(:/picture/picture/green2.png);\n"
"}\n"
""));
        close = new QPushButton(background);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(890, 10, 40, 40));
        close->setCursor(QCursor(Qt::PointingHandCursor));
        close->setStyleSheet(QLatin1String("#close{\n"
"        border-image: url(:/picture/picture/close1.png);\n"
"}\n"
"\n"
"#close:hover{\n"
"\n"
"        border-image: url(:/picture/picture/close2.png);\n"
"}"));
        Take_a_nap = new QPushButton(background);
        Take_a_nap->setObjectName(QStringLiteral("Take_a_nap"));
        Take_a_nap->setGeometry(QRect(520, 310, 350, 40));
        Take_a_nap->setCursor(QCursor(Qt::PointingHandCursor));
        Take_a_nap->setStyleSheet(QLatin1String("#Take_a_nap{\n"
"        border-image: url(:/picture/picture/green1.png);\n"
"color:white;\n"
"	font: 86 20pt \"Arial\";\n"
"}\n"
"\n"
"#Take_a_nap:hover{\n"
"        border-image: url(:/picture/picture/green2.png);\n"
"}\n"
""));
        doing = new QLabel(background);
        doing->setObjectName(QStringLiteral("doing"));
        doing->setGeometry(QRect(50, 160, 371, 211));
        doing->setStyleSheet(QLatin1String("#doing{\n"
"	font: 16pt \"Arial\";\n"
"color:\"#5D95C1\";}"));
        doing->setTextFormat(Qt::AutoText);
        doing->setAlignment(Qt::AlignJustify|Qt::AlignTop);
        doing->setWordWrap(true);
        doing->setIndent(-1);
        progress_bar_start = new QProgressBar(background);
        progress_bar_start->setObjectName(QStringLiteral("progress_bar_start"));
        progress_bar_start->setGeometry(QRect(520, 310, 350, 40));
        progress_bar_start->setStyleSheet(QLatin1String("#progress_bar_start{\n"
"        border-image: url(:/picture/picture/progress.png);\n"
"}\n"
"#progress_bar_start::chunk{\n"
"	background-image: url(:/picture/picture/Progress take.png);\n"
"}"));
        progress_bar_start->setValue(70);
        progress_bar_start->setTextVisible(false);
        Team_logo = new QLabel(background);
        Team_logo->setObjectName(QStringLiteral("Team_logo"));
        Team_logo->setGeometry(QRect(760, 430, 150, 82));
        Team_logo->setStyleSheet(QStringLiteral("border-image: url(:/picture/picture/teamlogo_white_small.png);"));
        Pro = new QLabel(background);
        Pro->setObjectName(QStringLiteral("Pro"));
        Pro->setGeometry(QRect(50, 430, 380, 80));
        Pro->setStyleSheet(QStringLiteral("border-image: url(:/picture/picture/pro1.png);"));
        software_logo = new QLabel(background);
        software_logo->setObjectName(QStringLiteral("software_logo"));
        software_logo->setGeometry(QRect(600, 70, 191, 63));
        software_logo->setStyleSheet(QLatin1String("\n"
"border-image: url(:/picture/picture/Software-Logo_white_small.png);"));
        Dev_by = new QLabel(background);
        Dev_by->setObjectName(QStringLiteral("Dev_by"));
        Dev_by->setGeometry(QRect(700, 480, 71, 21));
        Dev_by->setStyleSheet(QLatin1String("font: 75 14pt \"Arial\";\n"
"color: rgb(222, 227, 232);"));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        Do->setText(QApplication::translate("Widget", "Genetic Network Analyze & Predict", 0));
        TF_TF->setText(QApplication::translate("Widget", "TF-TF", 0));
        TF_Gene->setText(QApplication::translate("Widget", "TF-Gene", 0));
        Gene_Info->setText(QApplication::translate("Widget", "Gene Info", 0));
        TU_Info->setText(QApplication::translate("Widget", "TU Info", 0));
        Promoter_Info->setText(QApplication::translate("Widget", "Promoter Info", 0));
        close->setText(QString());
        Take_a_nap->setText(QApplication::translate("Widget", "Take a gNAP!", 0));
        doing->setText(QApplication::translate("Widget", "  \"gNAP\" aims to simulate genetic networks. It analyzes the stability and the change of genetic networks after introduction of exogenous genes. Meanwhile, given the original network and specific purposes, the application traces the regulative process back and gives possible regulative patterns.", 0));
        Team_logo->setText(QString());
        Pro->setText(QString());
        software_logo->setText(QString());
        Dev_by->setText(QApplication::translate("Widget", "Dev by", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
