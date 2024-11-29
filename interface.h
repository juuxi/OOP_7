#ifndef TINTERFACE_H
#define TINTERFACE_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QRadioButton>
#include "complex.h"
#include "fsin.h"
#include "fsi.h"

class TInterface : public QWidget
{
    Q_OBJECT
    QLabel* power;
    QLineEdit* power_input;
    QLabel* a_name, *a_delimiter;
    QLineEdit* a_re, *a_im;
    QLabel* func;
    QRadioButton* sin, *integral_sin;
    QPushButton* submit;
    QLabel* output;

public:
    TInterface(QWidget *parent = nullptr);
    ~TInterface();
public slots:
    void print_val();
};
#endif // TINTERFACE_H
