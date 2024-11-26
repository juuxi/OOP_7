#ifndef TFUNCTION_H
#define TFUNCTION_H

#include <polinom.h>

template <class number>
class TFunction : private TPolinom<number>
{
public:
    TFunction();
    using TPolinom<number>::operator();
    using TPolinom<number>::coefficients;
};

#endif // TFUNCTION_H
