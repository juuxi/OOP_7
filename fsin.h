#ifndef TFSIN_H
#define TFSIN_H

#include "function.h"
#include <math.h>

template <class number>
class TFsin : public TFunction<number>
{
    number* der_value;
    number* count_der(int n)
    {
        der_value = new number[n+1];
        for (int i = 0; i < n; i++)
            der_value[i] = sin(0);
        return der_value;
    }
public:
    TFsin(int n) : TFunction<number> (n, count_der(n)) {};
    ~TFsin() {delete [] der_value;}
};

#endif // TFSIN_H
