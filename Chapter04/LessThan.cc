#include "LessThan.h"

bool LessThan::
operator()(int value) const { return value < _val; }


