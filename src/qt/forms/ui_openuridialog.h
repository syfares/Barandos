/********************************************************************************
** Form generated from reading UI file 'openuridialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENURIDIALOG_H
#define UI_OPENURIDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qtmaterialflatbutton.h"
#include "qvalidatedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_OpenURIDialog
{
public:
    QLabel *label_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QValidatedLineEdit *uriEdit;
    QtMaterialFlatButton *selectFileButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QtMaterialFlatButton *acceptButton;
    QtMaterialFlatButton *cancelButton;

    void setupUi(QDialog *OpenURIDialog)
    {
        if (OpenURIDialog->objectName().isEmpty())
            OpenURIDialog->setObjectName(QStringLiteral("OpenURIDialog"));
        OpenURIDialog->resize(481, 153);
        label_2 = new QLabel(OpenURIDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(9, 9, 241, 16));
        layoutWidget = new QWidget(OpenURIDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 40, 461, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label);

        uriEdit = new QValidatedLineEdit(layoutWidget);
        uriEdit->setObjectName(QStringLiteral("uriEdit"));

        horizontalLayout->addWidget(uriEdit);

        selectFileButton = new QtMaterialFlatButton(layoutWidget);
        selectFileButton->setObjectName(QStringLiteral("selectFileButton"));
        sizePolicy.setHeightForWidth(selectFileButton->sizePolicy().hasHeightForWidth());
        selectFileButton->setSizePolicy(sizePolicy);
        selectFileButton->setProperty("text", QVariant(QStringLiteral("...")));
        selectFileButton->setProperty("autoDefault", QVariant(false));

        horizontalLayout->addWidget(selectFileButton);

        horizontalLayoutWidget = new QWidget(OpenURIDialog);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 100, 461, 29));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        acceptButton = new QtMaterialFlatButton(horizontalLayoutWidget);
        acceptButton->setObjectName(QStringLiteral("acceptButton"));
        sizePolicy.setHeightForWidth(acceptButton->sizePolicy().hasHeightForWidth());
        acceptButton->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(acceptButton);

        cancelButton = new QtMaterialFlatButton(horizontalLayoutWidget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        sizePolicy.setHeightForWidth(cancelButton->sizePolicy().hasHeightForWidth());
        cancelButton->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(cancelButton);


        retranslateUi(OpenURIDialog);

        QMetaObject::connectSlotsByName(OpenURIDialog);
    } // setupUi

    void retranslateUi(QDialog *OpenURIDialog)
    {
        OpenURIDialog->setWindowTitle(QApplication::translate("OpenURIDialog", "Open URI", Q_NULLPTR));
        label_2->setText(QApplication::translate("OpenURIDialog", "Open payment request from URI or file", Q_NULLPTR));
        label->setText(QApplication::translate("OpenURIDialog", "URI:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        selectFileButton->setToolTip(QApplication::translate("OpenURIDialog", "Select payment request file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        acceptButton->setToolTip(QApplication::translate("OpenURIDialog", "Try to manually submit a Obfuscation request.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        acceptButton->setProperty("text", QVariant(QApplication::translate("OpenURIDialog", "OK", Q_NULLPTR)));
#ifndef QT_NO_TOOLTIP
        cancelButton->setToolTip(QApplication::translate("OpenURIDialog", "Try to manually submit a Obfuscation request.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cancelButton->setProperty("text", QVariant(QApplication::translate("OpenURIDialog", "Cancel", Q_NULLPTR)));
    } // retranslateUi

};

namespace Ui {
    class OpenURIDialog: public Ui_OpenURIDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENURIDIALOG_H
