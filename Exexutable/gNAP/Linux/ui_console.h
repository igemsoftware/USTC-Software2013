/********************************************************************************
** Form generated from reading UI file 'console.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSOLE_H
#define UI_CONSOLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_console
{
public:
    QFrame *background;
    QProgressBar *progress_bar;
    QTextBrowser *cout;
    QPushButton *analyze;
    QPushButton *show;
    QPushButton *result;
    QPushButton *predict;
    QPushButton *add;
    QPushButton *close;
    QLabel *tips;
    QPushButton *back;
    QLabel *label;
    QLabel *label_2;
    QPushButton *Done;
    QPushButton *Done2;
    QLabel *label_3;
    QPlainTextEdit *promoter;
    QPlainTextEdit *gene;

    void setupUi(QWidget *console)
    {
        if (console->objectName().isEmpty())
            console->setObjectName(QStringLiteral("console"));
        console->resize(940, 540);
        QIcon icon;
        icon.addFile(QStringLiteral(":/picture/picture/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        console->setWindowIcon(icon);
        background = new QFrame(console);
        background->setObjectName(QStringLiteral("background"));
        background->setGeometry(QRect(0, 0, 940, 540));
        background->setStyleSheet(QLatin1String("#background{\n"
"        border-image: url(:/picture/picture/background.jpg);\n"
"}"));
        background->setFrameShape(QFrame::StyledPanel);
        background->setFrameShadow(QFrame::Raised);
        progress_bar = new QProgressBar(background);
        progress_bar->setObjectName(QStringLiteral("progress_bar"));
        progress_bar->setGeometry(QRect(50, 290, 380, 20));
        progress_bar->setStyleSheet(QLatin1String("#progress_bar{\n"
"        border-image: url(:/picture/picture/progress.png);\n"
"}\n"
"#progress_bar::chunk{\n"
"        width:1px;\n"
"        background-color: rgb(255, 255, 255);\n"
"\n"
"}"));
        progress_bar->setValue(0);
        progress_bar->setTextVisible(false);
        cout = new QTextBrowser(background);
        cout->setObjectName(QStringLiteral("cout"));
        cout->setGeometry(QRect(50, 65, 380, 215));
        cout->setStyleSheet(QLatin1String("#cout{\n"
"        border-image: url(:/picture/picture/progress.png);\n"
"        color:white;\n"
"        font: 16pt \"Consolas\";\n"
"}"));
        analyze = new QPushButton(background);
        analyze->setObjectName(QStringLiteral("analyze"));
        analyze->setGeometry(QRect(460, 370, 215, 40));
        analyze->setCursor(QCursor(Qt::PointingHandCursor));
        analyze->setStyleSheet(QLatin1String("#analyze{\n"
"        border-image: url(:/picture/picture/green_tag1.png);\n"
"        color:white;\n"
"        font: 75 18pt \"Arial\";\n"
"}\n"
"\n"
"#analyze:hover{\n"
"\n"
"        border-image: url(:/picture/picture/green_tag2.png);\n"
"}"));
        show = new QPushButton(background);
        show->setObjectName(QStringLiteral("show"));
        show->setGeometry(QRect(50, 370, 380, 40));
        show->setCursor(QCursor(Qt::PointingHandCursor));
        show->setStyleSheet(QLatin1String("#show{\n"
"        border-image: url(:/picture/picture/green1.png);\n"
"        color:white;\n"
"        font: 75 18pt \"Arial\";\n"
"}\n"
"\n"
"#show::hover{\n"
"\n"
"        border-image: url(:/picture/picture/green2.png);\n"
"}"));
        result = new QPushButton(background);
        result->setObjectName(QStringLiteral("result"));
        result->setGeometry(QRect(50, 320, 380, 40));
        result->setCursor(QCursor(Qt::PointingHandCursor));
        result->setStyleSheet(QLatin1String("#result{\n"
"        border-image: url(:/picture/picture/green1.png);\n"
"        color:white;\n"
"        font: 75 18pt \"Arial\";\n"
"}\n"
"\n"
"#result:hover{\n"
"\n"
"        border-image: url(:/picture/picture/green2.png);\n"
"}"));
        predict = new QPushButton(background);
        predict->setObjectName(QStringLiteral("predict"));
        predict->setGeometry(QRect(645, 370, 215, 40));
        predict->setCursor(QCursor(Qt::PointingHandCursor));
        predict->setStyleSheet(QLatin1String("#predict{\n"
"        border-image: url(:/picture/picture/green_tag1.png);\n"
"        color:white;\n"
"        font: 75 18pt \"Arial\";\n"
"}\n"
"\n"
"#predict::hover{\n"
"\n"
"        border-image: url(:/picture/picture/green_tag2.png);\n"
"}"));
        add = new QPushButton(background);
        add->setObjectName(QStringLiteral("add"));
        add->setGeometry(QRect(470, 70, 380, 40));
        add->setCursor(QCursor(Qt::PointingHandCursor));
        add->setStyleSheet(QLatin1String("#add{\n"
"        border-image: url(:/picture/picture/green1.png);\n"
"        color:white;\n"
"        font: 75 18pt \"Arial\";\n"
"}\n"
"\n"
"#add:hover{\n"
"\n"
"        border-image: url(:/picture/picture/green2.png);\n"
"}"));
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
        tips = new QLabel(background);
        tips->setObjectName(QStringLiteral("tips"));
        tips->setGeometry(QRect(450, 420, 401, 51));
        tips->setStyleSheet(QLatin1String("#tips{\n"
"        font: 75 16pt \"Cambria\";\n"
"        color:white;\n"
"}"));
        tips->setMargin(2);
        back = new QPushButton(background);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(840, 10, 38, 38));
        back->setCursor(QCursor(Qt::PointingHandCursor));
        back->setStyleSheet(QLatin1String("#back{\n"
"        border-image: url(:/picture/picture/back1.png);\n"
"}\n"
"\n"
"#back:hover{\n"
"\n"
"        border-image: url(:/picture/picture/back2.png);\n"
"}"));
        label = new QLabel(background);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(760, 470, 171, 57));
        label->setStyleSheet(QStringLiteral("border-image: url(:/picture/picture/Software-Logo_white_small.png);"));
        label_2 = new QLabel(background);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 430, 380, 80));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/picture/picture/pro11.png);"));
        Done = new QPushButton(background);
        Done->setObjectName(QStringLiteral("Done"));
        Done->setGeometry(QRect(470, 320, 380, 40));
        Done->setCursor(QCursor(Qt::PointingHandCursor));
        Done->setStyleSheet(QLatin1String("#Done{\n"
"        border-image: url(:/picture/picture/green1.png);\n"
"        color:white;\n"
"        font: 75 18pt \"Arial\";\n"
"}\n"
"\n"
"#Done:hover{\n"
"\n"
"        border-image: url(:/picture/picture/green2.png);\n"
"}"));
        Done2 = new QPushButton(background);
        Done2->setObjectName(QStringLiteral("Done2"));
        Done2->setGeometry(QRect(470, 320, 380, 40));
        Done2->setCursor(QCursor(Qt::PointingHandCursor));
        Done2->setStyleSheet(QLatin1String("#Done2{\n"
"        border-image: url(:/picture/picture/green1.png);\n"
"        color:white;\n"
"        font: 75 18pt \"Arial\";\n"
"}\n"
"\n"
"#Done2:hover{\n"
"\n"
"        border-image: url(:/picture/picture/green2.png);\n"
"}"));
        label_3 = new QLabel(background);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(460, 60, 400, 310));
        label_3->setStyleSheet(QStringLiteral("background-color: \"#264b68\";"));
        promoter = new QPlainTextEdit(background);
        promoter->setObjectName(QStringLiteral("promoter"));
        promoter->setGeometry(QRect(470, 70, 381, 111));
        promoter->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        promoter->setStyleSheet(QStringLiteral("font: 75 16pt \"Arial\";"));
        gene = new QPlainTextEdit(background);
        gene->setObjectName(QStringLiteral("gene"));
        gene->setGeometry(QRect(470, 190, 381, 111));
        gene->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        gene->setStyleSheet(QStringLiteral("font: 75 16pt \"Arial\";"));
        predict->raise();
        label_3->raise();
        progress_bar->raise();
        cout->raise();
        analyze->raise();
        show->raise();
        result->raise();
        add->raise();
        close->raise();
        tips->raise();
        back->raise();
        label->raise();
        label_2->raise();
        Done->raise();
        Done2->raise();
        promoter->raise();
        gene->raise();

        retranslateUi(console);

        QMetaObject::connectSlotsByName(console);
    } // setupUi

    void retranslateUi(QWidget *console)
    {
        console->setWindowTitle(QApplication::translate("console", "Form", 0));
        cout->setHtml(QApplication::translate("console", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Consolas'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        analyze->setText(QApplication::translate("console", "Analyse", 0));
        show->setText(QApplication::translate("console", "Display", 0));
        result->setText(QApplication::translate("console", "Result", 0));
        predict->setText(QApplication::translate("console", "Predict", 0));
        add->setText(QApplication::translate("console", "Add", 0));
        close->setText(QString());
        tips->setText(QString());
        back->setText(QString());
        label->setText(QString());
        label_2->setText(QString());
        Done->setText(QApplication::translate("console", "DONE", 0));
        Done2->setText(QApplication::translate("console", "DONE", 0));
        label_3->setText(QString());
        promoter->setPlainText(QApplication::translate("console", "Copy promoter sequence here!", 0));
        gene->setPlainText(QApplication::translate("console", "Copy gene sequence here!", 0));
    } // retranslateUi

};

namespace Ui {
    class console: public Ui_console {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSOLE_H
