#ifndef TINTERFACE_H
#define TINTERFACE_H

#include <QWidget>
#include "complex.h"
#include "function.h"

class TInterface : public QWidget
{
    Q_OBJECT

public:
    TInterface(QWidget *parent = nullptr);
    ~TInterface();
};
#endif // TINTERFACE_H