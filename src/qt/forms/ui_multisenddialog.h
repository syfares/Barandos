/********************************************************************************
** Form generated from reading UI file 'multisenddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTISENDDIALOG_H
#define UI_MULTISENDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
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

class Ui_MultiSendDialog
{
public:
    QLabel *label;
    QScrollArea *addAddressScrollArea;
    QWidget *addAddressWidget;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *addressList;
    QSpacerItem *verticalSpacer;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QtMaterialFlatButton *activateButton;
    QtMaterialFlatButton *disableButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *multiSend;
    QLabel *multiSendStatusLabel;
    QHBoxLayout *horizontalLayout_7;
    QLabel *addressInfoLabel;
    QtMaterialFlatButton *addressBookButton;
    QSpacerItem *horizontalSpacer;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *MSStakingStatusLabel;
    QCheckBox *multiSendStakeCheckBox;
    QHBoxLayout *horizontalLayout;
    QLabel *MSMasternodeLabel;
    QCheckBox *multiSendMasternodeCheckBox;

    void setupUi(QDialog *MultiSendDialog)
    {
        if (MultiSendDialog->objectName().isEmpty())
            MultiSendDialog->setObjectName(QStringLiteral("MultiSendDialog"));
        MultiSendDialog->resize(777, 538);
        label = new QLabel(MultiSendDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(true);
        label->setGeometry(QRect(10, 10, 521, 61));
        addAddressScrollArea = new QScrollArea(MultiSendDialog);
        addAddressScrollArea->setObjectName(QStringLiteral("addAddressScrollArea"));
        addAddressScrollArea->setGeometry(QRect(10, 90, 759, 261));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addAddressScrollArea->sizePolicy().hasHeightForWidth());
        addAddressScrollArea->setSizePolicy(sizePolicy);
        addAddressScrollArea->setWidgetResizable(true);
        addAddressWidget = new QWidget();
        addAddressWidget->setObjectName(QStringLiteral("addAddressWidget"));
        addAddressWidget->setGeometry(QRect(0, 0, 757, 259));
        verticalLayout_5 = new QVBoxLayout(addAddressWidget);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        addressList = new QVBoxLayout();
        addressList->setObjectName(QStringLiteral("addressList"));

        verticalLayout_5->addLayout(addressList);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        addAddressScrollArea->setWidget(addAddressWidget);
        verticalLayoutWidget_3 = new QWidget(MultiSendDialog);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(630, 360, 141, 80));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        activateButton = new QtMaterialFlatButton(verticalLayoutWidget_3);
        activateButton->setObjectName(QStringLiteral("activateButton"));
        activateButton->setAutoDefault(false);

        verticalLayout_3->addWidget(activateButton);

        disableButton = new QtMaterialFlatButton(verticalLayoutWidget_3);
        disableButton->setObjectName(QStringLiteral("disableButton"));
        disableButton->setAutoDefault(false);

        verticalLayout_3->addWidget(disableButton);

        verticalLayoutWidget = new QWidget(MultiSendDialog);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 360, 431, 91));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(10, 10, 10, 10);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(15);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(10, 5, 10, 5);
        multiSend = new QLabel(verticalLayoutWidget);
        multiSend->setObjectName(QStringLiteral("multiSend"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(multiSend->sizePolicy().hasHeightForWidth());
        multiSend->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(multiSend);

        multiSendStatusLabel = new QLabel(verticalLayoutWidget);
        multiSendStatusLabel->setObjectName(QStringLiteral("multiSendStatusLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(multiSendStatusLabel->sizePolicy().hasHeightForWidth());
        multiSendStatusLabel->setSizePolicy(sizePolicy2);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        multiSendStatusLabel->setFont(font);

        horizontalLayout_2->addWidget(multiSendStatusLabel);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(5);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(10, 5, 10, 5);
        addressInfoLabel = new QLabel(verticalLayoutWidget);
        addressInfoLabel->setObjectName(QStringLiteral("addressInfoLabel"));
        addressInfoLabel->setMinimumSize(QSize(100, 0));

        horizontalLayout_7->addWidget(addressInfoLabel);

        addressBookButton = new QtMaterialFlatButton(verticalLayoutWidget);
        addressBookButton->setObjectName(QStringLiteral("addressBookButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(addressBookButton->sizePolicy().hasHeightForWidth());
        addressBookButton->setSizePolicy(sizePolicy3);
        addressBookButton->setMaximumSize(QSize(16777215, 32));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/address-book"), QSize(), QIcon::Normal, QIcon::Off);
        addressBookButton->setIcon(icon);
        addressBookButton->setAutoDefault(false);

        horizontalLayout_7->addWidget(addressBookButton);

        horizontalSpacer = new QSpacerItem(100, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout_7);

        verticalLayoutWidget_2 = new QWidget(MultiSendDialog);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(460, 360, 151, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        MSStakingStatusLabel = new QLabel(verticalLayoutWidget_2);
        MSStakingStatusLabel->setObjectName(QStringLiteral("MSStakingStatusLabel"));

        horizontalLayout_3->addWidget(MSStakingStatusLabel);

        multiSendStakeCheckBox = new QCheckBox(verticalLayoutWidget_2);
        multiSendStakeCheckBox->setObjectName(QStringLiteral("multiSendStakeCheckBox"));
        sizePolicy3.setHeightForWidth(multiSendStakeCheckBox->sizePolicy().hasHeightForWidth());
        multiSendStakeCheckBox->setSizePolicy(sizePolicy3);

        horizontalLayout_3->addWidget(multiSendStakeCheckBox);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        MSMasternodeLabel = new QLabel(verticalLayoutWidget_2);
        MSMasternodeLabel->setObjectName(QStringLiteral("MSMasternodeLabel"));

        horizontalLayout->addWidget(MSMasternodeLabel);

        multiSendMasternodeCheckBox = new QCheckBox(verticalLayoutWidget_2);
        multiSendMasternodeCheckBox->setObjectName(QStringLiteral("multiSendMasternodeCheckBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(multiSendMasternodeCheckBox->sizePolicy().hasHeightForWidth());
        multiSendMasternodeCheckBox->setSizePolicy(sizePolicy4);

        horizontalLayout->addWidget(multiSendMasternodeCheckBox);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(MultiSendDialog);

        QMetaObject::connectSlotsByName(MultiSendDialog);
    } // setupUi

    void retranslateUi(QDialog *MultiSendDialog)
    {
        MultiSendDialog->setWindowTitle(QApplication::translate("MultiSendDialog", "MultiSend", Q_NULLPTR));
        label->setText(QApplication::translate("MultiSendDialog", "Add a barandos Adresses at the bottom and configure the Multisend settings for each of them", Q_NULLPTR));
        activateButton->setText(QApplication::translate("MultiSendDialog", "Activate", Q_NULLPTR));
        disableButton->setText(QApplication::translate("MultiSendDialog", "Disable", Q_NULLPTR));
        multiSend->setText(QApplication::translate("MultiSendDialog", "MultiSend Status:", Q_NULLPTR));
        multiSendStatusLabel->setText(QApplication::translate("MultiSendDialog", "Disabled", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        addressInfoLabel->setToolTip(QApplication::translate("MultiSendDialog", "Address to send portion of stake to", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        addressInfoLabel->setText(QApplication::translate("MultiSendDialog", "Click to add an address for MultiSend", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        addressBookButton->setToolTip(QApplication::translate("MultiSendDialog", "Choose an address from the address book", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        addressBookButton->setText(QString());
        MSStakingStatusLabel->setText(QApplication::translate("MultiSendDialog", "Send For Staking", Q_NULLPTR));
        multiSendStakeCheckBox->setText(QString());
        MSMasternodeLabel->setText(QApplication::translate("MultiSendDialog", "Send for Masternodes", Q_NULLPTR));
        multiSendMasternodeCheckBox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MultiSendDialog: public Ui_MultiSendDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTISENDDIALOG_H
