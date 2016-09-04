        /*      procedural.c       */

#include	<stdio.h>
#include	<stdlib.h>

        int main()
        {

        static  struct  entry
        {
        char     make[10];
        char     model[10];
        char     year[10];
        char     miles[10];
        long int value;
        }   cars[12] =

        {  {"plym"  ,"fury"   ,"77" ,"73" ,2500},
	{   "chevy" ,"nova"   ,"79" ,"60" ,3000},
	{   "ford"  ,"mustang","65" ,"45" ,10000},
	{   "volvo" ,"gl"     ,"78" ,"102",9850},
	{   "ford"  ,"ltd"    ,"83" ,"15" ,10500},
	{   "chevy" ,"nova"   ,"80" ,"50" ,3500},
	{   "fiat"  ,"600"    ,"65" ,"115",450},
	{   "honda" ,"accord" ,"81" ,"30" ,6000},
	{   "ford"  ,"thundbd","84" ,"10" ,17000},
	{   "toyota","tercel" ,"82" ,"180",750},
	{   "chevy" ,"impala" ,"65" ,"85" ,1550},
	{   "ford"  ,"bronco" ,"83" ,"25" ,9500},
        };

	
	  for (long int count = 0 ; count < 12; ++count)

	printf("car: %-8s make: %-8s\n",cars[count].make,cars[count].model);
        return 1;
      }
