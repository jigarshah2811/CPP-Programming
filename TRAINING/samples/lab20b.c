        /*      LAB20B.C         */

#include	<stdio.h>
#include	<stdlib.h>

        int main()
        {

        static  struct  entry
        {
        char    word[10];
        char    definition[50];
        }   dictionary[4] =

        {  {"AST", "Asynchronous System Trap"},
           {"VAX", "Virtual Address Extension"},
           {"VMS", "Virtual Memory System"},
	   {"CLI", "Command Language Interpreter"}
        };

	short  int   count;
	FILE  *fpointer;

          if ( (fpointer = fopen ( "acronyms", "w" ))== NULL )
		{
                printf ("File could not be opened\n");
		exit(0);
		}
          else

          {
	
	  for (count = 0 ; count < 4; ++count)

                fwrite ( &dictionary[count], 
			 sizeof(struct entry), 1, fpointer);

	  fclose (fpointer);	
        
          }
        return 1;
      }
