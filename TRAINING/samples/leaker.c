        // leaker 

   #include <stdio.h>
   #include <stdlib.h>
   #include <string.h>

   int main()
   {
        char *pointer;
	char x;

	while (1)
	{
	printf("hit enter: ");
	x=getchar();
        pointer = (char *)malloc(104857600);

	printf("alloc at: %p\n",pointer);

	for (long int y=0;y <104857600; y++)
	{ *pointer++ = 'a';}
        }

        return 0;
   }
