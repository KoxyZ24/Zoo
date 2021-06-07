/********************************************************************************
** Form generated from reading UI file 'statspage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATSPAGE_H
#define UI_STATSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_statsPage
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label_12;
    QFrame *frame_2;
    QGridLayout *gridLayout_3;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_10;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_3;
    QLineEdit *input_changeZooName;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_8;
    QLabel *label_2;
    QPushButton *btn_validateZooName;
    QMenuBar *menubar;

    void setupUi(QMainWindow *statsPage)
    {
        if (statsPage->objectName().isEmpty())
            statsPage->setObjectName(QString::fromUtf8("statsPage"));
        statsPage->resize(800, 600);
        centralwidget = new QWidget(statsPage);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 5, 1, 1, 1);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_9 = new QLabel(frame_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_3->addWidget(label_9, 0, 0, 1, 1);

        label_11 = new QLabel(frame_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_3->addWidget(label_11, 1, 0, 1, 1);

        label_10 = new QLabel(frame_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_3->addWidget(label_10, 2, 0, 1, 1);

        label_16 = new QLabel(frame_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_3->addWidget(label_16, 0, 1, 1, 1);

        label_17 = new QLabel(frame_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_3->addWidget(label_17, 1, 1, 1, 1);

        label_18 = new QLabel(frame_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_3->addWidget(label_18, 2, 1, 1, 1);


        gridLayout->addWidget(frame_2, 2, 3, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 1, 1, 1);

        input_changeZooName = new QLineEdit(centralwidget);
        input_changeZooName->setObjectName(QString::fromUtf8("input_changeZooName"));
        input_changeZooName->setMaxLength(35);

        gridLayout->addWidget(input_changeZooName, 5, 3, 1, 1);

        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 2, 0, 1, 1);

        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        label_13 = new QLabel(frame);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_2->addWidget(label_13, 0, 1, 1, 1);

        label_14 = new QLabel(frame);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_2->addWidget(label_14, 1, 1, 1, 1);

        label_15 = new QLabel(frame);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_2->addWidget(label_15, 2, 1, 1, 1);


        gridLayout->addWidget(frame, 1, 3, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 3, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(16);
        font.setUnderline(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 1, 1, 3);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 2, 1, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        btn_validateZooName = new QPushButton(centralwidget);
        btn_validateZooName->setObjectName(QString::fromUtf8("btn_validateZooName"));
        btn_validateZooName->setMinimumSize(QSize(50, 30));
        btn_validateZooName->setMaximumSize(QSize(75, 30));
        btn_validateZooName->setLayoutDirection(Qt::RightToLeft);
        btn_validateZooName->setIconSize(QSize(16, 16));

        gridLayout->addWidget(btn_validateZooName, 6, 3, 1, 1);

        statsPage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(statsPage);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        statsPage->setMenuBar(menubar);

        retranslateUi(statsPage);

        QMetaObject::connectSlotsByName(statsPage);
    } // setupUi

    void retranslateUi(QMainWindow *statsPage)
    {
        statsPage->setWindowTitle(QApplication::translate("statsPage", "Statistiques", nullptr));
        label_12->setText(QApplication::translate("statsPage", "Changer le nom du Zoo :", nullptr));
        label_9->setText(QApplication::translate("statsPage", "Tigre", nullptr));
        label_11->setText(QApplication::translate("statsPage", "Poule", nullptr));
        label_10->setText(QApplication::translate("statsPage", "Aigle", nullptr));
        label_16->setText(QApplication::translate("statsPage", "places tigres", nullptr));
        label_17->setText(QApplication::translate("statsPage", "places poules", nullptr));
        label_18->setText(QApplication::translate("statsPage", "places aigles", nullptr));
        label_3->setText(QApplication::translate("statsPage", "Argent :", nullptr));
        label_5->setText(QApplication::translate("statsPage", "Tigre", nullptr));
        label_7->setText(QApplication::translate("statsPage", "Aigle", nullptr));
        label_6->setText(QApplication::translate("statsPage", "Poule", nullptr));
        label_13->setText(QApplication::translate("statsPage", "Nombre de tigres", nullptr));
        label_14->setText(QApplication::translate("statsPage", "Nombre de poules", nullptr));
        label_15->setText(QApplication::translate("statsPage", "Nombre d'aigles", nullptr));
        label_4->setText(QApplication::translate("statsPage", "50$", nullptr));
        label->setText(QApplication::translate("statsPage", "Statistiques", nullptr));
        label_8->setText(QApplication::translate("statsPage", "Places restantes dans habitats :", nullptr));
        label_2->setText(QApplication::translate("statsPage", "Nombre d'animaux : ", nullptr));
        btn_validateZooName->setText(QApplication::translate("statsPage", "Valider", nullptr));
    } // retranslateUi

};

namespace Ui {
    class statsPage: public Ui_statsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATSPAGE_H
