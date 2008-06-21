/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Sun Jun 22 01:48:36 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGraphicsView>
#include <QtGui/QGridLayout>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGraphicsView *view;
    QPushButton *addItemButton;
    QPushButton *setPathButton;
    QPushButton *startAnimationButton;
    QRadioButton *startAnimation_Radio;
    QProgressBar *animationProgressBar;
    QSpinBox *animationtime;
    QPushButton *setAnimationTimeButton;
    QSlider *animationSlider;
    QPushButton *addEllipseButton;
    QPushButton *addCursorButton;
    QPushButton *deleteItemButton;
    QPushButton *saveItemButton;
    QPushButton *uploadItemButton;
    QPushButton *pushButton;
    QPushButton *configureButton;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
    if (MainWindow->objectName().isEmpty())
        MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
    MainWindow->resize(899, 625);
    MainWindow->setMinimumSize(QSize(100, 100));
    QIcon icon;
    icon.addPixmap(QPixmap(QString::fromUtf8(":/newPrefix/logo.jpg")), QIcon::Normal, QIcon::Off);
    MainWindow->setWindowIcon(icon);
    centralwidget = new QWidget(MainWindow);
    centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
    centralwidget->setGeometry(QRect(0, 33, 899, 573));
    gridLayout = new QGridLayout(centralwidget);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    view = new QGraphicsView(centralwidget);
    view->setObjectName(QString::fromUtf8("view"));
    view->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));

    gridLayout->addWidget(view, 0, 0, 1, 12);

    addItemButton = new QPushButton(centralwidget);
    addItemButton->setObjectName(QString::fromUtf8("addItemButton"));

    gridLayout->addWidget(addItemButton, 1, 0, 1, 1);

    setPathButton = new QPushButton(centralwidget);
    setPathButton->setObjectName(QString::fromUtf8("setPathButton"));

    gridLayout->addWidget(setPathButton, 1, 1, 1, 1);

    startAnimationButton = new QPushButton(centralwidget);
    startAnimationButton->setObjectName(QString::fromUtf8("startAnimationButton"));

    gridLayout->addWidget(startAnimationButton, 1, 2, 1, 1);

    startAnimation_Radio = new QRadioButton(centralwidget);
    startAnimation_Radio->setObjectName(QString::fromUtf8("startAnimation_Radio"));

    gridLayout->addWidget(startAnimation_Radio, 1, 3, 1, 1);

    animationProgressBar = new QProgressBar(centralwidget);
    animationProgressBar->setObjectName(QString::fromUtf8("animationProgressBar"));
    animationProgressBar->setValue(24);

    gridLayout->addWidget(animationProgressBar, 1, 4, 1, 2);

    animationtime = new QSpinBox(centralwidget);
    animationtime->setObjectName(QString::fromUtf8("animationtime"));

    gridLayout->addWidget(animationtime, 1, 6, 1, 2);

    setAnimationTimeButton = new QPushButton(centralwidget);
    setAnimationTimeButton->setObjectName(QString::fromUtf8("setAnimationTimeButton"));

    gridLayout->addWidget(setAnimationTimeButton, 1, 8, 1, 2);

    animationSlider = new QSlider(centralwidget);
    animationSlider->setObjectName(QString::fromUtf8("animationSlider"));
    animationSlider->setCursor(QCursor(Qt::PointingHandCursor));
    animationSlider->setOrientation(Qt::Horizontal);

    gridLayout->addWidget(animationSlider, 1, 10, 1, 2);

    addEllipseButton = new QPushButton(centralwidget);
    addEllipseButton->setObjectName(QString::fromUtf8("addEllipseButton"));

    gridLayout->addWidget(addEllipseButton, 2, 0, 1, 1);

    addCursorButton = new QPushButton(centralwidget);
    addCursorButton->setObjectName(QString::fromUtf8("addCursorButton"));

    gridLayout->addWidget(addCursorButton, 2, 1, 1, 1);

    deleteItemButton = new QPushButton(centralwidget);
    deleteItemButton->setObjectName(QString::fromUtf8("deleteItemButton"));

    gridLayout->addWidget(deleteItemButton, 2, 2, 1, 1);

    saveItemButton = new QPushButton(centralwidget);
    saveItemButton->setObjectName(QString::fromUtf8("saveItemButton"));

    gridLayout->addWidget(saveItemButton, 2, 3, 1, 2);

    uploadItemButton = new QPushButton(centralwidget);
    uploadItemButton->setObjectName(QString::fromUtf8("uploadItemButton"));

    gridLayout->addWidget(uploadItemButton, 2, 5, 1, 2);

    pushButton = new QPushButton(centralwidget);
    pushButton->setObjectName(QString::fromUtf8("pushButton"));

    gridLayout->addWidget(pushButton, 2, 7, 1, 2);

    configureButton = new QPushButton(centralwidget);
    configureButton->setObjectName(QString::fromUtf8("configureButton"));

    gridLayout->addWidget(configureButton, 2, 9, 1, 2);

    horizontalSpacer = new QSpacerItem(240, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(horizontalSpacer, 2, 11, 1, 1);

    MainWindow->setCentralWidget(centralwidget);
    menubar = new QMenuBar(MainWindow);
    menubar->setObjectName(QString::fromUtf8("menubar"));
    menubar->setGeometry(QRect(0, 0, 899, 21));
    MainWindow->setMenuBar(menubar);
    statusbar = new QStatusBar(MainWindow);
    statusbar->setObjectName(QString::fromUtf8("statusbar"));
    statusbar->setGeometry(QRect(0, 606, 899, 19));
    MainWindow->setStatusBar(statusbar);
    toolBar = new QToolBar(MainWindow);
    toolBar->setObjectName(QString::fromUtf8("toolBar"));
    toolBar->setGeometry(QRect(0, 21, 899, 12));
    MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

    retranslateUi(MainWindow);
    QObject::connect(startAnimationButton, SIGNAL(clicked()), startAnimation_Radio, SLOT(toggle()));

    QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
    MainWindow->setWindowTitle(QApplication::translate("MainWindow", "QMTSim", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    view->setToolTip(QString());
#endif // QT_NO_TOOLTIP

    addItemButton->setText(QApplication::translate("MainWindow", "Add Polygon", 0, QApplication::UnicodeUTF8));
    setPathButton->setText(QApplication::translate("MainWindow", "Set Path", 0, QApplication::UnicodeUTF8));
    startAnimationButton->setText(QApplication::translate("MainWindow", "Start Animation", 0, QApplication::UnicodeUTF8));
    startAnimation_Radio->setText(QString());

#ifndef QT_NO_STATUSTIP
    animationtime->setStatusTip(QApplication::translate("MainWindow", "Time in milliseconds", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP

    setAnimationTimeButton->setText(QApplication::translate("MainWindow", "Set Animation Time", 0, QApplication::UnicodeUTF8));
    addEllipseButton->setText(QApplication::translate("MainWindow", "Add Ellipse", 0, QApplication::UnicodeUTF8));
    addCursorButton->setText(QApplication::translate("MainWindow", "Add Cursor", 0, QApplication::UnicodeUTF8));
    deleteItemButton->setText(QApplication::translate("MainWindow", "Delete Item", 0, QApplication::UnicodeUTF8));
    saveItemButton->setText(QApplication::translate("MainWindow", "Save Item", 0, QApplication::UnicodeUTF8));
    uploadItemButton->setText(QApplication::translate("MainWindow", "Upload Item", 0, QApplication::UnicodeUTF8));
    pushButton->setText(QApplication::translate("MainWindow", "Start Transmission", 0, QApplication::UnicodeUTF8));
    configureButton->setText(QApplication::translate("MainWindow", "Configure Transmission", 0, QApplication::UnicodeUTF8));
    toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(MainWindow);
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
