#

/* jff_algol (Jan van Katwijk) */
/* Version 2.1.4		*/
/* input file: example.alg		*/
/* Compiled at Tue Oct 29 22:33:13 2019		*/


#include	<stdio.h>
#include "/usr/local/include/jff_header.h"
/* Headers		*/
extern	double fabs (double); /* fabs declared at line 2*/
extern	void space (int); /* space declared at line 24*/
extern	void newline (int); /* newline declared at line 26*/
extern	void outstring (int,char	*); /* outstring declared at line 28*/
extern	void outinteger (int,int); /* outinteger declared at line 42*/
extern	void ininteger (int,char	*,int (*)(char *, int), int(*)(char *, int)); /* ininteger declared at line 47*/
extern int _i_45; /* i declared at line 2*/
extern int _entrada_45; /* entrada declared at line 2*/
extern	int _fib_46 (int); /* fib declared at line 3*/

//	specification for thunk
extern int A_jff_0A (char *, int);
extern int _jff_0A (char *, int);
