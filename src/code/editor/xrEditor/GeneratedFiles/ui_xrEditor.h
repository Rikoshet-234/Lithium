/********************************************************************************
** Form generated from reading UI file 'xrEditor.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XREDITOR_H
#define UI_XREDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "qdxwidget.h"

QT_BEGIN_NAMESPACE

class Ui_xrEditorWindow
{
public:
    QAction *actionExit;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter;
    QDXWidget *dxFrame;
    QTabWidget *tabSheet;
    QWidget *tab;
    QWidget *tab_2;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *xrEditorWindow)
    {
        if (xrEditorWindow->objectName().isEmpty())
            xrEditorWindow->setObjectName(QStringLiteral("xrEditorWindow"));
        xrEditorWindow->resize(728, 592);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(xrEditorWindow->sizePolicy().hasHeightForWidth());
        xrEditorWindow->setSizePolicy(sizePolicy);
        actionExit = new QAction(xrEditorWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(xrEditorWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setAutoFillBackground(false);
        splitter->setOrientation(Qt::Horizontal);
        dxFrame = new QDXWidget(splitter);
        dxFrame->setObjectName(QStringLiteral("dxFrame"));
        splitter->addWidget(dxFrame);
        tabSheet = new QTabWidget(splitter);
        tabSheet->setObjectName(QStringLiteral("tabSheet"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabSheet->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabSheet->addTab(tab_2, QString());
        splitter->addWidget(tabSheet);

        horizontalLayout->addWidget(splitter);

        xrEditorWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(xrEditorWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 728, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        xrEditorWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(xrEditorWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        xrEditorWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(xrEditorWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        xrEditorWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuFile->addAction(actionExit);

        retranslateUi(xrEditorWindow);

        QMetaObject::connectSlotsByName(xrEditorWindow);
    } // setupUi

    void retranslateUi(QMainWindow *xrEditorWindow)
    {
        xrEditorWindow->setWindowTitle(QApplication::translate("xrEditorWindow", "Lithium | Editor", Q_NULLPTR));
        actionExit->setText(QApplication::translate("xrEditorWindow", "Exit", Q_NULLPTR));
        tabSheet->setTabText(tabSheet->indexOf(tab), QApplication::translate("xrEditorWindow", "Tab 1", Q_NULLPTR));
        tabSheet->setTabText(tabSheet->indexOf(tab_2), QApplication::translate("xrEditorWindow", "Tab 2", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("xrEditorWindow", "File", Q_NULLPTR));
        menuEdit->setTitle(QApplication::translate("xrEditorWindow", "Edit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class xrEditorWindow: public Ui_xrEditorWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XREDITOR_H
