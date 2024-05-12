// 

#include<stdio.h>

struct studentrecord{
  char name[20];
  char collagename[20];
  int rollno;
  int regno;
  float marks;
  
};
int main(){
  struct studentrecord s1;
  printf("____________________________________\n");
  printf("----------STUDENT RECORD----------\n");
  printf("____________________________________\n");
 
  printf("Enter the name of the student:\n ");
  scanf("%s", s1.name);
  printf("Enter the name of the collage: \n");
  scanf("%s", s1.collagename);
  printf("Enter the roll no:\n ");
  scanf("%d", s1.rollno);
  printf("Enter the reg no:\n ");
  scanf("%d", s1.regno);
  printf("Enter the marks:\n ");
  scanf("%f", s1.marks);
  return 0;
}