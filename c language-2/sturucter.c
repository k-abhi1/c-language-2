// struct 
// #include<stdio.h>

// struct stu{
//     int roll;
//     char name[20];
//     float marks;
// };
// int main(){
//     struct stu s;
//     printf("enter a student record");
//     scanf("%d%s%f",&s.roll,&s.name,&s.marks);
//     printf("roll=%d\nname=%s\nmarks=%f",s.roll,s.name,s.marks);
//     return 0;
// }
//union

#include<stdio.h>

union stu{
    int roll;
    char name[20];
    float marks;

};

int main(){

    union stu s;
    printf("enter a student record"); 
  printf("roll=%d\n",s.roll);
  scanf("%d",s.roll);
    printf("marks=%f\n",s.marks);
   scanf("%f",s.marks);
    printf("marks=%s\n",s.name);
    scanf("%s",s.name);
   
    return 0;
}
