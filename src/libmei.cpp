/*
 *  libmei: Music Encoding Initiative
 *
 */

#include <iostream>
#include "libmei.h"

mei::mei(int start) {
    state = start;
}

int mei::incr() {
    state++;
    return state;
}
