#include <stdio.h>

main()

{

int i,j,b=0;

for(i=2;i<=100;i++)

{

for(j=1;j<=i;j++)

{

if(i%j==0)

b++;

}

if(b==2)

printf("%d\n",i);

b=0;

}

}


