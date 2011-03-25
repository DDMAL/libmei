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
	public:
		invalidAttribute(string attributeName) {
			this->attributeName = attributeName;
		}
		
		~invalidAttribute() throw() { };
		
		virtual const char* what() const throw() {
			string s = "This note does not contain the attribute ";
			s = s + attributeName;
			return s.c_str();
		}
		
	private:
		string attributeName;
	};



#endif //EXCEPTIONS_H_
