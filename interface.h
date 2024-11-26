#ifndef TINTERFACE_H
#define TINTERFACE_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QRadioButton>
#include "complex.h"
#include "fsin.h"

class TInterface : public QWidget
{
    Q_OBJECT
    QLabel* power;
    QLineEdit* power_input;
    QLabel* func;
    QRadioButton* sin, *integral_sin;
    QPushButton* submit;
    QLabel* output;

public:
    TInterface(QWidget *parent = nullptr);
    ~TInterface();
};
#endif // TINTERFACE_H
