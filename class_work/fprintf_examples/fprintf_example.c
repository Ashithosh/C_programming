 /* fprintf example */
#include <stdio.h>
int main ()
{
   FILE * pFile;
   int n;
   char name [100];

   pFile = fopen("my.txt","w");
   for (n=0; n<10; n++)
   {
     //puts
     printf("please, enter a name: ");
     //gets(name);
     scanf("%s",name);
     fprintf(pFile, "Name %d [%-10.10s]\n",n+1,name);
   }
   fclose(pFile);

   return 0;
}
