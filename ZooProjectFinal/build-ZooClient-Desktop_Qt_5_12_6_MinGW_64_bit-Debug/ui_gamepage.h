/********************************************************************************
** Form generated from reading UI file 'gamepage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEPAGE_H
#define UI_GAMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gamePage
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_zooName;
    QLabel *label_money;
    QPushButton *btn_show;
    QPushButton *btn_showStats;
    QFrame *frame_3;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton_19;
    QPushButton *pushButton_21;
    QPushButton *pushButton;
    QScrollArea *scrollArea_history;
    QWidget *scrollAreaHistoryContent;
    QLabel *label_2;
    QFrame *frame_2;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_12;
    QPushButton *pushButton_11;
    QPushButton *pushButton_10;
    QPushButton *pushButton_13;
    QPushButton *pushButton_9;
    QLabel *label_5;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QPushButton *btn10Seed;
    QPushButton *btn100Meat;
    QPushButton *btn100Seed;
    QPushButton *btn1Meat;
    QPushButton *btn10Meat;
    QPushButton *btn1Seed;
    QPushButton *btn_spend;
    QMenuBar *menubar;

    void setupUi(QMainWindow *gamePage)
    {
        if (gamePage->objectName().isEmpty())
            gamePage->setObjectName(QString::fromUtf8("gamePage"));
        gamePage->resize(800, 638);
        centralwidget = new QWidget(gamePage);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 0));
        label->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setTextFormat(Qt::PlainText);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 6, 0, 1, 1);

        label_zooName = new QLabel(centralwidget);
        label_zooName->setObjectName(QString::fromUtf8("label_zooName"));
        label_zooName->setMinimumSize(QSize(0, 0));
        QFont font1;
        font1.setPointSize(24);
        font1.setUnderline(true);
        label_zooName->setFont(font1);
        label_zooName->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_zooName, 0, 0, 1, 4);

        label_money = new QLabel(centralwidget);
        label_money->setObjectName(QString::fromUtf8("label_money"));

        gridLayout->addWidget(label_money, 10, 2, 1, 1);

        btn_show = new QPushButton(centralwidget);
        btn_show->setObjectName(QString::fromUtf8("btn_show"));

        gridLayout->addWidget(btn_show, 7, 3, 1, 1);

        btn_showStats = new QPushButton(centralwidget);
        btn_showStats->setObjectName(QString::fromUtf8("btn_showStats"));
        btn_showStats->setMinimumSize(QSize(150, 30));
        btn_showStats->setMaximumSize(QSize(150, 30));
        QFont font2;
        font2.setPointSize(8);
        font2.setBold(true);
        font2.setWeight(75);
        btn_showStats->setFont(font2);

        gridLayout->addWidget(btn_showStats, 10, 0, 1, 1);

        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        pushButton_19 = new QPushButton(frame_3);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));
        pushButton_19->setMinimumSize(QSize(100, 30));

        gridLayout_4->addWidget(pushButton_19, 0, 0, 1, 1);

        pushButton_21 = new QPushButton(frame_3);
        pushButton_21->setObjectName(QString::fromUtf8("pushButton_21"));
        pushButton_21->setMinimumSize(QSize(100, 30));

        gridLayout_4->addWidget(pushButton_21, 1, 0, 1, 1);


        gridLayout->addWidget(frame_3, 3, 1, 2, 3);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(150, 30));
        pushButton->setMaximumSize(QSize(150, 30));
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        pushButton->setFont(font3);
        pushButton->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(pushButton, 10, 3, 1, 1);

        scrollArea_history = new QScrollArea(centralwidget);
        scrollArea_history->setObjectName(QString::fromUtf8("scrollArea_history"));
        scrollArea_history->setWidgetResizable(true);
        scrollAreaHistoryContent = new QWidget();
        scrollAreaHistoryContent->setObjectName(QString::fromUtf8("scrollAreaHistoryContent"));
        scrollAreaHistoryContent->setGeometry(QRect(0, 0, 780, 123));
        scrollArea_history->setWidget(scrollAreaHistoryContent);

        gridLayout->addWidget(scrollArea_history, 8, 0, 1, 4);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font4;
        font4.setPointSize(16);
        font4.setBold(false);
        font4.setWeight(50);
        label_2->setFont(font4);
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 5, 0, 1, 1);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        pushButton_12 = new QPushButton(frame_2);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setMinimumSize(QSize(100, 30));

        gridLayout_3->addWidget(pushButton_12, 1, 2, 1, 1);

        pushButton_11 = new QPushButton(frame_2);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setMinimumSize(QSize(100, 30));

        gridLayout_3->addWidget(pushButton_11, 2, 1, 1, 1);

        pushButton_10 = new QPushButton(frame_2);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setMinimumSize(QSize(100, 30));

        gridLayout_3->addWidget(pushButton_10, 1, 1, 1, 1);

        pushButton_13 = new QPushButton(frame_2);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setMinimumSize(QSize(100, 30));

        gridLayout_3->addWidget(pushButton_13, 2, 2, 1, 1);

        pushButton_9 = new QPushButton(frame_2);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setMinimumSize(QSize(100, 30));

        gridLayout_3->addWidget(pushButton_9, 2, 0, 1, 1);


        gridLayout->addWidget(frame_2, 5, 1, 1, 3);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        btn10Seed = new QPushButton(frame);
        btn10Seed->setObjectName(QString::fromUtf8("btn10Seed"));
        btn10Seed->setMinimumSize(QSize(100, 30));

        gridLayout_2->addWidget(btn10Seed, 5, 0, 1, 1);

        btn100Meat = new QPushButton(frame);
        btn100Meat->setObjectName(QString::fromUtf8("btn100Meat"));
        btn100Meat->setMinimumSize(QSize(100, 30));

        gridLayout_2->addWidget(btn100Meat, 6, 1, 1, 1);

        btn100Seed = new QPushButton(frame);
        btn100Seed->setObjectName(QString::fromUtf8("btn100Seed"));
        btn100Seed->setMinimumSize(QSize(100, 30));

        gridLayout_2->addWidget(btn100Seed, 6, 0, 1, 1);

        btn1Meat = new QPushButton(frame);
        btn1Meat->setObjectName(QString::fromUtf8("btn1Meat"));
        btn1Meat->setMinimumSize(QSize(100, 30));

        gridLayout_2->addWidget(btn1Meat, 3, 1, 1, 1);

        btn10Meat = new QPushButton(frame);
        btn10Meat->setObjectName(QString::fromUtf8("btn10Meat"));
        btn10Meat->setMinimumSize(QSize(100, 30));

        gridLayout_2->addWidget(btn10Meat, 5, 1, 1, 1);

        btn1Seed = new QPushButton(frame);
        btn1Seed->setObjectName(QString::fromUtf8("btn1Seed"));
        btn1Seed->setMinimumSize(QSize(100, 30));

        gridLayout_2->addWidget(btn1Seed, 3, 0, 1, 1);


        gridLayout->addWidget(frame, 6, 1, 1, 3);

        btn_spend = new QPushButton(centralwidget);
        btn_spend->setObjectName(QString::fromUtf8("btn_spend"));
        btn_spend->setMinimumSize(QSize(100, 30));

        gridLayout->addWidget(btn_spend, 1, 3, 1, 1);

        gamePage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(gamePage);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        gamePage->setMenuBar(menubar);

        retranslateUi(gamePage);

        QMetaObject::connectSlotsByName(gamePage);
    } // setupUi

    void retranslateUi(QMainWindow *gamePage)
    {
        gamePage->setWindowTitle(QApplication::translate("gamePage", "Jeu", nullptr));
        label->setText(QApplication::translate("gamePage", "BOUFFE", nullptr));
        label_zooName->setText(QApplication::translate("gamePage", "NOM DU ZOO", nullptr));
        label_money->setText(QString());
        btn_show->setText(QApplication::translate("gamePage", "SHOW", nullptr));
        btn_showStats->setText(QApplication::translate("gamePage", "PARAMETRES", nullptr));
        pushButton_19->setText(QApplication::translate("gamePage", "rien", nullptr));
        pushButton_21->setText(QApplication::translate("gamePage", "rien", nullptr));
        pushButton->setText(QApplication::translate("gamePage", "PROCHAIN TOUR", nullptr));
        label_2->setText(QApplication::translate("gamePage", "ANIMAUX", nullptr));
        pushButton_12->setText(QApplication::translate("gamePage", "1 TIGRE", nullptr));
        pushButton_11->setText(QApplication::translate("gamePage", "10 AIGLES", nullptr));
        pushButton_10->setText(QApplication::translate("gamePage", "1 POULE", nullptr));
        pushButton_13->setText(QApplication::translate("gamePage", "10 TIGRES", nullptr));
        pushButton_9->setText(QApplication::translate("gamePage", "10 POULES", nullptr));
        label_5->setText(QApplication::translate("gamePage", "HABITATS", nullptr));
        btn10Seed->setText(QApplication::translate("gamePage", "10 GRAINES", nullptr));
        btn100Meat->setText(QApplication::translate("gamePage", "100 VIANDES", nullptr));
        btn100Seed->setText(QApplication::translate("gamePage", "100 GRAINES", nullptr));
        btn1Meat->setText(QApplication::translate("gamePage", "1 VIANDE", nullptr));
        btn10Meat->setText(QApplication::translate("gamePage", "10 VIANDES", nullptr));
        btn1Seed->setText(QApplication::translate("gamePage", "1 GRAINE", nullptr));
        btn_spend->setText(QApplication::translate("gamePage", "BUDGET TEST", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gamePage: public Ui_gamePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEPAGE_H
