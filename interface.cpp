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

    a_name = new QLabel("a = ", this);
    a_name->setGeometry(10, 90, 20, 30);

    a_delimiter = new QLabel(" +i ", this);
    a_delimiter->setGeometry(60, 90, 20, 30);

    a_re = new QLineEdit(this);
    a_re->setGeometry(30, 95, 30, 20);

    a_im = new QLineEdit(this);
    a_im->setGeometry(80, 95, 30, 20);

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
        int n = power_input->text().toInt();
        TFsin<TComplex> sin_func(n);
        QString s;
        s += "p";
        s << TComplex(a_re->text().toDouble(), a_im->text().toDouble());
        s += " = ";
        s << sin_func(TComplex(a_re->text().toDouble(), a_im->text().toDouble()));
        output->setText(s);
    }
    else if (integral_sin->isChecked())
    {
        int n = power_input->text().toInt();
        TFSi<TComplex> Si_func(n);
        QString s;
        s += "p";
        s << TComplex(a_re->text().toDouble(), a_im->text().toDouble());
        s += " = ";
        s << Si_func(TComplex(a_re->text().toDouble(), a_im->text().toDouble()));
        output->setText(s);
    }
}

TInterface::~TInterface()
{
    delete power;
    delete power_input;
    delete a_name;
    delete a_re;
    delete a_delimiter;
    delete a_im;
    delete func;
    delete sin;
    delete integral_sin;
    delete submit;
    delete output;
}

