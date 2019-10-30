#

/* jff_algol (Jan van Katwijk) */
/* Version 2.1.4		*/
/* input file: example.alg		*/
/* Compiled at Tue Oct 29 22:33:13 2019		*/


#include	<stdio.h>
#include "example.h"

//	Code for the global declarations

int _i_45; /* i declared at line 2*/
int _entrada_45; /* entrada declared at line 2*/
 /* fib declared at line 3*/
int _fib_46 (int n){ 
 int __res_val;
__res_val =  ( (n) <= (1) )? n : (_fib_46 ((n) - (1))) + (_fib_46 ((n) - (2)));
return __res_val;

}
int  A_jff_0A (char *LP, int V){
return _entrada_45 = V;
}
int  _jff_0A (char *LP, int d){
return _entrada_45;
}


// The main program
int	main () {
 char	*LP = (char *)NULL;

{ // code for block at line 2
outstring (1, "Digite um inteiro\n");
ininteger (0, LP, A_jff_0A, _jff_0A);
for (_i_45=1; ( _i_45- (_entrada_45)) * sign ((double)1 )<= 0;_i_45 +=1){ outinteger (1, _i_45);
space (1);
outinteger (1, _fib_46 (_i_45));
newline (1);
}
; // null statement 
}
}
