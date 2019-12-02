/********************************************************************************
** Form generated from reading UI file 'saepc.ui'
**
** Created: Wed 6. Feb 14:41:03 2019
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAEPC_H
#define UI_SAEPC_H

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

class Ui_SAEPC
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *status;
    QSpacerItem *horizontalSpacer_2;
    QTreeWidget *treeWidget;
    QCheckBox *firstPort;
    QCheckBox *secondPort;
    QSpacerItem *horizontalSpacer;
    QCheckBox *console;

    void setupUi(QMainWindow *SAEPC)
    {
        if (SAEPC->objectName().isEmpty())
            SAEPC->setObjectName(QString::fromUtf8("SAEPC"));
        SAEPC->resize(600, 600);
        QFont font;
        font.setPointSize(12);
        SAEPC->setFont(font);
        centralWidget = new QWidget(SAEPC);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 0, 1, 2);

        status = new QLabel(centralWidget);
        status->setObjectName(QString::fromUtf8("status"));

        gridLayout->addWidget(status, 0, 2, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 4, 1, 2);

        treeWidget = new QTreeWidget(centralWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(__qtreewidgetitem);
        __qtreewidgetitem1->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(__qtreewidgetitem);
        __qtreewidgetitem2->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(__qtreewidgetitem);
        __qtreewidgetitem3->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(__qtreewidgetitem);
        __qtreewidgetitem4->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem5 = new QTreeWidgetItem(__qtreewidgetitem);
        __qtreewidgetitem5->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem6 = new QTreeWidgetItem(__qtreewidgetitem);
        __qtreewidgetitem6->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem7 = new QTreeWidgetItem(__qtreewidgetitem);
        __qtreewidgetitem7->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem8 = new QTreeWidgetItem(treeWidget);
        QTreeWidgetItem *__qtreewidgetitem9 = new QTreeWidgetItem(__qtreewidgetitem8);
        __qtreewidgetitem9->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem10 = new QTreeWidgetItem(__qtreewidgetitem8);
        __qtreewidgetitem10->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem11 = new QTreeWidgetItem(__qtreewidgetitem8);
        __qtreewidgetitem11->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem12 = new QTreeWidgetItem(__qtreewidgetitem8);
        __qtreewidgetitem12->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem13 = new QTreeWidgetItem(__qtreewidgetitem8);
        __qtreewidgetitem13->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem14 = new QTreeWidgetItem(__qtreewidgetitem8);
        __qtreewidgetitem14->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem15 = new QTreeWidgetItem(__qtreewidgetitem8);
        __qtreewidgetitem15->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem16 = new QTreeWidgetItem(__qtreewidgetitem8);
        __qtreewidgetitem16->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem17 = new QTreeWidgetItem(__qtreewidgetitem8);
        __qtreewidgetitem17->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem18 = new QTreeWidgetItem(__qtreewidgetitem8);
        __qtreewidgetitem18->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem19 = new QTreeWidgetItem(treeWidget);
        QTreeWidgetItem *__qtreewidgetitem20 = new QTreeWidgetItem(__qtreewidgetitem19);
        __qtreewidgetitem20->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem21 = new QTreeWidgetItem(__qtreewidgetitem19);
        __qtreewidgetitem21->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem22 = new QTreeWidgetItem(__qtreewidgetitem19);
        __qtreewidgetitem22->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem23 = new QTreeWidgetItem(__qtreewidgetitem19);
        __qtreewidgetitem23->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem24 = new QTreeWidgetItem(treeWidget);
        QTreeWidgetItem *__qtreewidgetitem25 = new QTreeWidgetItem(__qtreewidgetitem24);
        __qtreewidgetitem25->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem26 = new QTreeWidgetItem(__qtreewidgetitem24);
        __qtreewidgetitem26->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem27 = new QTreeWidgetItem(__qtreewidgetitem24);
        __qtreewidgetitem27->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem28 = new QTreeWidgetItem(__qtreewidgetitem24);
        __qtreewidgetitem28->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem29 = new QTreeWidgetItem(__qtreewidgetitem24);
        __qtreewidgetitem29->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem30 = new QTreeWidgetItem(__qtreewidgetitem24);
        __qtreewidgetitem30->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem31 = new QTreeWidgetItem(__qtreewidgetitem24);
        __qtreewidgetitem31->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem32 = new QTreeWidgetItem(__qtreewidgetitem24);
        __qtreewidgetitem32->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem33 = new QTreeWidgetItem(__qtreewidgetitem24);
        __qtreewidgetitem33->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem34 = new QTreeWidgetItem(treeWidget);
        QTreeWidgetItem *__qtreewidgetitem35 = new QTreeWidgetItem(__qtreewidgetitem34);
        __qtreewidgetitem35->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem36 = new QTreeWidgetItem(__qtreewidgetitem34);
        __qtreewidgetitem36->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem37 = new QTreeWidgetItem(__qtreewidgetitem34);
        __qtreewidgetitem37->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem38 = new QTreeWidgetItem(__qtreewidgetitem34);
        __qtreewidgetitem38->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem39 = new QTreeWidgetItem(__qtreewidgetitem34);
        __qtreewidgetitem39->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem40 = new QTreeWidgetItem(__qtreewidgetitem34);
        __qtreewidgetitem40->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem41 = new QTreeWidgetItem(treeWidget);
        QTreeWidgetItem *__qtreewidgetitem42 = new QTreeWidgetItem(__qtreewidgetitem41);
        __qtreewidgetitem42->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem43 = new QTreeWidgetItem(__qtreewidgetitem41);
        __qtreewidgetitem43->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem44 = new QTreeWidgetItem(__qtreewidgetitem41);
        __qtreewidgetitem44->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem45 = new QTreeWidgetItem(__qtreewidgetitem41);
        __qtreewidgetitem45->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem46 = new QTreeWidgetItem(__qtreewidgetitem41);
        __qtreewidgetitem46->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem47 = new QTreeWidgetItem(__qtreewidgetitem41);
        __qtreewidgetitem47->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem48 = new QTreeWidgetItem(__qtreewidgetitem41);
        __qtreewidgetitem48->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem49 = new QTreeWidgetItem(__qtreewidgetitem41);
        __qtreewidgetitem49->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem50 = new QTreeWidgetItem(treeWidget);
        QTreeWidgetItem *__qtreewidgetitem51 = new QTreeWidgetItem(__qtreewidgetitem50);
        __qtreewidgetitem51->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem52 = new QTreeWidgetItem(__qtreewidgetitem50);
        __qtreewidgetitem52->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem53 = new QTreeWidgetItem(__qtreewidgetitem50);
        __qtreewidgetitem53->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem54 = new QTreeWidgetItem(__qtreewidgetitem50);
        __qtreewidgetitem54->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem55 = new QTreeWidgetItem(treeWidget);
        QTreeWidgetItem *__qtreewidgetitem56 = new QTreeWidgetItem(__qtreewidgetitem55);
        __qtreewidgetitem56->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem57 = new QTreeWidgetItem(__qtreewidgetitem55);
        __qtreewidgetitem57->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem58 = new QTreeWidgetItem(__qtreewidgetitem55);
        __qtreewidgetitem58->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem59 = new QTreeWidgetItem(__qtreewidgetitem55);
        __qtreewidgetitem59->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem60 = new QTreeWidgetItem(__qtreewidgetitem55);
        __qtreewidgetitem60->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem61 = new QTreeWidgetItem(__qtreewidgetitem55);
        __qtreewidgetitem61->setCheckState(0, Qt::Unchecked);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        QFont font1;
        font1.setPointSize(13);
        treeWidget->setFont(font1);

        gridLayout->addWidget(treeWidget, 1, 0, 1, 6);

        firstPort = new QCheckBox(centralWidget);
        firstPort->setObjectName(QString::fromUtf8("firstPort"));
        firstPort->setChecked(true);

        gridLayout->addWidget(firstPort, 2, 0, 1, 1);

        secondPort = new QCheckBox(centralWidget);
        secondPort->setObjectName(QString::fromUtf8("secondPort"));
        secondPort->setChecked(true);

        gridLayout->addWidget(secondPort, 2, 1, 1, 2);

        horizontalSpacer = new QSpacerItem(134, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 3, 1, 2);

        console = new QCheckBox(centralWidget);
        console->setObjectName(QString::fromUtf8("console"));
        console->setChecked(true);

        gridLayout->addWidget(console, 2, 5, 1, 1);

        SAEPC->setCentralWidget(centralWidget);

        retranslateUi(SAEPC);

        QMetaObject::connectSlotsByName(SAEPC);
    } // setupUi

    void retranslateUi(QMainWindow *SAEPC)
    {
        SAEPC->setWindowTitle(QApplication::translate("SAEPC", "SAEPC", 0, QApplication::UnicodeUTF8));
        status->setText(QApplication::translate("SAEPC", "\320\236\320\266\320\270\320\264\320\260\320\275\320\270\320\265 \320\272\320\276\320\274\320\260\320\275\320\264\321\213", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("SAEPC", "\320\241\320\276\320\264\320\265\321\200\320\266\320\260\320\275\320\270\320\265 \320\275\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\320\276\321\201\321\202\320\270", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("SAEPC", "\320\227\320\260\320\264\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(1, QApplication::translate("SAEPC", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \320\263\320\276\321\202\320\276\320\262\320\275\320\276\321\201\321\202\320\270", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(1, QApplication::translate("SAEPC", "\320\235\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\320\276\321\201\321\202\321\214 \320\270\320\267\320\264\320\265\320\273\320\270\321\217 15\320\240334. \320\237\321\200\320\276\320\262\320\265\321\201\321\202\320\270 \321\200\320\265\320\266\320\270\320\274 \320\224\320\237\320\237 15\320\240334", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem1->child(1);
        ___qtreewidgetitem3->setText(1, QApplication::translate("SAEPC", "\320\221\320\260\321\202\320\260\321\200\320\265\320\270 \320\272\320\276\320\274\320\277\320\273\320\265\320\272\321\202\320\260 15\320\240281 \320\245\320\230\320\242-\320\220 \321\200\320\260\320\267\321\200\321\217\320\266\320\265\320\275\321\213. \320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214 \320\272\320\276\320\274\320\277\320\273\320\265\320\272\321\202 15\320\240281", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem1->child(2);
        ___qtreewidgetitem4->setText(1, QApplication::translate("SAEPC", "\320\237\320\270\321\202\320\260\320\275\320\270\320\265 \320\270\320\267\320\264\320\265\320\273\320\270\321\217 15\320\240334 \320\276\321\201\321\203\321\211\320\265\321\201\321\202\320\262\320\273\321\217\320\265\321\202\321\201\321\217 \320\220\320\230\320\237", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem1->child(3);
        ___qtreewidgetitem5->setText(1, QApplication::translate("SAEPC", "\320\236\321\202\321\201\321\203\321\202\321\201\321\202\320\262\321\203\320\265\321\202 \320\275\320\260\320\277\321\200\321\217\320\266\320\265\320\275\320\270\320\265 \320\277\320\270\321\202\320\260\321\216\321\211\320\265\320\271 \321\201\320\265\321\202\320\270 \320\275\320\260 \320\264\320\262\321\203\321\205 \320\262\320\262\320\276\320\264\320\260\321\205", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem1->child(4);
        ___qtreewidgetitem6->setText(1, QApplication::translate("SAEPC", "\320\222\321\213\320\267\320\276\320\262 \320\235\320\232\320\237", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem7 = ___qtreewidgetitem1->child(5);
        ___qtreewidgetitem7->setText(1, QApplication::translate("SAEPC", "\320\230\320\267\320\264\320\265\320\273\320\270\320\265 15\320\246151 \320\276\321\202\320\272\320\273\321\216\321\207\320\265\320\275\320\276", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem8 = ___qtreewidgetitem1->child(6);
        ___qtreewidgetitem8->setText(1, QApplication::translate("SAEPC", "\320\230\320\267\320\264\320\265\320\273\320\270\320\265 15\320\25172 \320\276\321\202\320\272\320\273\321\216\321\207\320\265\320\275\320\276", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem9 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem9->setText(1, QApplication::translate("SAEPC", "\320\235\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\320\276\321\201\321\202\321\214 \320\237\320\237\320\241", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem10 = ___qtreewidgetitem9->child(0);
        ___qtreewidgetitem10->setText(1, QApplication::translate("SAEPC", "\320\235\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\320\276\321\201\321\202\321\214 \320\270\320\267\320\264\320\265\320\273\320\270\321\217 15\320\240334. \320\235\320\265 \320\275\320\276\321\200\320\274\320\260 U \320\262\321\213\321\205. \320\237\320\237\320\2411. \320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214 \320\237\320\237\320\2411", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem11 = ___qtreewidgetitem9->child(1);
        ___qtreewidgetitem11->setText(1, QApplication::translate("SAEPC", "\320\235\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\320\276\321\201\321\202\321\214 \320\270\320\267\320\264\320\265\320\273\320\270\321\217 15\320\240334. \320\235\320\265 \320\275\320\276\321\200\320\274\320\260 U \320\262\321\213\321\205. \320\237\320\237\320\2412. \320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214 \320\237\320\237\320\2412", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem12 = ___qtreewidgetitem9->child(2);
        ___qtreewidgetitem12->setText(1, QApplication::translate("SAEPC", "\320\235\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\320\276\321\201\321\202\321\214 \320\270\320\267\320\264\320\265\320\273\320\270\321\217 15\320\240334. \320\235\320\265 \320\275\320\276\321\200\320\274\320\260 U \320\262\321\213\321\205. \320\237\320\237\320\2413. \320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214 \320\237\320\237\320\2413", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem13 = ___qtreewidgetitem9->child(3);
        ___qtreewidgetitem13->setText(1, QApplication::translate("SAEPC", "\320\235\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\320\276\321\201\321\202\321\214 \320\270\320\267\320\264\320\265\320\273\320\270\321\217 15\320\240334. \320\235\320\265 \320\275\320\276\321\200\320\274\320\260 U \320\262\321\213\321\205. \320\237\320\237\320\2414. \320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214 \320\237\320\237\320\2414", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem14 = ___qtreewidgetitem9->child(4);
        ___qtreewidgetitem14->setText(1, QApplication::translate("SAEPC", "\320\235\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\320\276\321\201\321\202\321\214 \320\270\320\267\320\264\320\265\320\273\320\270\321\217 15\320\240334. \320\235\320\265 \320\275\320\276\321\200\320\274\320\260 U \320\262\321\213\321\205. \320\237\320\237\320\2415. \320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214 \320\237\320\237\320\2415", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem15 = ___qtreewidgetitem9->child(5);
        ___qtreewidgetitem15->setText(1, QApplication::translate("SAEPC", "\320\235\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\320\276\321\201\321\202\321\214 \320\270\320\267\320\264\320\265\320\273\320\270\321\217 15\320\240334. \320\235\320\265 \320\275\320\276\321\200\320\274\320\260 U \320\262\321\213\321\205. \320\237\320\237\320\2416. \320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214 \320\237\320\237\320\2416", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem16 = ___qtreewidgetitem9->child(6);
        ___qtreewidgetitem16->setText(1, QApplication::translate("SAEPC", "\320\235\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\320\276\321\201\321\202\321\214 \320\270\320\267\320\264\320\265\320\273\320\270\321\217 15\320\240334. \320\235\320\265 \320\275\320\276\321\200\320\274\320\260 U \320\262\321\213\321\205. \320\237\320\237\320\2417. \320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214 \320\237\320\237\320\2417", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem17 = ___qtreewidgetitem9->child(7);
        ___qtreewidgetitem17->setText(1, QApplication::translate("SAEPC", "\320\235\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\320\276\321\201\321\202\321\214 \320\270\320\267\320\264\320\265\320\273\320\270\321\217 15\320\240334. \320\235\320\265 \320\275\320\276\321\200\320\274\320\260 U \320\262\321\213\321\205. \320\237\320\237\320\2418. \320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214 \320\237\320\237\320\2418", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem18 = ___qtreewidgetitem9->child(8);
        ___qtreewidgetitem18->setText(1, QApplication::translate("SAEPC", "\320\235\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\320\276\321\201\321\202\321\214 \320\270\320\267\320\264\320\265\320\273\320\270\321\217 15\320\240334. \320\235\320\265 \320\275\320\276\321\200\320\274\320\260 U \320\262\321\213\321\205. \320\237\320\237\320\2419. \320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214 \320\237\320\237\320\2419", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem19 = ___qtreewidgetitem9->child(9);
        ___qtreewidgetitem19->setText(1, QApplication::translate("SAEPC", "\320\235\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\320\276\321\201\321\202\321\214 \320\270\320\267\320\264\320\265\320\273\320\270\321\217 15\320\240334. \320\235\320\265 \320\275\320\276\321\200\320\274\320\260 U \320\262\321\213\321\205. \320\237\320\237\320\24110. \320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214 \320\237\320\237\320\24110", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem20 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem20->setText(1, QApplication::translate("SAEPC", "\320\235\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\320\276\321\201\321\202\321\214 \320\237\320\241", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem21 = ___qtreewidgetitem20->child(0);
        ___qtreewidgetitem21->setText(1, QApplication::translate("SAEPC", "\320\235\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\320\276\321\201\321\202\321\214 \320\270\320\267\320\264\320\265\320\273\320\270\321\217 15\320\240334. \320\235\320\265 \320\275\320\276\321\200\320\274\320\260 U \320\262\321\213\321\205. \320\237\320\2411. \320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214 \320\237\320\2411", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem22 = ___qtreewidgetitem20->child(1);
        ___qtreewidgetitem22->setText(1, QApplication::translate("SAEPC", "\320\235\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\320\276\321\201\321\202\321\214 \320\270\320\267\320\264\320\265\320\273\320\270\321\217 15\320\240334. \320\235\320\265 \320\275\320\276\321\200\320\274\320\260 U \320\262\321\213\321\205. \320\237\320\2412. \320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214 \320\237\320\2412", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem23 = ___qtreewidgetitem20->child(2);
        ___qtreewidgetitem23->setText(1, QApplication::translate("SAEPC", "\320\235\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\320\276\321\201\321\202\321\214 \320\270\320\267\320\264\320\265\320\273\320\270\321\217 15\320\240334. \320\235\320\265 \320\275\320\276\321\200\320\274\320\260 U \320\262\321\213\321\205. \320\237\320\2413. \320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214 \320\237\320\2413", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem24 = ___qtreewidgetitem20->child(3);
        ___qtreewidgetitem24->setText(1, QApplication::translate("SAEPC", "\320\235\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\320\276\321\201\321\202\321\214 \320\270\320\267\320\264\320\265\320\273\320\270\321\217 15\320\240334. \320\235\320\265 \320\275\320\276\321\200\320\274\320\260 U \320\262\321\213\321\205. \320\237\320\2414. \320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214 \320\237\320\2414", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem25 = treeWidget->topLevelItem(3);
        ___qtreewidgetitem25->setText(1, QApplication::translate("SAEPC", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \320\270\320\267\320\276\320\273\321\217\321\206\320\270\320\270 GB \320\272\320\276\320\274\320\277\320\273\320\265\320\272\321\202\320\276\320\262", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem26 = ___qtreewidgetitem25->child(0);
        ___qtreewidgetitem26->setText(1, QApplication::translate("SAEPC", "\320\235\320\265 \320\275\320\276\321\200\320\274\320\260 R \320\270\320\267\320\276\320\273\321\217\321\206\320\270\320\270 GB1 \320\272\320\276\320\274\320\277\320\273\320\265\320\272\321\202\320\260 \320\245\320\230\320\242-\320\2241. \320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214 GB1", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem27 = ___qtreewidgetitem25->child(1);
        ___qtreewidgetitem27->setText(1, QApplication::translate("SAEPC", "\320\235\320\265 \320\275\320\276\321\200\320\274\320\260 R \320\270\320\267\320\276\320\273\321\217\321\206\320\270\320\270 GB2 \320\272\320\276\320\274\320\277\320\273\320\265\320\272\321\202\320\260 \320\245\320\230\320\242-\320\2242. \320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214 GB2", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem28 = ___qtreewidgetitem25->child(2);
        ___qtreewidgetitem28->setText(1, QApplication::translate("SAEPC", "\320\235\320\265 \320\275\320\276\321\200\320\274\320\260 R \320\270\320\267\320\276\320\273\321\217\321\206\320\270\320\270 GB1 \320\272\320\276\320\274\320\277\320\273\320\265\320\272\321\202\320\260 \320\245\320\230\320\242-\320\2241. \320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214 GB1", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem29 = ___qtreewidgetitem25->child(3);
        ___qtreewidgetitem29->setText(1, QApplication::translate("SAEPC", "\320\235\320\265 \320\275\320\276\321\200\320\274\320\260 R \320\270\320\267\320\276\320\273\321\217\321\206\320\270\320\270 GB2 \320\272\320\276\320\274\320\277\320\273\320\265\320\272\321\202\320\260 \320\245\320\230\320\242-\320\2242. \320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214 GB2", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem30 = ___qtreewidgetitem25->child(4);
        ___qtreewidgetitem30->setText(1, QApplication::translate("SAEPC", "\320\235\320\265 \320\275\320\276\321\200\320\274\320\260 R \320\270\320\267\320\276\320\273\321\217\321\206\320\270\320\270 GB \320\272\320\276\320\274\320\277\320\273\320\265\320\272\321\202\320\260 \320\245\320\230\320\242-\320\237. \320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214 GB", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem31 = ___qtreewidgetitem25->child(5);
        ___qtreewidgetitem31->setText(1, QApplication::translate("SAEPC", "\320\235\320\265 \320\275\320\276\321\200\320\274\320\260 R \320\270\320\267\320\276\320\273\321\217\321\206\320\270\320\270 GB \320\272\320\276\320\274\320\277\320\273\320\265\320\272\321\202\320\260 \320\245\320\230\320\242-\320\240. \320\237\321\200\320\276\320\270\320\267\320\262\320\265\321\201\321\202\320\270 \320\277\320\276\320\270\321\201\320\272 \320\270 \320\267\320\260\320\274\320\265\320\275\320\270\321\202\321\214 \320\275\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\321\203\321\216 GB", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem32 = ___qtreewidgetitem25->child(6);
        ___qtreewidgetitem32->setText(1, QApplication::translate("SAEPC", "\320\235\320\265 \320\275\320\276\321\200\320\274\320\260 R \320\270\320\267\320\276\320\273\321\217\321\206\320\270\320\270 \320\263\321\200\321\203\320\277\320\277\321\213 \320\261\320\260\321\202\320\260\321\200\320\265\320\271 GB1-GB32 \320\221\320\2201 \320\272\320\276\320\274\320\277\320\273\320\265\320\272\321\202\320\260 \320\245\320\230\320\242-\320\220. \320\237\321\200\320\276\320\262\320\265\321\201\321\202\320\270 \320\277\320\276\320\270\321\201\320\272 \320\270 \320\267\320\260\320\274\320\265\320\275\320\270\321\202\321\214 \320\275\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\321\203\321\216 GB", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem33 = ___qtreewidgetitem25->child(7);
        ___qtreewidgetitem33->setText(1, QApplication::translate("SAEPC", "\320\235\320\265 \320\275\320\276\321\200\320\274\320\260 R \320\270\320\267\320\276\320\273\321\217\321\206\320\270\320\270 \320\263\321\200\321\203\320\277\320\277\321\213 \320\261\320\260\321\202\320\260\321\200\320\265\320\271 GB33-GB64 \320\221\320\2202 \320\272\320\276\320\274\320\277\320\273\320\265\320\272\321\202\320\260 \320\245\320\230\320\242-\320\220. \320\237\321\200\320\276\320\262\320\265\321\201\321\202\320\270 \320\277\320\276\320\270\321\201\320\272 \320\270 \320\267\320\260\320\274\320\265\320\275\320\270\321\202\321\214 \320\275\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\321\203\321\216 GB", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem34 = ___qtreewidgetitem25->child(8);
        ___qtreewidgetitem34->setText(1, QApplication::translate("SAEPC", "\320\235\320\265 \320\275\320\276\321\200\320\274\320\260 R \320\270\320\267\320\276\320\273\321\217\321\206\320\270\320\270 \320\263\321\200\321\203\320\277\320\277\321\213 \320\261\320\260\321\202\320\260\321\200\320\265\320\271 GB65-GB80 \320\221\320\2203 \320\272\320\276\320\274\320\277\320\273\320\265\320\272\321\202\320\260 \320\245\320\230\320\242-\320\220. \320\237\321\200\320\276\320\262\320\265\321\201\321\202\320\270 \320\277\320\276\320\270\321\201\320\272 \320\270 \320\267\320\260\320\274\320\265\320\275\320\270\321\202\321\214 \320\275\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\321\203\321\216 GB", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem35 = treeWidget->topLevelItem(4);
        ___qtreewidgetitem35->setText(1, QApplication::translate("SAEPC", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \320\243\320\240", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem36 = ___qtreewidgetitem35->child(0);
        ___qtreewidgetitem36->setText(1, QApplication::translate("SAEPC", "\320\235\320\265 \320\275\320\276\321\200\320\274\320\260 R \320\270\320\267\320\276\320\273\321\217\321\206\320\270\320\270 GB1 \320\272\320\276\320\274\320\277\320\273\320\265\320\272\321\202\320\260 \320\245\320\230\320\242-\320\234. \320\237\321\200\320\276\320\270\320\267\320\262\320\265\321\201\321\202\320\270 \320\277\320\276\320\270\321\201\320\272 \320\270 \320\267\320\260\320\274\320\265\320\275\320\270\321\202\321\214 \320\275\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\321\203\321\216 GB1", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem37 = ___qtreewidgetitem35->child(1);
        ___qtreewidgetitem37->setText(1, QApplication::translate("SAEPC", "\320\235\320\265 \320\275\320\276\321\200\320\274\320\260 R \320\270\320\267\320\276\320\273\321\217\321\206\320\270\320\270 GB32 \320\272\320\276\320\274\320\277\320\273\320\265\320\272\321\202\320\260 \320\245\320\230\320\242-\320\234. \320\237\321\200\320\276\320\270\320\267\320\262\320\265\321\201\321\202\320\270 \320\277\320\276\320\270\321\201\320\272 \320\270 \320\267\320\260\320\274\320\265\320\275\320\270\321\202\321\214 \320\275\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\321\203\321\216 GB2", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem38 = ___qtreewidgetitem35->child(2);
        ___qtreewidgetitem38->setText(1, QApplication::translate("SAEPC", "\320\235\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\320\276\321\201\321\202\321\214 \320\270\320\267\320\264\320\265\320\273\320\270\321\217 15\320\240334. \320\235\320\265 \320\275\320\276\321\200\320\274\320\260 \320\221\320\227\320\242 \320\222\320\222\320\236\320\224\320\2201 \320\243\320\240. \320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214 \320\243\320\240", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem39 = ___qtreewidgetitem35->child(3);
        ___qtreewidgetitem39->setText(1, QApplication::translate("SAEPC", "\320\235\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\320\276\321\201\321\202\321\214 \320\270\320\267\320\264\320\265\320\273\320\270\321\217 15\320\240334. \320\235\320\265 \320\275\320\276\321\200\320\274\320\260 \320\221\320\227\320\242 \320\222\320\222\320\236\320\224\320\2202 \320\243\320\240. \320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214 \320\243\320\240", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem40 = ___qtreewidgetitem35->child(4);
        ___qtreewidgetitem40->setText(1, QApplication::translate("SAEPC", "\320\232\320\276\321\200\320\276\321\202\320\272\320\276\320\265 \320\267\320\260\320\274\321\213\320\272\320\260\320\275\320\270\320\265 \320\276\320\264\320\275\320\276\320\263\320\276 \320\270\320\267 \321\204\320\270\320\264\320\265\321\200\320\276\320\262 \320\277\320\270\321\202\320\260\320\275\320\270\321\217 \320\277\320\276\321\202\321\200\320\265\320\261\320\270\321\202\320\265\320\273\320\265\320\271 \320\277\320\265\321\200\320\265\320\274\320\265\320\275\320\275\320\276\320\263\320\276 \321\202\320\276\320\272\320\260 \320\243\320\240. \320\243\321\201\321\202\321\200\320\260\320\275\320\270\321\202\321\214 \320\277\321\200\320\270\321\207\320\270\320\275\321\203 \320\272\320\276\321\200\320\276\321\202\320\272\320\276\320\263\320\276 \320\267\320\260\320\274\321\213\320\272\320\260\320\275\320\270\321\217", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem41 = ___qtreewidgetitem35->child(5);
        ___qtreewidgetitem41->setText(1, QApplication::translate("SAEPC", "\320\235\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\320\276\321\201\321\202\321\214 \320\270\320\267\320\264\320\265\320\273\320\270\321\217 15\320\240334. \320\235\320\265 \320\275\320\276\321\200\320\274\320\260 \320\272\320\276\320\274\320\274\321\203\321\202\320\260\321\206\320\270\320\276\320\275\320\275\320\276\320\271 \320\260\320\277\320\277\320\260\321\200\320\260\321\202\321\203\321\200\321\213 \320\221\320\220\320\2431\321\216 \320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214 \320\221\320\220\320\2431", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem42 = treeWidget->topLevelItem(5);
        ___qtreewidgetitem42->setText(1, QApplication::translate("SAEPC", "\320\235\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\320\276\321\201\321\202\321\214 \320\272\320\276\320\274\320\274\321\203\321\202\320\260\321\206\320\270\320\276\320\275\320\275\320\276\320\271 \320\260\320\277\320\277\320\260\321\200\320\260\321\202\321\203\321\200\321\213", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem43 = ___qtreewidgetitem42->child(0);
        ___qtreewidgetitem43->setText(1, QApplication::translate("SAEPC", "\320\235\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\320\276\321\201\321\202\321\214 \320\270\320\267\320\264\320\265\320\273\320\270\321\217 15\320\240334. \320\235\320\265 \320\275\320\276\321\200\320\274\320\260 \320\221\320\227\320\235 U \320\262\321\213\321\205. \320\237\320\2411-\320\237\320\2414. \320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214 \320\221\320\227\320\235", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem44 = ___qtreewidgetitem42->child(1);
        ___qtreewidgetitem44->setText(1, QApplication::translate("SAEPC", "\320\235\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\320\276\321\201\321\202\321\214 \320\270\320\267\320\264\320\265\320\273\320\270\321\217 15\320\240334. \320\235\320\265 \320\275\320\276\321\200\320\274\320\260 \320\232\320\241\320\243. \320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214 \320\232\320\241\320\243", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem45 = ___qtreewidgetitem42->child(2);
        ___qtreewidgetitem45->setText(1, QApplication::translate("SAEPC", "\320\235\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\320\276\321\201\321\202\321\214 \320\270\320\267\320\264\320\265\320\273\320\270\321\217 15\320\240334. \320\235\320\265 \320\275\320\276\321\200\320\274\320\260 \320\272\320\276\320\274\320\274\321\203\321\202\320\260\321\206\320\270\320\276\320\275\320\275\320\276\320\271 \320\260\320\277\320\277\320\260\321\200\320\260\321\202\321\203\321\200\321\213 \320\221\320\2204-1. \320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214 \320\221\320\2204-1", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem46 = ___qtreewidgetitem42->child(3);
        ___qtreewidgetitem46->setText(1, QApplication::translate("SAEPC", "\320\235\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\320\276\321\201\321\202\321\214 \320\270\320\267\320\264\320\265\320\273\320\270\321\217 15\320\240334. \320\235\320\265 \320\275\320\276\321\200\320\274\320\260 \320\272\320\276\320\274\320\274\321\203\321\202\320\260\321\206\320\270\320\276\320\275\320\275\320\276\320\271 \320\260\320\277\320\277\320\260\321\200\320\260\321\202\321\203\321\200\321\213 \320\221\320\2204-2. \320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214 \320\221\320\2204-2", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem47 = ___qtreewidgetitem42->child(4);
        ___qtreewidgetitem47->setText(1, QApplication::translate("SAEPC", "\320\235\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\320\276\321\201\321\202\321\214 \320\270\320\267\320\264\320\265\320\273\320\270\321\217 15\320\240334. \320\235\320\265 \320\275\320\276\321\200\320\274\320\260 \320\221\320\227\320\242 \320\272\320\260\320\275\320\260\320\273 1 \320\221\320\2204-2. \320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214 \320\221\320\2204-2", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem48 = ___qtreewidgetitem42->child(5);
        ___qtreewidgetitem48->setText(1, QApplication::translate("SAEPC", "\320\235\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\320\276\321\201\321\202\321\214 \320\270\320\267\320\264\320\265\320\273\320\270\321\217 15\320\240334. \320\235\320\265 \320\275\320\276\321\200\320\274\320\260 \320\221\320\227\320\242 \320\272\320\260\320\275\320\260\320\273 2 \320\221\320\2204-2. \320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214 \320\221\320\2204-2", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem49 = ___qtreewidgetitem42->child(6);
        ___qtreewidgetitem49->setText(1, QApplication::translate("SAEPC", "\320\235\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\320\276\321\201\321\202\321\214 \320\270\320\267\320\264\320\265\320\273\320\270\321\217 15\320\240334. \320\235\320\265 \320\275\320\276\321\200\320\274\320\260 \320\272\320\276\320\274\320\274\321\203\321\202\320\260\321\206\320\270\320\276\320\275\320\275\320\276\320\271 \320\260\320\277\320\277\320\260\321\200\320\260\321\202\321\203\321\200\321\213 \320\221\320\2205-1. \320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214 \320\221\320\2205-1", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem50 = ___qtreewidgetitem42->child(7);
        ___qtreewidgetitem50->setText(1, QApplication::translate("SAEPC", "\320\235\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\320\276\321\201\321\202\321\214 \320\270\320\267\320\264\320\265\320\273\320\270\321\217 15\320\240334. \320\235\320\265 \320\275\320\276\321\200\320\274\320\260 \320\272\320\276\320\274\320\274\321\203\321\202\320\260\321\206\320\270\320\276\320\275\320\275\320\276\320\271 \320\260\320\277\320\277\320\260\321\200\320\260\321\202\321\203\321\200\321\213 \320\221\320\2205-2. \320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214 \320\221\320\2205-2", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem51 = treeWidget->topLevelItem(6);
        ___qtreewidgetitem51->setText(1, QApplication::translate("SAEPC", "\320\235\320\260\320\277\321\200\321\217\320\266\320\265\320\275\320\270\320\265 \320\275\320\260 \321\210\320\270\320\275\320\260\321\205", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem52 = ___qtreewidgetitem51->child(0);
        ___qtreewidgetitem52->setText(1, QApplication::translate("SAEPC", "\320\235\320\265 \320\275\320\276\321\200\320\274\320\260 \320\275\320\260\320\277\321\200\321\217\320\266\320\265\320\275\320\270\321\217 \320\275\320\260 \321\210\320\270\320\275\320\265 \"\320\234\". \320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214 \320\237\320\237\320\2419, \320\237\320\237\320\24110", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem53 = ___qtreewidgetitem51->child(1);
        ___qtreewidgetitem53->setText(1, QApplication::translate("SAEPC", "\320\235\320\265 \320\275\320\276\321\200\320\274\320\260 \320\275\320\260\320\277\321\200\321\217\320\266\320\265\320\275\320\270\321\217 \320\275\320\260 \321\210\320\270\320\275\320\265 \"\320\237\320\224\". \320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214 \320\221\320\2204-1, \320\221\320\2204-2", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem54 = ___qtreewidgetitem51->child(2);
        ___qtreewidgetitem54->setText(1, QApplication::translate("SAEPC", "\320\235\320\265 \320\275\320\276\321\200\320\274\320\260 \320\275\320\260\320\277\321\200\321\217\320\266\320\265\320\275\320\270\321\217 \320\275\320\260 \321\210\320\270\320\275\320\265 \"\320\234\". \320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214 \320\237\320\237\320\2417, \320\237\320\237\320\2418", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem55 = ___qtreewidgetitem51->child(3);
        ___qtreewidgetitem55->setText(1, QApplication::translate("SAEPC", "\320\235\320\265 \320\275\320\276\321\200\320\274\320\260 \320\275\320\260\320\277\321\200\321\217\320\266\320\265\320\275\320\270\321\217 \320\275\320\260 \321\210\320\270\320\275\320\265 \"\320\234\". \320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214 \320\237\320\237\320\2411-\320\237\320\237\320\2416", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem56 = treeWidget->topLevelItem(7);
        ___qtreewidgetitem56->setText(1, QApplication::translate("SAEPC", "\320\236\321\202\320\272\320\260\320\267 \321\201\320\262\321\217\320\267\320\270", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem57 = ___qtreewidgetitem56->child(0);
        ___qtreewidgetitem57->setText(1, QApplication::translate("SAEPC", "\320\236\321\202\320\272\320\260\320\267 \321\201\320\262\321\217\320\267\320\270 \321\201 \320\270\320\267\320\264\320\265\320\273\320\270\320\265\320\274 15\320\240334. \320\222\320\272\320\273\321\216\321\207\320\270\321\202\321\214 \321\200\320\265\320\266\320\270\320\274 \320\224\320\237\320\237", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem58 = ___qtreewidgetitem56->child(1);
        ___qtreewidgetitem58->setText(1, QApplication::translate("SAEPC", "\320\236\321\202\320\272\320\260\320\267 \321\201\320\262\321\217\320\267\320\270 \321\201 \320\276\321\201\320\275\320\276\320\262\320\275\321\213\320\270 \320\270\320\275\321\202\320\265\321\200\321\204\320\265\320\271\321\201\320\275\321\213\320\274 \320\274\320\276\320\264\321\203\320\273\320\265\320\274 \320\270\320\267\320\264\320\265\320\273\320\270\321\217 15\320\240334 \320\277\320\276 \320\276\321\201\320\275\320\276\320\262\320\275\320\276\320\271 \320\273\320\270\320\275\320\270\320\270 \321\201\320\262\321\217\320\267\320\270. \320\237\321\200\320\276\320\262\320\265\321\200\320\270\321\202\321\214 \321\201\320\276\320\265\320\264\320\270\320\275\320\265\320\275\320\270\320\265", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem59 = ___qtreewidgetitem56->child(2);
        ___qtreewidgetitem59->setText(1, QApplication::translate("SAEPC", "\320\236\321\202\320\272\320\260\320\267 \321\201\320\262\321\217\320\267\320\270 \321\201 \321\200\320\265\320\267\320\265\321\200\320\262\320\275\321\213\320\270 \320\270\320\275\321\202\320\265\321\200\321\204\320\265\320\271\321\201\320\275\321\213\320\274 \320\274\320\276\320\264\321\203\320\273\320\265\320\274 \320\270\320\267\320\264\320\265\320\273\320\270\321\217 15\320\240334 \320\277\320\276 \321\200\320\265\320\267\320\265\321\200\320\262\320\275\320\276\320\271 \320\273\320\270\320\275\320\270\320\270 \321\201\320\262\321\217\320\267\320\270. \320\237\321\200\320\276\320\262\320\265\321\200\320\270\321\202\321\214 \321\201\320\276\320\265\320\264\320\270\320\275\320\265\320\275\320\270\320\265", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem60 = ___qtreewidgetitem56->child(3);
        ___qtreewidgetitem60->setText(1, QApplication::translate("SAEPC", "\320\236\321\202\320\272\320\260\320\267 \321\201\320\262\321\217\320\267\320\270 \321\201 \321\200\320\265\320\267\320\265\321\200\320\262\320\275\321\213\320\274 \320\270\320\275\321\202\320\265\321\200\321\204\320\265\320\271\321\201\320\275\321\213\320\274 \320\274\320\276\320\264\321\203\320\273\320\265\320\274 \320\270\320\267\320\264\320\265\320\273\320\270 15\320\240334 \320\277\320\276 \320\276\321\201\320\275\320\276\320\262\320\275\320\276\320\271 \320\273\320\270\320\275\320\270\320\270 \321\201\320\262\321\217\320\267\320\270. \320\237\321\200\320\276\320\262\320\265\321\200\320\270\321\202\321\214 \321\201\320\276\320\265\320\264\320\270\320\275\320\265\320\275\320\270\320\265", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem61 = ___qtreewidgetitem56->child(4);
        ___qtreewidgetitem61->setText(1, QApplication::translate("SAEPC", "\320\236\321\202\320\272\320\260\320\267 \321\201\320\262\321\217\320\267\320\270 \321\201 \320\276\321\201\320\275\320\276\320\262\320\275\321\213\320\274 \320\270\320\275\321\202\320\265\321\200\321\204\320\265\320\271\321\201\320\275\321\213\320\274 \320\274\320\276\320\264\321\203\320\273\320\265\320\274 \320\270\320\267\320\264\320\265\320\273\320\270\321\217 15\320\240334 \320\277\320\276 \321\200\320\265\320\267\320\265\321\200\320\262\320\275\320\276\320\271 \320\273\320\270\320\275\320\270\320\270 \321\201\320\262\321\217\320\267\320\270. \320\237\321\200\320\276\320\262\320\265\321\200\320\270\321\202\321\214 \321\201\320\276\320\265\320\264\320\270\320\275\320\265\320\275\320\270\320\265", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem62 = ___qtreewidgetitem56->child(5);
        ___qtreewidgetitem62->setText(1, QApplication::translate("SAEPC", "\320\236\321\202\320\272\320\260\320\267 \321\200\320\265\320\273\320\265\320\271\320\275\321\213\321\205 \321\201\320\262\321\217\320\267\320\265\320\271 \321\201 \320\270\320\267\320\264\320\265\320\273\320\270\320\265\320\274 15\320\240334. \320\237\321\200\320\276\320\262\320\265\321\200\320\270\321\202\321\214 \321\201\320\276\320\265\320\264\320\270\320\275\320\265\320\275\320\270\320\265", 0, QApplication::UnicodeUTF8));
        treeWidget->setSortingEnabled(__sortingEnabled);

        firstPort->setText(QApplication::translate("SAEPC", "\320\237\320\265\321\200\320\262\321\213\320\271 \320\260\320\264\321\200\320\265\321\201", 0, QApplication::UnicodeUTF8));
        secondPort->setText(QApplication::translate("SAEPC", "\320\222\321\202\320\276\321\200\320\276\320\271 \320\260\320\264\321\200\320\265\321\201", 0, QApplication::UnicodeUTF8));
        console->setText(QApplication::translate("SAEPC", "\320\222\321\213\320\262\320\265\321\201\321\202\320\270 \320\262 \320\272\320\276\320\275\321\201\320\276\320\273\321\214", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SAEPC: public Ui_SAEPC {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAEPC_H
