#include <stdio.h>
main()
{
 int i, j;
 for(i=1; i<11; i++)
 {
 printf("\nTabla del %i\n", i);
 for(j=1; j<11; j++)
 {
 printf("%i X %i = %i\n", i, j, i*j);
 }
 }
}
