/********************************************************************************
** Form generated from reading UI file 'ASDF.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASDF_H
#define UI_ASDF_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ASDFClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ASDFClass)
    {
        if (ASDFClass->objectName().isEmpty())
            ASDFClass->setObjectName(QStringLiteral("ASDFClass"));
        ASDFClass->resize(600, 400);
        menuBar = new QMenuBar(ASDFClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        ASDFClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ASDFClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ASDFClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(ASDFClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ASDFClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ASDFClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ASDFClass->setStatusBar(statusBar);

        retranslateUi(ASDFClass);

        QMetaObject::connectSlotsByName(ASDFClass);
    } // setupUi

    void retranslateUi(QMainWindow *ASDFClass)
    {
        ASDFClass->setWindowTitle(QApplication::translate("ASDFClass", "ASDF", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ASDFClass: public Ui_ASDFClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASDF_H
