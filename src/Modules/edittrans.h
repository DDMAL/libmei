/*
 *  edittrans.h
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/25/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef EDITTRANS_H_
#define EDITTRANS_H_

#include "meielement.h"

/** \brief Marks an addition to the text.*/
class Add: public MeiElement {
public:
	Add();
private:
};

/** \brief Groups a number of alternative encodings for the same point in a text. */
class Choice: public MeiElement {
public:
	Choice();
private:
};

/** \brief Contains the correct form of an apparent erroneous passage. */
class Corr: public MeiElement {
public:
	Corr();
private:
};

/** \brief Contains an area of damage to the carrier.*/
class Damage: public MeiElement {
public:
	Damage();
private:
};

/** \brief Contains information deleted, marked as deleted, or indicated as superfluous by an author or corrector.*/
class Del: public MeiElement {
public:
	Del();
private:
};

/** \brief Indicates a point where material has been omitted in a transcription. */
class Gap: public MeiElement {
public:
	Gap();
private:
};

/** \brief Marks the beginning of a passage written in a new hand,*/
class HandShift: public MeiElement {
public:
	HandShift();
private:
};

/** \brief Contains a reading which is marked as following the original, 
 *         rather than being normalized or corrected
 */
class Orig: public MeiElement {
public:
	Orig();
private:
};

/** \brief Contains a reading which has been regularized or normalized in some sense.*/
class Reg: public MeiElement {
public:
	Reg();
private:
};

/** \brief Indicates restoration of musical material to an earlier state by 
 *         cancellation of an editorial or authorial marking or instruction.
 */
class Restore: public MeiElement {
public:
	Restore();
private:
};

/** \brief Contains apparently incorrect or inaccurate musical material.*/
class Sic: public MeiElement {
public:
	Sic();
private:
};

/** \brief Groups transcriptional elements when the combination is to be regarded 
 *         as a single intervention in the text
 */
class Subst: public MeiElement {
public:
	Subst();
private:
};

/** \brief Contains musical material supplied by the transcriber or editor in place of text which cannot be read.*/
class Supplied: public MeiElement {
public:
	Supplied();
private:
};

/** \brief Contains musical material that cannot be transcribed with certainty because it is illegible or inaudible in the source. */
class Unclear: public MeiElement {
public:
	Unclear();
private:
};


#endif // EDITTRANS_H_