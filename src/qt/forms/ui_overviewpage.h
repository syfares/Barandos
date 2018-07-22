/********************************************************************************
** Form generated from reading UI file 'overviewpage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWPAGE_H
#define UI_OVERVIEWPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qtmaterialflatbutton.h"

QT_BEGIN_NAMESPACE

class Ui_OverviewPage
{
public:
    QVBoxLayout *topLayout;
    QLabel *labelAlerts;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_Balances;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *BalanceTitle;
    QLabel *labelWalletStatus;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout;
    QLabel *labelSpendable;
    QLabel *labelTotal;
    QLabel *labelBalance;
    QLabel *labelWatchPending;
    QLabel *labelUnconfirmed;
    QLabel *labelWatchonly;
    QLabel *labelWatchImmature;
    QFrame *lineSpendableBalance;
    QLabel *labelWatchTotal;
    QFrame *lineWatchOnlyBalance;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelImmature;
    QLabel *labelWatchAvailable;
    QLabel *labelTotalText;
    QLabel *labelPendingText;
    QLabel *labelBalanceText;
    QLabel *labelImmatureText;
    QSpacerItem *verticalSpacer_2;
    QFrame *frameObfuscation;
    QWidget *formLayoutWidget;
    QFormLayout *obfuscationStatusLayout;
    QLabel *label_6;
    QLabel *obfuscationEnabled;
    QLabel *label_7;
    QProgressBar *obfuscationProgress;
    QLabel *labelAnonymizedText;
    QLabel *labelAnonymized;
    QLabel *label_8;
    QLabel *labelAmountRounds;
    QLabel *label_9;
    QLabel *labelSubmittedDenom;
    QtMaterialFlatButton *runAutoDenom;
    QtMaterialFlatButton *toggleObfuscation;
    QFrame *lineLastMessage;
    QLabel *obfuscationStatus;
    QtMaterialFlatButton *obfuscationAuto;
    QtMaterialFlatButton *obfuscationReset;
    QLabel *ObfuscationStatusTitle;
    QtMaterialFlatButton *toggleStaking;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *ObfuscationTitle;
    QLabel *labelObfuscationSyncStatus;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_RecentTransactions;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *RecentTitle;
    QLabel *labelTransactionsStatus;
    QSpacerItem *horizontalSpacer;
    QListView *listTransactions;

    void setupUi(QWidget *OverviewPage)
    {
        if (OverviewPage->objectName().isEmpty())
            OverviewPage->setObjectName(QStringLiteral("OverviewPage"));
        OverviewPage->resize(960, 720);
        OverviewPage->setMinimumSize(QSize(960, 0));
        topLayout = new QVBoxLayout(OverviewPage);
        topLayout->setObjectName(QStringLiteral("topLayout"));
        labelAlerts = new QLabel(OverviewPage);
        labelAlerts->setObjectName(QStringLiteral("labelAlerts"));
        labelAlerts->setVisible(false);
        labelAlerts->setStyleSheet(QStringLiteral("background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, stop:0 #F0D0A0, stop:1 #F8D488); color:#000000;"));
        labelAlerts->setWordWrap(true);
        labelAlerts->setMargin(3);

        topLayout->addWidget(labelAlerts);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        frame_Balances = new QFrame(OverviewPage);
        frame_Balances->setObjectName(QStringLiteral("frame_Balances"));
        frame_Balances->setFrameShape(QFrame::StyledPanel);
        frame_Balances->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_Balances);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        BalanceTitle = new QLabel(frame_Balances);
        BalanceTitle->setObjectName(QStringLiteral("BalanceTitle"));
        QFont font;
        font.setPointSize(8);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(75);
        font.setStyleStrategy(QFont::PreferDefault);
        BalanceTitle->setFont(font);

        horizontalLayout_4->addWidget(BalanceTitle);

        labelWalletStatus = new QLabel(frame_Balances);
        labelWalletStatus->setObjectName(QStringLiteral("labelWalletStatus"));
        labelWalletStatus->setCursor(QCursor(Qt::WhatsThisCursor));
        labelWalletStatus->setStyleSheet(QStringLiteral("QLabel { color: red; }"));
        labelWalletStatus->setText(QStringLiteral("(out of sync)"));

        horizontalLayout_4->addWidget(labelWalletStatus);

        horizontalSpacer_3 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_4->addLayout(horizontalLayout_4);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(50);
        gridLayout->setVerticalSpacing(15);
        labelSpendable = new QLabel(frame_Balances);
        labelSpendable->setObjectName(QStringLiteral("labelSpendable"));

        gridLayout->addWidget(labelSpendable, 0, 0, 1, 1);

        labelTotal = new QLabel(frame_Balances);
        labelTotal->setObjectName(QStringLiteral("labelTotal"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        labelTotal->setFont(font1);
        labelTotal->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 BTC"));
        labelTotal->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(labelTotal, 10, 0, 1, 1);

        labelBalance = new QLabel(frame_Balances);
        labelBalance->setObjectName(QStringLiteral("labelBalance"));
        labelBalance->setFont(font1);
        labelBalance->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 BTC"));
        labelBalance->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(labelBalance, 2, 0, 1, 1);

        labelWatchPending = new QLabel(frame_Balances);
        labelWatchPending->setObjectName(QStringLiteral("labelWatchPending"));
        labelWatchPending->setEnabled(false);
        QFont font2;
        font2.setBold(false);
        font2.setWeight(50);
        labelWatchPending->setFont(font2);
        labelWatchPending->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 BTC"));
        labelWatchPending->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(labelWatchPending, 4, 1, 1, 1);

        labelUnconfirmed = new QLabel(frame_Balances);
        labelUnconfirmed->setObjectName(QStringLiteral("labelUnconfirmed"));
        QFont font3;
        font3.setPointSize(8);
        font3.setBold(true);
        font3.setWeight(75);
        labelUnconfirmed->setFont(font3);
        labelUnconfirmed->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 BTC"));
        labelUnconfirmed->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(labelUnconfirmed, 4, 0, 1, 1);

        labelWatchonly = new QLabel(frame_Balances);
        labelWatchonly->setObjectName(QStringLiteral("labelWatchonly"));
        labelWatchonly->setEnabled(false);

        gridLayout->addWidget(labelWatchonly, 0, 1, 1, 1);

        labelWatchImmature = new QLabel(frame_Balances);
        labelWatchImmature->setObjectName(QStringLiteral("labelWatchImmature"));
        labelWatchImmature->setEnabled(false);
        labelWatchImmature->setFont(font2);
        labelWatchImmature->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 BTC"));
        labelWatchImmature->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(labelWatchImmature, 6, 1, 1, 1);

        lineSpendableBalance = new QFrame(frame_Balances);
        lineSpendableBalance->setObjectName(QStringLiteral("lineSpendableBalance"));
        lineSpendableBalance->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineSpendableBalance->sizePolicy().hasHeightForWidth());
        lineSpendableBalance->setSizePolicy(sizePolicy);
        lineSpendableBalance->setMaximumSize(QSize(16777215, 1));
        lineSpendableBalance->setFrameShadow(QFrame::Plain);
        lineSpendableBalance->setFrameShape(QFrame::HLine);

        gridLayout->addWidget(lineSpendableBalance, 8, 0, 1, 1);

        labelWatchTotal = new QLabel(frame_Balances);
        labelWatchTotal->setObjectName(QStringLiteral("labelWatchTotal"));
        labelWatchTotal->setEnabled(false);
        labelWatchTotal->setFont(font2);
        labelWatchTotal->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 BTC"));
        labelWatchTotal->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(labelWatchTotal, 10, 1, 1, 1);

        lineWatchOnlyBalance = new QFrame(frame_Balances);
        lineWatchOnlyBalance->setObjectName(QStringLiteral("lineWatchOnlyBalance"));
        lineWatchOnlyBalance->setEnabled(true);
        sizePolicy.setHeightForWidth(lineWatchOnlyBalance->sizePolicy().hasHeightForWidth());
        lineWatchOnlyBalance->setSizePolicy(sizePolicy);
        lineWatchOnlyBalance->setMaximumSize(QSize(16777215, 1));
        lineWatchOnlyBalance->setFrameShadow(QFrame::Plain);
        lineWatchOnlyBalance->setFrameShape(QFrame::HLine);

        gridLayout->addWidget(lineWatchOnlyBalance, 8, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        labelImmature = new QLabel(frame_Balances);
        labelImmature->setObjectName(QStringLiteral("labelImmature"));
        labelImmature->setFont(font1);
        labelImmature->setLayoutDirection(Qt::LeftToRight);
        labelImmature->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 BTC"));
        labelImmature->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(labelImmature, 6, 0, 1, 1);

        labelWatchAvailable = new QLabel(frame_Balances);
        labelWatchAvailable->setObjectName(QStringLiteral("labelWatchAvailable"));
        labelWatchAvailable->setEnabled(false);
        labelWatchAvailable->setFont(font2);
        labelWatchAvailable->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 BTC"));
        labelWatchAvailable->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(labelWatchAvailable, 2, 1, 1, 1);

        labelTotalText = new QLabel(frame_Balances);
        labelTotalText->setObjectName(QStringLiteral("labelTotalText"));
        QFont font4;
        font4.setPointSize(8);
        labelTotalText->setFont(font4);

        gridLayout->addWidget(labelTotalText, 9, 0, 1, 3);

        labelPendingText = new QLabel(frame_Balances);
        labelPendingText->setObjectName(QStringLiteral("labelPendingText"));
        QFont font5;
        font5.setPointSize(8);
        font5.setKerning(true);
        labelPendingText->setFont(font5);

        gridLayout->addWidget(labelPendingText, 3, 0, 1, 3);

        labelBalanceText = new QLabel(frame_Balances);
        labelBalanceText->setObjectName(QStringLiteral("labelBalanceText"));
        QFont font6;
        font6.setPointSize(8);
        font6.setBold(false);
        font6.setWeight(50);
        labelBalanceText->setFont(font6);

        gridLayout->addWidget(labelBalanceText, 1, 0, 1, 3);

        labelImmatureText = new QLabel(frame_Balances);
        labelImmatureText->setObjectName(QStringLiteral("labelImmatureText"));
        labelImmatureText->setFont(font4);

        gridLayout->addWidget(labelImmatureText, 5, 0, 1, 3);


        verticalLayout_4->addLayout(gridLayout);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);


        verticalLayout_2->addWidget(frame_Balances);

        frameObfuscation = new QFrame(OverviewPage);
        frameObfuscation->setObjectName(QStringLiteral("frameObfuscation"));
        frameObfuscation->setMinimumSize(QSize(0, 350));
        frameObfuscation->setLayoutDirection(Qt::LeftToRight);
        frameObfuscation->setFrameShape(QFrame::StyledPanel);
        frameObfuscation->setFrameShadow(QFrame::Raised);
        formLayoutWidget = new QWidget(frameObfuscation);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 30, 441, 135));
        obfuscationStatusLayout = new QFormLayout(formLayoutWidget);
        obfuscationStatusLayout->setObjectName(QStringLiteral("obfuscationStatusLayout"));
        obfuscationStatusLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        obfuscationStatusLayout->setHorizontalSpacing(115);
        obfuscationStatusLayout->setVerticalSpacing(12);
        obfuscationStatusLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font2);

        obfuscationStatusLayout->setWidget(0, QFormLayout::LabelRole, label_6);

        obfuscationEnabled = new QLabel(formLayoutWidget);
        obfuscationEnabled->setObjectName(QStringLiteral("obfuscationEnabled"));
        obfuscationEnabled->setFont(font2);

        obfuscationStatusLayout->setWidget(0, QFormLayout::FieldRole, obfuscationEnabled);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font2);
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        obfuscationStatusLayout->setWidget(1, QFormLayout::LabelRole, label_7);

        obfuscationProgress = new QProgressBar(formLayoutWidget);
        obfuscationProgress->setObjectName(QStringLiteral("obfuscationProgress"));
        obfuscationProgress->setEnabled(true);
        obfuscationProgress->setMinimumSize(QSize(154, 0));
        obfuscationProgress->setMaximumSize(QSize(220, 16777215));
        obfuscationProgress->setFont(font2);
        obfuscationProgress->setValue(0);
        obfuscationProgress->setAlignment(Qt::AlignCenter);
        obfuscationProgress->setInvertedAppearance(false);

        obfuscationStatusLayout->setWidget(1, QFormLayout::FieldRole, obfuscationProgress);

        labelAnonymizedText = new QLabel(formLayoutWidget);
        labelAnonymizedText->setObjectName(QStringLiteral("labelAnonymizedText"));
        labelAnonymizedText->setFont(font2);

        obfuscationStatusLayout->setWidget(2, QFormLayout::LabelRole, labelAnonymizedText);

        labelAnonymized = new QLabel(formLayoutWidget);
        labelAnonymized->setObjectName(QStringLiteral("labelAnonymized"));
        labelAnonymized->setFont(font1);
        labelAnonymized->setText(QStringLiteral("0 BARA"));

        obfuscationStatusLayout->setWidget(2, QFormLayout::FieldRole, labelAnonymized);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font2);

        obfuscationStatusLayout->setWidget(3, QFormLayout::LabelRole, label_8);

        labelAmountRounds = new QLabel(formLayoutWidget);
        labelAmountRounds->setObjectName(QStringLiteral("labelAmountRounds"));
        labelAmountRounds->setFont(font2);

        obfuscationStatusLayout->setWidget(3, QFormLayout::FieldRole, labelAmountRounds);

        label_9 = new QLabel(formLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font2);

        obfuscationStatusLayout->setWidget(4, QFormLayout::LabelRole, label_9);

        labelSubmittedDenom = new QLabel(formLayoutWidget);
        labelSubmittedDenom->setObjectName(QStringLiteral("labelSubmittedDenom"));
        labelSubmittedDenom->setFont(font2);

        obfuscationStatusLayout->setWidget(4, QFormLayout::FieldRole, labelSubmittedDenom);

        runAutoDenom = new QtMaterialFlatButton(frameObfuscation);
        runAutoDenom->setObjectName(QStringLiteral("runAutoDenom"));
        runAutoDenom->setGeometry(QRect(251, 17, 1, 1));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(239, 238, 238, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(247, 246, 246, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(119, 119, 119, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(159, 159, 159, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        runAutoDenom->setPalette(palette);
        runAutoDenom->setFocusPolicy(Qt::NoFocus);
        runAutoDenom->setAutoFillBackground(true);
        runAutoDenom->setProperty("flat", QVariant(true));
        toggleObfuscation = new QtMaterialFlatButton(frameObfuscation);
        toggleObfuscation->setObjectName(QStringLiteral("toggleObfuscation"));
        toggleObfuscation->setGeometry(QRect(10, 270, 215, 35));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(toggleObfuscation->sizePolicy().hasHeightForWidth());
        toggleObfuscation->setSizePolicy(sizePolicy1);
        lineLastMessage = new QFrame(frameObfuscation);
        lineLastMessage->setObjectName(QStringLiteral("lineLastMessage"));
        lineLastMessage->setEnabled(true);
        lineLastMessage->setGeometry(QRect(10, 205, 441, 1));
        lineLastMessage->setFrameShadow(QFrame::Plain);
        lineLastMessage->setFrameShape(QFrame::HLine);
        obfuscationStatus = new QLabel(frameObfuscation);
        obfuscationStatus->setObjectName(QStringLiteral("obfuscationStatus"));
        obfuscationStatus->setGeometry(QRect(10, 220, 441, 43));
        obfuscationStatus->setMinimumSize(QSize(288, 43));
        obfuscationStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        obfuscationStatus->setWordWrap(true);
        obfuscationAuto = new QtMaterialFlatButton(frameObfuscation);
        obfuscationAuto->setObjectName(QStringLiteral("obfuscationAuto"));
        obfuscationAuto->setGeometry(QRect(10, 315, 215, 35));
        sizePolicy1.setHeightForWidth(obfuscationAuto->sizePolicy().hasHeightForWidth());
        obfuscationAuto->setSizePolicy(sizePolicy1);
        obfuscationReset = new QtMaterialFlatButton(frameObfuscation);
        obfuscationReset->setObjectName(QStringLiteral("obfuscationReset"));
        obfuscationReset->setGeometry(QRect(230, 315, 215, 35));
        sizePolicy1.setHeightForWidth(obfuscationReset->sizePolicy().hasHeightForWidth());
        obfuscationReset->setSizePolicy(sizePolicy1);
        obfuscationReset->setAutoFillBackground(false);
        ObfuscationStatusTitle = new QLabel(frameObfuscation);
        ObfuscationStatusTitle->setObjectName(QStringLiteral("ObfuscationStatusTitle"));
        ObfuscationStatusTitle->setGeometry(QRect(10, 180, 441, 16));
        ObfuscationStatusTitle->setFont(font1);
        toggleStaking = new QtMaterialFlatButton(frameObfuscation);
        toggleStaking->setObjectName(QStringLiteral("toggleStaking"));
        toggleStaking->setGeometry(QRect(230, 270, 215, 35));
        sizePolicy1.setHeightForWidth(toggleStaking->sizePolicy().hasHeightForWidth());
        toggleStaking->setSizePolicy(sizePolicy1);
        layoutWidget = new QWidget(frameObfuscation);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 451, 22));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setSpacing(5);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        ObfuscationTitle = new QLabel(layoutWidget);
        ObfuscationTitle->setObjectName(QStringLiteral("ObfuscationTitle"));
        ObfuscationTitle->setFont(font3);

        horizontalLayout_5->addWidget(ObfuscationTitle);

        labelObfuscationSyncStatus = new QLabel(layoutWidget);
        labelObfuscationSyncStatus->setObjectName(QStringLiteral("labelObfuscationSyncStatus"));
        QFont font7;
        font7.setBold(false);
        font7.setUnderline(false);
        font7.setWeight(50);
        font7.setStrikeOut(false);
        labelObfuscationSyncStatus->setFont(font7);
        labelObfuscationSyncStatus->setStyleSheet(QStringLiteral("QLabel { color: red; }"));
        labelObfuscationSyncStatus->setText(QStringLiteral("(out of sync)"));
        labelObfuscationSyncStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(labelObfuscationSyncStatus);

        horizontalSpacer_4 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout_2->addWidget(frameObfuscation);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        frame_RecentTransactions = new QFrame(OverviewPage);
        frame_RecentTransactions->setObjectName(QStringLiteral("frame_RecentTransactions"));
        frame_RecentTransactions->setFrameShape(QFrame::StyledPanel);
        frame_RecentTransactions->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_RecentTransactions);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        RecentTitle = new QLabel(frame_RecentTransactions);
        RecentTitle->setObjectName(QStringLiteral("RecentTitle"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(RecentTitle->sizePolicy().hasHeightForWidth());
        RecentTitle->setSizePolicy(sizePolicy2);
        RecentTitle->setFont(font1);

        horizontalLayout_2->addWidget(RecentTitle);

        labelTransactionsStatus = new QLabel(frame_RecentTransactions);
        labelTransactionsStatus->setObjectName(QStringLiteral("labelTransactionsStatus"));
        sizePolicy2.setHeightForWidth(labelTransactionsStatus->sizePolicy().hasHeightForWidth());
        labelTransactionsStatus->setSizePolicy(sizePolicy2);
        labelTransactionsStatus->setCursor(QCursor(Qt::WhatsThisCursor));
        labelTransactionsStatus->setStyleSheet(QStringLiteral("QLabel { color: red; }"));
        labelTransactionsStatus->setText(QStringLiteral("(out of sync)"));
        labelTransactionsStatus->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(labelTransactionsStatus);

        horizontalSpacer = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        listTransactions = new QListView(frame_RecentTransactions);
        listTransactions->setObjectName(QStringLiteral("listTransactions"));
        listTransactions->setStyleSheet(QStringLiteral("QListView { background: transparent; }"));
        listTransactions->setFrameShape(QFrame::NoFrame);
        listTransactions->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setAlternatingRowColors(false);
        listTransactions->setSelectionMode(QAbstractItemView::NoSelection);

        verticalLayout->addWidget(listTransactions);


        verticalLayout_3->addWidget(frame_RecentTransactions);


        horizontalLayout->addLayout(verticalLayout_3);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);

        topLayout->addLayout(horizontalLayout);


        retranslateUi(OverviewPage);

        QMetaObject::connectSlotsByName(OverviewPage);
    } // setupUi

    void retranslateUi(QWidget *OverviewPage)
    {
        OverviewPage->setWindowTitle(QApplication::translate("OverviewPage", "Form", Q_NULLPTR));
        BalanceTitle->setText(QApplication::translate("OverviewPage", "Balances", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelWalletStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the barandos network after a connection is established, but this process has not completed yet.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelSpendable->setText(QApplication::translate("OverviewPage", "Spendable:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelTotal->setToolTip(QApplication::translate("OverviewPage", "Your current total balance", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelBalance->setToolTip(QApplication::translate("OverviewPage", "Your current spendable balance", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchPending->setToolTip(QApplication::translate("OverviewPage", "Unconfirmed transactions to watch-only addresses", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelUnconfirmed->setToolTip(QApplication::translate("OverviewPage", "Total of transactions that have yet to be confirmed, and do not yet count toward the spendable balance", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelWatchonly->setText(QApplication::translate("OverviewPage", "Watch-only:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelWatchImmature->setToolTip(QApplication::translate("OverviewPage", "Staked or masternode rewards in watch-only addresses that has not yet matured", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchTotal->setToolTip(QApplication::translate("OverviewPage", "Current total balance in watch-only addresses", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelImmature->setToolTip(QApplication::translate("OverviewPage", "Staked or masternode rewards that has not yet matured", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchAvailable->setToolTip(QApplication::translate("OverviewPage", "Your current balance in watch-only addresses", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelTotalText->setText(QApplication::translate("OverviewPage", "Total:", Q_NULLPTR));
        labelPendingText->setText(QApplication::translate("OverviewPage", "Pending:", Q_NULLPTR));
        labelBalanceText->setText(QApplication::translate("OverviewPage", "Available:", Q_NULLPTR));
        labelImmatureText->setText(QApplication::translate("OverviewPage", "Immature:", Q_NULLPTR));
        label_6->setText(QApplication::translate("OverviewPage", "Status:", Q_NULLPTR));
        obfuscationEnabled->setText(QApplication::translate("OverviewPage", "Enabled/Disabled", Q_NULLPTR));
        label_7->setText(QApplication::translate("OverviewPage", "Completion:", Q_NULLPTR));
        labelAnonymizedText->setText(QApplication::translate("OverviewPage", "Obfuscation Balance:", Q_NULLPTR));
        label_8->setText(QApplication::translate("OverviewPage", "Amount and Rounds:", Q_NULLPTR));
        labelAmountRounds->setText(QApplication::translate("OverviewPage", "0 BARA / 0 Rounds", Q_NULLPTR));
        label_9->setText(QApplication::translate("OverviewPage", "Submitted Denom:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelSubmittedDenom->setToolTip(QApplication::translate("OverviewPage", "The denominations you submitted to the Masternode.<br>To mix, other users must submit the exact same denominations.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelSubmittedDenom->setText(QApplication::translate("OverviewPage", "n/a", Q_NULLPTR));
        runAutoDenom->setProperty("text", QVariant(QString()));
        toggleObfuscation->setProperty("text", QVariant(QApplication::translate("OverviewPage", "Start / Stop Obfuscation", Q_NULLPTR)));
        obfuscationStatus->setText(QApplication::translate("OverviewPage", "(Last Message)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        obfuscationAuto->setToolTip(QApplication::translate("OverviewPage", "Try to manually submit a Obfuscation request.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        obfuscationAuto->setProperty("text", QVariant(QApplication::translate("OverviewPage", "Try Mix", Q_NULLPTR)));
#ifndef QT_NO_TOOLTIP
        obfuscationReset->setToolTip(QApplication::translate("OverviewPage", "Reset the current status of Obfuscation (can interrupt Obfuscation if it's in the process of Mixing, which can cost you money!)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        obfuscationReset->setProperty("text", QVariant(QApplication::translate("OverviewPage", "Reset", Q_NULLPTR)));
        ObfuscationStatusTitle->setText(QApplication::translate("OverviewPage", "Status Messages", Q_NULLPTR));
        toggleStaking->setProperty("text", QVariant(QApplication::translate("OverviewPage", "Enable Staking", Q_NULLPTR)));
        ObfuscationTitle->setText(QApplication::translate("OverviewPage", "Obfuscation", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelObfuscationSyncStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the barandos network after a connection is established, but this process has not completed yet.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        RecentTitle->setText(QApplication::translate("OverviewPage", "Recent transactions", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelTransactionsStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the barandos network after a connection is established, but this process has not completed yet.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class OverviewPage: public Ui_OverviewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWPAGE_H
