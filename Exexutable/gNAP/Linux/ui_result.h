/********************************************************************************
** Form generated from reading UI file 'result.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULT_H
#define UI_RESULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_result
{
public:
    QFrame *back_result;
    QPushButton *close;
    QPushButton *back;
    QWidget *analyze;
    QLabel *analyze_head;
    QLabel *score;
    QComboBox *choose;
    QFrame *up_down;
    QTextBrowser *Information;
    QPushButton *done;
    QPushButton *sbol;
    QFrame *line_2;
    QFrame *star1;
    QFrame *line_4;
    QFrame *star2;
    QFrame *star4;
    QFrame *star5;
    QFrame *star3;
    QWidget *predict;
    QLabel *predict_head;
    QLabel *target;
    QTextBrowser *target_gene;
    QTextBrowser *prediction;
    QFrame *line_3;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *result)
    {
        if (result->objectName().isEmpty())
            result->setObjectName(QStringLiteral("result"));
        result->resize(940, 540);
        QIcon icon;
        icon.addFile(QStringLiteral(":/picture/picture/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        result->setWindowIcon(icon);
        back_result = new QFrame(result);
        back_result->setObjectName(QStringLiteral("back_result"));
        back_result->setGeometry(QRect(0, 0, 940, 540));
        back_result->setStyleSheet(QLatin1String("#back_result{\n"
"        border-image: url(:/picture/picture/background.jpg);\n"
"}"));
        back_result->setFrameShape(QFrame::StyledPanel);
        back_result->setFrameShadow(QFrame::Raised);
        close = new QPushButton(back_result);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(880, 20, 40, 40));
        close->setCursor(QCursor(Qt::PointingHandCursor));
        close->setStyleSheet(QLatin1String("#close{\n"
"        border-image: url(:/picture/picture/close1.png);\n"
"}\n"
"\n"
"#close:hover{\n"
"\n"
"        border-image: url(:/picture/picture/close2.png);\n"
"}"));
        back = new QPushButton(back_result);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(830, 20, 38, 38));
        back->setCursor(QCursor(Qt::PointingHandCursor));
        back->setStyleSheet(QLatin1String("#back{\n"
"        border-image: url(:/picture/picture/back1.png);\n"
"}\n"
"\n"
"#back:hover{\n"
"\n"
"        border-image: url(:/picture/picture/back2.png);\n"
"}"));
        analyze = new QWidget(back_result);
        analyze->setObjectName(QStringLiteral("analyze"));
        analyze->setGeometry(QRect(60, 60, 361, 371));
        analyze_head = new QLabel(analyze);
        analyze_head->setObjectName(QStringLiteral("analyze_head"));
        analyze_head->setGeometry(QRect(0, 10, 160, 50));
        analyze_head->setStyleSheet(QLatin1String("#analyze_head{\n"
"        font: 75 28pt \"Arial\";\n"
"        color:white;\n"
"}"));
        score = new QLabel(analyze);
        score->setObjectName(QStringLiteral("score"));
        score->setGeometry(QRect(0, 69, 101, 61));
        score->setStyleSheet(QLatin1String("#score{\n"
"        background-image: url(:/picture/picture/progress.png);\n"
"        color:white;\n"
"        font: 75 18pt \"Arial\";\n"
"}\n"
""));
        score->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        choose = new QComboBox(analyze);
        choose->setObjectName(QStringLiteral("choose"));
        choose->setGeometry(QRect(0, 130, 141, 50));
        choose->setCursor(QCursor(Qt::IBeamCursor));
        choose->setStyleSheet(QLatin1String("QComboBox::drop-down{\n"
"width:0;\n"
"}\n"
"\n"
"#choose{\n"
"\n"
"        border-image: url(:/picture/picture/progress.png);\n"
"        font: 75 20pt \"Comic Sans MS\";\n"
"        color:white;\n"
"\n"
"}\n"
"\n"
"#choose:hover{\n"
"        border-image: url(:/picture/picture/green2.png);\n"
"}"));
        up_down = new QFrame(analyze);
        up_down->setObjectName(QStringLiteral("up_down"));
        up_down->setGeometry(QRect(310, 130, 51, 51));
        up_down->setStyleSheet(QLatin1String("#up_down{\n"
"border-image: url(:/picture/picture/to_high.png);}"));
        up_down->setFrameShape(QFrame::StyledPanel);
        up_down->setFrameShadow(QFrame::Raised);
        Information = new QTextBrowser(analyze);
        Information->setObjectName(QStringLiteral("Information"));
        Information->setGeometry(QRect(0, 180, 361, 191));
        Information->setStyleSheet(QLatin1String("#Information{\n"
"        border-image: url(:/picture/picture/progress.png);\n"
"        color:white;\n"
"        font: 75 18pt \"Courier\";\n"
"}"));
        Information->setCursorWidth(0);
        Information->setOpenExternalLinks(true);
        done = new QPushButton(analyze);
        done->setObjectName(QStringLiteral("done"));
        done->setGeometry(QRect(140, 130, 161, 51));
        done->setCursor(QCursor(Qt::PointingHandCursor));
        done->setStyleSheet(QLatin1String("#done{\n"
"        border-image: url(:/picture/picture/progress.png);\n"
"        color:white;\n"
"        font: 75 18pt \"Arial\";\n"
"}\n"
"#done:hover{\n"
"\n"
"        border-image: url(:/picture/picture/green2.png);\n"
"}\n"
""));
        sbol = new QPushButton(analyze);
        sbol->setObjectName(QStringLiteral("sbol"));
        sbol->setGeometry(QRect(240, 340, 121, 31));
        sbol->setCursor(QCursor(Qt::PointingHandCursor));
        sbol->setStyleSheet(QLatin1String("#sbol{\n"
"        border-image: url(:/picture/picture/progress.png);\n"
"        color:white;\n"
"        font: 75 18pt \"Arial\";\n"
"}\n"
"#sbol:hover{\n"
"        border-image: url(:/picture/picture/green2.png);\n"
"}\n"
""));
        line_2 = new QFrame(analyze);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(110, 110, 251, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        star1 = new QFrame(analyze);
        star1->setObjectName(QStringLiteral("star1"));
        star1->setGeometry(QRect(110, 70, 45, 45));
        star1->setStyleSheet(QStringLiteral("border-image: url(:/picture/picture/star.png);"));
        star1->setFrameShape(QFrame::StyledPanel);
        star1->setFrameShadow(QFrame::Raised);
        line_4 = new QFrame(analyze);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(0, 170, 141, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        star2 = new QFrame(analyze);
        star2->setObjectName(QStringLiteral("star2"));
        star2->setGeometry(QRect(160, 70, 45, 45));
        star2->setStyleSheet(QStringLiteral("border-image: url(:/picture/picture/star.png);"));
        star2->setFrameShape(QFrame::StyledPanel);
        star2->setFrameShadow(QFrame::Raised);
        star4 = new QFrame(analyze);
        star4->setObjectName(QStringLiteral("star4"));
        star4->setGeometry(QRect(260, 70, 45, 45));
        star4->setStyleSheet(QStringLiteral("border-image: url(:/picture/picture/star.png);"));
        star4->setFrameShape(QFrame::StyledPanel);
        star4->setFrameShadow(QFrame::Raised);
        star5 = new QFrame(analyze);
        star5->setObjectName(QStringLiteral("star5"));
        star5->setGeometry(QRect(310, 70, 45, 45));
        star5->setStyleSheet(QStringLiteral("border-image: url(:/picture/picture/star.png);"));
        star5->setFrameShape(QFrame::StyledPanel);
        star5->setFrameShadow(QFrame::Raised);
        star3 = new QFrame(analyze);
        star3->setObjectName(QStringLiteral("star3"));
        star3->setGeometry(QRect(210, 70, 45, 45));
        star3->setStyleSheet(QStringLiteral("border-image: url(:/picture/picture/star.png);"));
        star3->setFrameShape(QFrame::StyledPanel);
        star3->setFrameShadow(QFrame::Raised);
        Information->raise();
        analyze_head->raise();
        score->raise();
        choose->raise();
        done->raise();
        sbol->raise();
        up_down->raise();
        line_2->raise();
        star1->raise();
        line_4->raise();
        star2->raise();
        star4->raise();
        star5->raise();
        star3->raise();
        predict = new QWidget(back_result);
        predict->setObjectName(QStringLiteral("predict"));
        predict->setGeometry(QRect(480, 60, 400, 430));
        predict->setStyleSheet(QStringLiteral(""));
        predict_head = new QLabel(predict);
        predict_head->setObjectName(QStringLiteral("predict_head"));
        predict_head->setGeometry(QRect(0, 10, 171, 51));
        predict_head->setStyleSheet(QLatin1String("#predict_head{\n"
"        font: 75 28pt \"Arial\";\n"
"        color:white;\n"
"}"));
        target = new QLabel(predict);
        target->setObjectName(QStringLiteral("target"));
        target->setGeometry(QRect(0, 80, 191, 50));
        target->setStyleSheet(QLatin1String("#target{\n"
"\n"
"        border-image: url(:/picture/picture/progress.png);\n"
"        color:white;\n"
"        font: 75 18pt \"Arial\";\n"
"}\n"
""));
        target->setAlignment(Qt::AlignCenter);
        target_gene = new QTextBrowser(predict);
        target_gene->setObjectName(QStringLiteral("target_gene"));
        target_gene->setGeometry(QRect(0, 130, 190, 290));
        target_gene->setStyleSheet(QLatin1String("#target_gene{\n"
"        border-image: url(:/picture/picture/progress.png);\n"
"color:white;\n"
"        font: 75 18pt \"Courier\";\n"
"}"));
        prediction = new QTextBrowser(predict);
        prediction->setObjectName(QStringLiteral("prediction"));
        prediction->setGeometry(QRect(189, 79, 211, 325));
        prediction->setStyleSheet(QLatin1String("#prediction{\n"
"        border-image: url(:/picture/picture/progress.png);\n"
"color:white;\n"
"        font: 75 16pt \"Courier\";\n"
"}"));
        line_3 = new QFrame(predict);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(170, 140, 20, 241));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label = new QLabel(back_result);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(760, 470, 171, 57));
        label->setStyleSheet(QStringLiteral("border-image: url(:/picture/picture/Software-Logo_white_small.png);"));
        label_2 = new QLabel(back_result);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 430, 380, 80));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/picture/picture/pro5.png);"));
        label_2->raise();
        close->raise();
        back->raise();
        analyze->raise();
        predict->raise();
        label->raise();

        retranslateUi(result);

        QMetaObject::connectSlotsByName(result);
    } // setupUi

    void retranslateUi(QWidget *result)
    {
        result->setWindowTitle(QApplication::translate("result", "Form", 0));
        close->setText(QString());
        back->setText(QString());
        analyze_head->setText(QApplication::translate("result", "Analyze", 0));
        score->setText(QApplication::translate("result", "STABLE\n"
"SCORE", 0));
        Information->setHtml(QApplication::translate("result", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Courier'; font-size:18pt; font-weight:72; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        done->setText(QApplication::translate("result", "Show me!", 0));
        sbol->setText(QApplication::translate("result", "SBOL  IT !", 0));
        predict_head->setText(QApplication::translate("result", "Predict", 0));
        target->setText(QApplication::translate("result", "TARGET", 0));
        target_gene->setHtml(QApplication::translate("result", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Courier'; font-size:18pt; font-weight:72; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        prediction->setHtml(QApplication::translate("result", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Courier'; font-size:16pt; font-weight:72; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        label->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class result: public Ui_result {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULT_H
