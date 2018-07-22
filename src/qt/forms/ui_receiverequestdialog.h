/********************************************************************************
** Form generated from reading UI file 'receiverequestdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEIVEREQUESTDIALOG_H
#define UI_RECEIVEREQUESTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include "qtmaterialflatbutton.h"
#include "receiverequestdialog.h"

QT_BEGIN_NAMESPACE

class Ui_ReceiveRequestDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QRImageWidget *lblQRCode;
    QTextEdit *outUri;
    QHBoxLayout *horizontalLayout;
    QtMaterialFlatButton *btnCopyURI;
    QtMaterialFlatButton *btnCopyAddress;
    QtMaterialFlatButton *btnSaveAs;
    QSpacerItem *horizontalSpacer_2;
    QtMaterialFlatButton *closeButton;

    void setupUi(QDialog *ReceiveRequestDialog)
    {
        if (ReceiveRequestDialog->objectName().isEmpty())
            ReceiveRequestDialog->setObjectName(QStringLiteral("ReceiveRequestDialog"));
        ReceiveRequestDialog->resize(487, 597);
        verticalLayout_3 = new QVBoxLayout(ReceiveRequestDialog);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        lblQRCode = new QRImageWidget(ReceiveRequestDialog);
        lblQRCode->setObjectName(QStringLiteral("lblQRCode"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblQRCode->sizePolicy().hasHeightForWidth());
        lblQRCode->setSizePolicy(sizePolicy);
        lblQRCode->setMinimumSize(QSize(300, 300));
        lblQRCode->setTextFormat(Qt::PlainText);
        lblQRCode->setAlignment(Qt::AlignCenter);
        lblQRCode->setWordWrap(true);

        verticalLayout_3->addWidget(lblQRCode);

        outUri = new QTextEdit(ReceiveRequestDialog);
        outUri->setObjectName(QStringLiteral("outUri"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(outUri->sizePolicy().hasHeightForWidth());
        outUri->setSizePolicy(sizePolicy1);
        outUri->setMinimumSize(QSize(0, 50));
        outUri->setFrameShape(QFrame::NoFrame);
        outUri->setFrameShadow(QFrame::Plain);
        outUri->setTabChangesFocus(true);
        outUri->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_3->addWidget(outUri);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnCopyURI = new QtMaterialFlatButton(ReceiveRequestDialog);
        btnCopyURI->setObjectName(QStringLiteral("btnCopyURI"));
        btnCopyURI->setProperty("autoDefault", QVariant(false));

        horizontalLayout->addWidget(btnCopyURI);

        btnCopyAddress = new QtMaterialFlatButton(ReceiveRequestDialog);
        btnCopyAddress->setObjectName(QStringLiteral("btnCopyAddress"));
        btnCopyAddress->setProperty("autoDefault", QVariant(false));

        horizontalLayout->addWidget(btnCopyAddress);

        btnSaveAs = new QtMaterialFlatButton(ReceiveRequestDialog);
        btnSaveAs->setObjectName(QStringLiteral("btnSaveAs"));
        btnSaveAs->setProperty("autoDefault", QVariant(false));

        horizontalLayout->addWidget(btnSaveAs);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        closeButton = new QtMaterialFlatButton(ReceiveRequestDialog);
        closeButton->setObjectName(QStringLiteral("closeButton"));

        horizontalLayout->addWidget(closeButton);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(ReceiveRequestDialog);

        QMetaObject::connectSlotsByName(ReceiveRequestDialog);
    } // setupUi

    void retranslateUi(QDialog *ReceiveRequestDialog)
    {
#ifndef QT_NO_TOOLTIP
        lblQRCode->setToolTip(QApplication::translate("ReceiveRequestDialog", "QR Code", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnCopyURI->setProperty("text", QVariant(QApplication::translate("ReceiveRequestDialog", "Copy URI", Q_NULLPTR)));
        btnCopyAddress->setProperty("text", QVariant(QApplication::translate("ReceiveRequestDialog", "Copy Address", Q_NULLPTR)));
        btnSaveAs->setProperty("text", QVariant(QApplication::translate("ReceiveRequestDialog", "Save Image...", Q_NULLPTR)));
        closeButton->setProperty("text", QVariant(QApplication::translate("ReceiveRequestDialog", "Close", Q_NULLPTR)));
        Q_UNUSED(ReceiveRequestDialog);
    } // retranslateUi

};

namespace Ui {
    class ReceiveRequestDialog: public Ui_ReceiveRequestDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEIVEREQUESTDIALOG_H
