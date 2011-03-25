/*
 *  meiexceptions.h
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/16/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef EXCEPTIONS_H_
#define EXCEPTIONS_H_

#include <exception>

using std::exception;

class invalidAttribute: public exception 
	{
		virtual const char* what() const throw() {
			return "This note does not contain the requested attribute";
		}
	};



#endif //EXCEPTIONS_H_
