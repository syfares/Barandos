/********************************************************************************
** Form generated from reading UI file 'multisendconfigdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTISENDCONFIGDIALOG_H
#define UI_MULTISENDCONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qtmaterialflatbutton.h>

QT_BEGIN_NAMESPACE

class Ui_MultiSendConfigDialog
{
public:
    QScrollArea *addAddressScrollArea;
    QWidget *addAddressWidget;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *addressList;
    QSpacerItem *verticalSpacer;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout_3;
    QtMaterialFlatButton *activateButton;
    QtMaterialFlatButton *disableButton;
    QVBoxLayout *verticalLayout;
    QtMaterialFlatButton *addEntryButton;
    QtMaterialFlatButton *saveButton;

    void setupUi(QDialog *MultiSendConfigDialog)
    {
        if (MultiSendConfigDialog->objectName().isEmpty())
            MultiSendConfigDialog->setObjectName(QStringLiteral("MultiSendConfigDialog"));
        MultiSendConfigDialog->resize(751, 386);
        addAddressScrollArea = new QScrollArea(MultiSendConfigDialog);
        addAddressScrollArea->setObjectName(QStringLiteral("addAddressScrollArea"));
        addAddressScrollArea->setGeometry(QRect(10, 110, 731, 261));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addAddressScrollArea->sizePolicy().hasHeightForWidth());
        addAddressScrollArea->setSizePolicy(sizePolicy);
        addAddressScrollArea->setWidgetResizable(true);
        addAddressWidget = new QWidget();
        addAddressWidget->setObjectName(QStringLiteral("addAddressWidget"));
        addAddressWidget->setGeometry(QRect(0, 0, 729, 259));
        verticalLayout_5 = new QVBoxLayout(addAddressWidget);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        addressList = new QVBoxLayout();
        addressList->setObjectName(QStringLiteral("addressList"));

        verticalLayout_5->addLayout(addressList);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        addAddressScrollArea->setWidget(addAddressWidget);
        horizontalLayoutWidget = new QWidget(MultiSendConfigDialog);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 731, 91));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(10, 0, 10, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(true);

        horizontalLayout->addWidget(label);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        activateButton = new QtMaterialFlatButton(horizontalLayoutWidget);
        activateButton->setObjectName(QStringLiteral("activateButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(activateButton->sizePolicy().hasHeightForWidth());
        activateButton->setSizePolicy(sizePolicy1);
        activateButton->setAutoDefault(false);

        verticalLayout_3->addWidget(activateButton);

        disableButton = new QtMaterialFlatButton(horizontalLayoutWidget);
        disableButton->setObjectName(QStringLiteral("disableButton"));
        sizePolicy1.setHeightForWidth(disableButton->sizePolicy().hasHeightForWidth());
        disableButton->setSizePolicy(sizePolicy1);
        disableButton->setAutoDefault(false);

        verticalLayout_3->addWidget(disableButton);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        addEntryButton = new QtMaterialFlatButton(horizontalLayoutWidget);
        addEntryButton->setObjectName(QStringLiteral("addEntryButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(addEntryButton->sizePolicy().hasHeightForWidth());
        addEntryButton->setSizePolicy(sizePolicy2);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/add"), QSize(), QIcon::Normal, QIcon::Off);
        addEntryButton->setIcon(icon);

        verticalLayout->addWidget(addEntryButton);

        saveButton = new QtMaterialFlatButton(horizontalLayoutWidget);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/filesave"), QSize(), QIcon::Normal, QIcon::Off);
        saveButton->setIcon(icon1);

        verticalLayout->addWidget(saveButton);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(MultiSendConfigDialog);

        QMetaObject::connectSlotsByName(MultiSendConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *MultiSendConfigDialog)
    {
        MultiSendConfigDialog->setWindowTitle(QApplication::translate("MultiSendConfigDialog", "MultiSend", Q_NULLPTR));
        label->setText(QApplication::translate("MultiSendConfigDialog", "Add an address to send a portion of your Staking and Masternode Rewards.\n"
"Set the percentage of your rewards you want to send for each individual address.\n"
"Your settings wont be saved unless your hit save.", Q_NULLPTR));
        activateButton->setText(QApplication::translate("MultiSendConfigDialog", "Activate", Q_NULLPTR));
        disableButton->setText(QApplication::translate("MultiSendConfigDialog", "Disable", Q_NULLPTR));
        addEntryButton->setText(QString());
        saveButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MultiSendConfigDialog: public Ui_MultiSendConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTISENDCONFIGDIALOG_H
