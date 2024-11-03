/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{ 
    float a,b,c,delta;
   
	printf("entrer la valeur de a,b et c ");
	scanf("%f%f%f",&a,&b,&c);
	delta=b*b-4*a*c;
	if (delta<0)
	printf("il y a pas de solutions en R");
	if(delta=0)
	printf("il y a une seule solution") ;
	if(delta>0)
	printf("il y a deux solutions") ;
	

	return 0;
}