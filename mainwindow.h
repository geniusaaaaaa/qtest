
// Created by YANG on 2023/4/1.
//

#ifndef QTEST_MAINWINDOW_H
#define QTEST_MAINWINDOW_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class Mainwindow; }
QT_END_NAMESPACE

class Mainwindow : public QWidget {
Q_OBJECT

public:
    explicit Mainwindow(QWidget *parent = nullptr);
    ~Mainwindow() override;

private:
    Ui::Mainwindow *ui;
};


#endif //QTEST_MAINWINDOW_H
