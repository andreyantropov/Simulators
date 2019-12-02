/********************************************************************************
** Form generated from reading UI file 'sutvr.ui'
**
** Created: Wed 6. Feb 14:21:58 2019
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUTVR_H
#define UI_SUTVR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SUTVR
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *status;
    QSpacerItem *horizontalSpacer_2;
    QTreeWidget *treeWidget;
    QCheckBox *firstPort;
    QCheckBox *secondPort;
    QCheckBox *console;

    void setupUi(QMainWindow *SUTVR)
    {
        if (SUTVR->objectName().isEmpty())
            SUTVR->setObjectName(QString::fromUtf8("SUTVR"));
        SUTVR->resize(600, 600);
        QFont font;
        font.setPointSize(12);
        SUTVR->setFont(font);
        centralWidget = new QWidget(SUTVR);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setFont(font);
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(188, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 2);

        status = new QLabel(centralWidget);
        status->setObjectName(QString::fromUtf8("status"));

        gridLayout->addWidget(status, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(231, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        treeWidget = new QTreeWidget(centralWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem->setCheckState(0, Qt::Checked);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem1->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem2->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem3->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem4->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem5 = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem5->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem6 = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem6->setCheckState(0, Qt::Unchecked);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        QFont font1;
        font1.setPointSize(13);
        treeWidget->setFont(font1);

        gridLayout->addWidget(treeWidget, 1, 0, 1, 4);

        firstPort = new QCheckBox(centralWidget);
        firstPort->setObjectName(QString::fromUtf8("firstPort"));
        firstPort->setChecked(true);

        gridLayout->addWidget(firstPort, 2, 0, 1, 1);

        secondPort = new QCheckBox(centralWidget);
        secondPort->setObjectName(QString::fromUtf8("secondPort"));
        secondPort->setChecked(true);

        gridLayout->addWidget(secondPort, 2, 1, 1, 2);

        console = new QCheckBox(centralWidget);
        console->setObjectName(QString::fromUtf8("console"));
        console->setChecked(true);

        gridLayout->addWidget(console, 2, 3, 1, 1);

        SUTVR->setCentralWidget(centralWidget);

        retranslateUi(SUTVR);

        QMetaObject::connectSlotsByName(SUTVR);
    } // setupUi

    void retranslateUi(QMainWindow *SUTVR)
    {
        SUTVR->setWindowTitle(QApplication::translate("SUTVR", "SUTVR", 0, QApplication::UnicodeUTF8));
        status->setText(QApplication::translate("SUTVR", "\320\236\320\266\320\270\320\264\320\260\320\275\320\270\320\265 \320\272\320\276\320\274\320\260\320\275\320\264\321\213", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("SUTVR", "\320\241\320\276\320\264\320\265\321\200\320\266\320\260\320\275\320\270\320\265 \320\275\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\320\276\321\201\321\202\320\270", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("SUTVR", "\320\227\320\260\320\264\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(1, QApplication::translate("SUTVR", "\320\235\320\276\321\200\320\274\320\260 \320\270\320\267\320\264\320\265\320\273\320\270\321\217 15\320\25172/\320\235\320\265\320\263\320\276\321\202\320\276\320\262\320\275\320\276\321\201\321\202\321\214 \320\270\320\267\320\264\320\265\320\273\320\270\321\217 15\320\25172", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(1, QApplication::translate("SUTVR", "\320\235\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\320\276\321\201\321\202\321\214 \320\262\320\265\320\275\321\202\320\270\320\273\321\217\321\206\320\270\320\276\320\275\320\275\320\276\320\271 \321\201\320\270\321\201\321\202\320\265\320\274\321\213 1", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem3->setText(1, QApplication::translate("SUTVR", "\320\235\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\320\276\321\201\321\202\321\214 \320\262\320\265\320\275\321\202\320\270\320\273\321\217\321\206\320\270\320\276\320\275\320\275\320\276\320\271 \321\201\320\270\321\201\321\202\320\265\320\274\321\213 2", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem4 = treeWidget->topLevelItem(3);
        ___qtreewidgetitem4->setText(1, QApplication::translate("SUTVR", "\320\242\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260 \320\262\320\275\320\265 \320\264\320\270\320\260\320\277\320\260\320\267\320\276\320\275\320\260 \320\264\320\276\320\277\321\203\321\201\321\202\320\270\320\274\321\213\321\205 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\271", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem5 = treeWidget->topLevelItem(4);
        ___qtreewidgetitem5->setText(1, QApplication::translate("SUTVR", "\320\222\320\273\320\260\320\266\320\275\320\276\321\201\321\202\321\214 \320\262\320\275\320\265 \320\264\320\270\320\260\320\277\320\260\320\267\320\276\320\275\320\260 \320\264\320\276\320\277\321\203\321\201\321\202\320\270\320\274\321\213\321\205 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\271", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem6 = treeWidget->topLevelItem(5);
        ___qtreewidgetitem6->setText(1, QApplication::translate("SUTVR", "\320\242\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260 \320\262\321\213\321\210\320\265 \320\275\320\276\321\200\320\274\321\213", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem7 = treeWidget->topLevelItem(6);
        ___qtreewidgetitem7->setText(1, QApplication::translate("SUTVR", "\320\222\320\273\320\260\320\266\320\275\320\276\321\201\321\202\321\214 \320\262\321\213\321\210\320\265 \320\275\320\276\321\200\320\274\321\213", 0, QApplication::UnicodeUTF8));
        treeWidget->setSortingEnabled(__sortingEnabled);

        firstPort->setText(QApplication::translate("SUTVR", "\320\237\320\265\321\200\320\262\321\213\320\271 \320\260\320\264\321\200\320\265\321\201", 0, QApplication::UnicodeUTF8));
        secondPort->setText(QApplication::translate("SUTVR", "\320\222\321\202\320\276\321\200\320\276\320\271 \320\260\320\264\321\200\320\265\321\201", 0, QApplication::UnicodeUTF8));
        console->setText(QApplication::translate("SUTVR", "\320\222\321\213\320\262\320\265\321\201\321\202\320\270 \320\262 \320\272\320\276\320\275\321\201\320\276\320\273\321\214", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SUTVR: public Ui_SUTVR {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUTVR_H
