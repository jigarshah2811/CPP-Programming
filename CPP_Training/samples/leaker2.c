        // leaker2 

   #include <stdio.h>
   #include <stdlib.h>
   #include <string.h>

   int main()
   {
        char *pointer;
	char buffer[100];

	while (1)
	{
	printf("enter 'x' to leak,'done' to abort: ");
	fgets(buffer,99,stdin);
	if (strncmp("done",buffer,4)==0) abort();
        pointer = (char *)malloc(104857600);

	printf("alloc at: %p\n",pointer);

	for (long int y=0;y <104857600; y++)
	{ *pointer++ = 'a';}
        }

        return 0;
   }
