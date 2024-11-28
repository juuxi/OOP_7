#include "interface.h"

TInterface::TInterface(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Практика №7");
    setFixedSize(800, 500);
    power = new QLabel("Точность вычисления", this);
    power->setGeometry(10, 10, 200, 30);

    power_input = new QLineEdit(this);
    power_input->setGeometry(210, 15, 30, 20);

    func = new QLabel("Вычислить функцию", this);
    func->setGeometry(10, 60, 200, 30);

    sin = new QRadioButton("sin", this);
    sin->setGeometry(210, 60, 70, 30);

    integral_sin = new QRadioButton("Si", this);
    integral_sin->setGeometry(280, 60, 50, 30);

    submit = new QPushButton("Применить", this);
    submit->setGeometry(100, 150, 150, 30);

    output = new QLabel(this);
    output->setGeometry(10, 200, 500, 30);

    connect(submit, SIGNAL(pressed()), this, SLOT(print_val()));


}

void TInterface::print_val()
{
    if (sin->isChecked())
    {
        TFsin<TComplex> sin_func(5);
        QString s;
        s += "p";
        s << TComplex(0, 2);
        s += " = ";
        s << sin_func(TComplex(0, 2));
        output->setText(s);
    }
}

TInterface::~TInterface()
{
    delete power;
    delete power_input;
    delete func;
    delete sin;
    delete integral_sin;
    delete submit;
    delete output;
}

