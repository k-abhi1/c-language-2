#include<stdio.h>
#include<conio.h>
int main()
{
   int a[50], i,j,n,t;
   
   printf("enter the No: of elements in the list:");
   scanf("%d", &n);
   
   printf("enter the elements:");
   for(i=0; i<n; i++)
   {
   
      scanf ("%d", &a[i]);
   }
   printf("n\Before bubble sorting the elements are:");
   for(i=0; i<n; i++)
   
      printf("%d \t", a[i]);
      
   for (i=0; i<n-1; i++)
   {
      for (j=i+1; j<n; j++
	  ){
         if (a[i] > a[j])
		 {
            t = a[i];
            a[i] = a[j];
            a[j] = t;
         }
      }
   }
   printf ("\nafter bubble sorting the elements are:");
   for (i=0; i<n; i++)
      printf("%d\t", a[i]);
   return 0;
}
/*Output
When the above program is executed, it produces the following result -

enter the No: of elements in the list:
5
enter the elements:
12 11 45 26 67
Before bubble sorting the elements are:
12
11
45
26
67
after bubble sorting the elements are:
11 12 26 45 67*/
