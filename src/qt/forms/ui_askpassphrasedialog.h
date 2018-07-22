/********************************************************************************
** Form generated from reading UI file 'askpassphrasedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASKPASSPHRASEDIALOG_H
#define UI_ASKPASSPHRASEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "qtmaterialflatbutton.h"

QT_BEGIN_NAMESPACE

class Ui_AskPassphraseDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *warningLabel;
    QFormLayout *formLayout;
    QLabel *passLabel1;
    QLineEdit *passEdit1;
    QLabel *passLabel2;
    QLineEdit *passEdit2;
    QLabel *passLabel3;
    QLineEdit *passEdit3;
    QLabel *capsLabel;
    QCheckBox *anonymizationCheckBox;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QtMaterialFlatButton *acceptButton;
    QtMaterialFlatButton *cancelButton;

    void setupUi(QDialog *AskPassphraseDialog)
    {
        if (AskPassphraseDialog->objectName().isEmpty())
            AskPassphraseDialog->setObjectName(QStringLiteral("AskPassphraseDialog"));
        AskPassphraseDialog->resize(638, 164);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AskPassphraseDialog->sizePolicy().hasHeightForWidth());
        AskPassphraseDialog->setSizePolicy(sizePolicy);
        AskPassphraseDialog->setMinimumSize(QSize(550, 0));
        verticalLayout = new QVBoxLayout(AskPassphraseDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        warningLabel = new QLabel(AskPassphraseDialog);
        warningLabel->setObjectName(QStringLiteral("warningLabel"));
        warningLabel->setText(QStringLiteral("Placeholder text"));
        warningLabel->setTextFormat(Qt::RichText);
        warningLabel->setWordWrap(true);

        verticalLayout->addWidget(warningLabel);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetMinimumSize);
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        passLabel1 = new QLabel(AskPassphraseDialog);
        passLabel1->setObjectName(QStringLiteral("passLabel1"));

        formLayout->setWidget(0, QFormLayout::LabelRole, passLabel1);

        passEdit1 = new QLineEdit(AskPassphraseDialog);
        passEdit1->setObjectName(QStringLiteral("passEdit1"));
        passEdit1->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(0, QFormLayout::FieldRole, passEdit1);

        passLabel2 = new QLabel(AskPassphraseDialog);
        passLabel2->setObjectName(QStringLiteral("passLabel2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, passLabel2);

        passEdit2 = new QLineEdit(AskPassphraseDialog);
        passEdit2->setObjectName(QStringLiteral("passEdit2"));
        passEdit2->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, passEdit2);

        passLabel3 = new QLabel(AskPassphraseDialog);
        passLabel3->setObjectName(QStringLiteral("passLabel3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, passLabel3);

        passEdit3 = new QLineEdit(AskPassphraseDialog);
        passEdit3->setObjectName(QStringLiteral("passEdit3"));
        passEdit3->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(2, QFormLayout::FieldRole, passEdit3);

        capsLabel = new QLabel(AskPassphraseDialog);
        capsLabel->setObjectName(QStringLiteral("capsLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        capsLabel->setFont(font);
        capsLabel->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(3, QFormLayout::FieldRole, capsLabel);

        anonymizationCheckBox = new QCheckBox(AskPassphraseDialog);
        anonymizationCheckBox->setObjectName(QStringLiteral("anonymizationCheckBox"));
        anonymizationCheckBox->setEnabled(true);
        anonymizationCheckBox->setVisible(false);

        formLayout->setWidget(4, QFormLayout::LabelRole, anonymizationCheckBox);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        acceptButton = new QtMaterialFlatButton(AskPassphraseDialog);
        acceptButton->setObjectName(QStringLiteral("acceptButton"));
        acceptButton->setProperty("autoDefault", QVariant(true));

        horizontalLayout->addWidget(acceptButton);

        cancelButton = new QtMaterialFlatButton(AskPassphraseDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setProperty("autoDefault", QVariant(false));

        horizontalLayout->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AskPassphraseDialog);

        QMetaObject::connectSlotsByName(AskPassphraseDialog);
    } // setupUi

    void retranslateUi(QDialog *AskPassphraseDialog)
    {
        AskPassphraseDialog->setWindowTitle(QApplication::translate("AskPassphraseDialog", "Passphrase Dialog", Q_NULLPTR));
        passLabel1->setText(QApplication::translate("AskPassphraseDialog", "Enter passphrase", Q_NULLPTR));
        passLabel2->setText(QApplication::translate("AskPassphraseDialog", "New passphrase", Q_NULLPTR));
        passLabel3->setText(QApplication::translate("AskPassphraseDialog", "Repeat new passphrase", Q_NULLPTR));
        capsLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        anonymizationCheckBox->setToolTip(QApplication::translate("AskPassphraseDialog", "Serves to disable the trivial sendmoney when OS account compromised. Provides no real security.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        anonymizationCheckBox->setText(QApplication::translate("AskPassphraseDialog", "For anonymization, multisend and staking only", Q_NULLPTR));
        acceptButton->setProperty("text", QVariant(QApplication::translate("AskPassphraseDialog", "OK", Q_NULLPTR)));
        cancelButton->setProperty("text", QVariant(QApplication::translate("AskPassphraseDialog", "Cancel", Q_NULLPTR)));
    } // retranslateUi

};

namespace Ui {
    class AskPassphraseDialog: public Ui_AskPassphraseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASKPASSPHRASEDIALOG_H
