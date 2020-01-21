/********************************************************************************
** Form generated from reading UI file 'VuePrincipale.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VUEPRINCIPALE_H
#define UI_VUEPRINCIPALE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VuePrincipale
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *meteo;
    QGroupBox *groupBox;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *vVent_4;
    QLabel *temp_2;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *vitesseVent_2;
    QLineEdit *temperature_2;
    QVBoxLayout *verticalLayout_6;
    QLabel *vVent_5;
    QLabel *vVent_6;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *serre;
    QLabel *label;

    void setupUi(QWidget *VuePrincipale)
    {
        if (VuePrincipale->objectName().isEmpty())
            VuePrincipale->setObjectName(QStringLiteral("VuePrincipale"));
        VuePrincipale->resize(946, 392);
        horizontalLayoutWidget = new QWidget(VuePrincipale);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 50, 301, 111));
        meteo = new QHBoxLayout(horizontalLayoutWidget);
        meteo->setObjectName(QStringLiteral("meteo"));
        meteo->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(horizontalLayoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        layoutWidget_2 = new QWidget(groupBox);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 20, 179, 54));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        vVent_4 = new QLabel(layoutWidget_2);
        vVent_4->setObjectName(QStringLiteral("vVent_4"));

        verticalLayout_4->addWidget(vVent_4);

        temp_2 = new QLabel(layoutWidget_2);
        temp_2->setObjectName(QStringLiteral("temp_2"));

        verticalLayout_4->addWidget(temp_2);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        vitesseVent_2 = new QLineEdit(layoutWidget_2);
        vitesseVent_2->setObjectName(QStringLiteral("vitesseVent_2"));
        vitesseVent_2->setReadOnly(true);

        verticalLayout_5->addWidget(vitesseVent_2);

        temperature_2 = new QLineEdit(layoutWidget_2);
        temperature_2->setObjectName(QStringLiteral("temperature_2"));
        temperature_2->setReadOnly(true);
        temperature_2->setClearButtonEnabled(false);

        verticalLayout_5->addWidget(temperature_2);


        horizontalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        vVent_5 = new QLabel(layoutWidget_2);
        vVent_5->setObjectName(QStringLiteral("vVent_5"));

        verticalLayout_6->addWidget(vVent_5);

        vVent_6 = new QLabel(layoutWidget_2);
        vVent_6->setObjectName(QStringLiteral("vVent_6"));

        verticalLayout_6->addWidget(vVent_6);


        horizontalLayout_2->addLayout(verticalLayout_6);


        meteo->addWidget(groupBox);

        horizontalLayoutWidget_2 = new QWidget(VuePrincipale);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 180, 921, 201));
        serre = new QHBoxLayout(horizontalLayoutWidget_2);
        serre->setObjectName(QStringLiteral("serre"));
        serre->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(VuePrincipale);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(400, 20, 135, 15));

        retranslateUi(VuePrincipale);

        QMetaObject::connectSlotsByName(VuePrincipale);
    } // setupUi

    void retranslateUi(QWidget *VuePrincipale)
    {
        VuePrincipale->setWindowTitle(QApplication::translate("VuePrincipale", "VuePrincipale", 0));
        groupBox->setTitle(QApplication::translate("VuePrincipale", "M\303\251t\303\251o", 0));
        vVent_4->setText(QApplication::translate("VuePrincipale", "Vitesse du vent :", 0));
        temp_2->setText(QApplication::translate("VuePrincipale", "Temp\303\251rature :", 0));
        vVent_5->setText(QApplication::translate("VuePrincipale", "km/h", 0));
        vVent_6->setText(QApplication::translate("VuePrincipale", "\302\260C", 0));
        label->setText(QApplication::translate("VuePrincipale", "Surveillance de Serres", 0));
    } // retranslateUi

};

namespace Ui {
    class VuePrincipale: public Ui_VuePrincipale {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VUEPRINCIPALE_H
