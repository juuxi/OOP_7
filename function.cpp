#include "function.h"

template <class number>
TFunction<number>::TFunction(int n, TArray<number> derivatives)
{
    TPolinom<number>::TPolinom(n, derivatives);
}
