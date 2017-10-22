/********************************************************************************
** Form generated from reading UI file 'QWERTY.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QWERTY_H
#define UI_QWERTY_H

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

class Ui_QWERTYClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QWERTYClass)
    {
        if (QWERTYClass->objectName().isEmpty())
            QWERTYClass->setObjectName(QStringLiteral("QWERTYClass"));
        QWERTYClass->resize(600, 400);
        menuBar = new QMenuBar(QWERTYClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        QWERTYClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QWERTYClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QWERTYClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(QWERTYClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QWERTYClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QWERTYClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QWERTYClass->setStatusBar(statusBar);

        retranslateUi(QWERTYClass);

        QMetaObject::connectSlotsByName(QWERTYClass);
    } // setupUi

    void retranslateUi(QMainWindow *QWERTYClass)
    {
        QWERTYClass->setWindowTitle(QApplication::translate("QWERTYClass", "QWERTY", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QWERTYClass: public Ui_QWERTYClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWERTY_H
