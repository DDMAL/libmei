/*
 *  libmei: Music Encoding Initiative
 *
 */

#ifndef LIBMEI_H_
#define LIBMEI_H_

/* The classes below are exported */
#pragma GCC visibility push(default)

class Mei
{
public:
    Mei(int start);
    int incr();
	
	
private:
    int state;
};

#pragma GCC visibility pop
#endif // LIBMEI_H_
