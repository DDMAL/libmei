/*
 *  libmei: Music Encoding Initiative
 *
 */

#include "libmei.h"

#include <iostream>


Mei::Mei(int start) {
    state = start;
}

int Mei::incr() {
    state++;
    return state;
}
