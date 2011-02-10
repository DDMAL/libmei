/*
 *  libmei: Music Encoding Initiative
 *
 */

#ifndef libmei_
#define libmei_

/* The classes below are exported */
#pragma GCC visibility push(default)

class mei
{
public:
    mei(int start);
    int incr();
private:
    int state;
};

#pragma GCC visibility pop
#endif
