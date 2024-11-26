#ifndef TFUNCTION_H
#define TFUNCTION_H

#include <polinom.h>

template <class number>
class TFunction : private TPolinom<number>
{
public:
    TFunction(int, TArray<number>);
    using TPolinom<number>::operator();
    using TPolinom<number>::coefficients;
};

#endif // TFUNCTION_H
