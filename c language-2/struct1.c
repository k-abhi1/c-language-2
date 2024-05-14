// #include<stdio.h>

//     struct student{
//         char name[20];
//         char college[20];
//         int rollno;
//         int regno;
//         float marks;
//     };
// int main(){
//     struct student s1;
//     printf("____________________________________\n");
//     printf("----------STUDENT RECORD----------\n");
//     printf("____________________________________\n");
//     ("Enter the name of the student:\n ");
//     scanf("%s", s1.name);
//     printf("Enter the college name:\n ");
//     scanf("%s", s1.college);
//     printf("Enter the roll no\n ");
//     scanf("%d", s1.rollno);    
//     printf("Enter the name of the student reg no:\n ");
//     scanf("%d", s1.regno);
//     printf("Enter the marks:\n ");
//     scanf("%f", s1.marks);
//     printf("%s\n,%s\n,%d\n,%d\n,%f\n", s1.name, s1.college, s1.rollno, s1.regno, s1.marks);
//     return 0;
// }


// student record throgh the arry ?

// #include <stdio.h>
// typedef struct {
//     char name[50];
//     int roll;
//     float marks;
// } Student;

// int main() {
   
//     Student students[3];  
//     for (int i = 0; i < 3; i++) {
//         printf("Enter the name, roll, and marks of student %d:\n", i+1);
//         scanf("%s %d %f", &students[i].name, &students[i].roll, &students[i].marks);
//     }
//     for (int i = 0; i < 3; i++) {
//         printf("Student %d: Name = %s, Roll = %d, Marks = %.2f\n", i+1, students[i].name, students[i].roll, students[i].marks);
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// #define MAX_CANDIDATES 5

// // Struct to represent a candidate
// typedef struct {
//     char name[50];
//     int votes;
// } Candidate;

// // Function prototypes
// void displayMenu(Candidate candidates[]);
// int castVote(Candidate candidates[], int candidate);
// void displayResults(Candidate candidates[]);

// int main() {
//     Candidate candidates[MAX_CANDIDATES];

//     // Initialize candidates
//     strcpy(candidates[0].name, "Candidate 1");
//     strcpy(candidates[1].name, "Candidate 2");
//     strcpy(candidates[2].name, "Candidate 3");
//     strcpy(candidates[3].name, "Candidate 4");
//     strcpy(candidates[4].name, "Candidate 5");

//     // Reset votes
//     for (int i = 0; i < MAX_CANDIDATES; i++) {
//         candidates[i].votes = 0;
//     }

//     int choice;
//     do {
//         displayMenu(candidates);
//         printf("Enter your choice (0 to quit): ");
//         scanf("%d", &choice);

//         if (choice >= 1 && choice <= MAX_CANDIDATES) {
//             castVote(candidates, choice - 1); // Adjusting the index to match array indexing
//         } else if (choice != 0) {
//             printf("Invalid choice! Please choose a valid option.\n");
//         }
//     } while (choice != 0);

//     // Display the results
//     displayResults(candidates);

//     return 0;
// }

// // Function to display the voting menu
// void displayMenu(Candidate candidates[]) {
//     printf("\nVoting Menu:\n");
//     for (int i = 0; i < MAX_CANDIDATES; i++) {
//         printf("%d. %s\n", i + 1, candidates[i].name);
//     }
//     printf("0. Quit\n");
// }

// // Function to cast a vote for a candidate
// int castVote(Candidate candidates[], int candidate) {
//     candidates[candidate].votes++;
//     printf("You've successfully voted for %s.\n", candidates[candidate].name);
//     return 1;
// }

// // Function to display the voting results
// void displayResults(Candidate candidates[]) {
//     printf("\nVoting Results:\n");
//     for (int i = 0; i < MAX_CANDIDATES; i++) {
//         printf("%s: %d votes\n", candidates[i].name, candidates[i].votes);
//     }
// }
// #include <stdio.h>

// #define CANDIDATE_COUNT 4
// #define CANDIDATE1 "David Hull"
// #define CANDIDATE2 "Kristin Canella"
// #define CANDIDATE3 "Jim Brar"
// #define CANDIDATE4 "Donald Trump"

// int votesCount1 = 0, votesCount2 = 0, votesCount3 = 0, votesCount4 = 0, spoiledVotes = 0;

// void castVote()
// {
//     int choice;
//     printf("\n\n### Please choose your Candidate ###\n\n");
//     printf("\n 1. %s", CANDIDATE1);
//     printf("\n 2. %s", CANDIDATE2);
//     printf("\n 3. %s", CANDIDATE3);
//     printf("\n 4. %s", CANDIDATE4);
//     printf("\n 5. %s", "None of These");

//     printf("\n\n Input your choice (1 - 4) : ");
//     scanf("%d", &choice);

//     switch (choice)
//     {
//     case 1:
//         votesCount1++;
//         break;
//     case 2:
//         votesCount2++;
//         break;
//     case 3:
//         votesCount3++;
//         break;
//     case 4:
//         votesCount4++;
//         break;
//     case 5:
//         spoiledVotes++;
//         break;
//     default:
//         printf("\n Error: Wrong Choice !! Please retry");
//         //Hold the screen
//     }
//     printf("\n Thanks for voting!!");
// }

// void voteCount()
// {
//     printf("\n\n### Voting Statistics ###");
//     printf("\n %s - %d", CANDIDATE1, votesCount1);
//     printf("\n %s - %d", CANDIDATE2, votesCount2);
//     printf("\n %s - %d", CANDIDATE3, votesCount3);
//     printf("\n %s - %d", CANDIDATE4, votesCount4);
//     printf("\n %s - %d", "Spoiled Votes", spoiledVotes);
// }

// void getLeadingCandidate()
// {
//     printf("\n\n### Leading Candidates ###\n\n");
//     if (votesCount1 > votesCount2 && votesCount1 > votesCount3 && votesCount1 > votesCount4)
//     {
//         printf("[%s]", CANDIDATE1);
//     }
//     else if (votesCount2 > votesCount3 && votesCount2 > votesCount4 && votesCount2 > votesCount1)
//     {
//         printf("[%s]", CANDIDATE2);
//     }
//     else if (votesCount3 > votesCount4 && votesCount3 > votesCount2 && votesCount3 > votesCount1)
//     {
//         printf("[%s]", CANDIDATE3);
//     }
//     else if (votesCount4 > votesCount3 && votesCount4 > votesCount2 && votesCount4 > votesCount1)
//     {
//         printf("[%s]", CANDIDATE4);
//     }
//     else
//     {
//         printf("--------Warning !!! No-win situation---------");
//     }
// }

// int main()
// {
//     int choice;
//     do
//     {
//         printf("\n\n#### Welcome to Election/Voting 2023 ####");
//         printf("\n\n 1. Cast the vote");
//         printf("\n 2. Find Vote Count");
//         printf("\n 3. Find leading Candidate");
//         printf("\n 0. Exit");
//         printf("\n\n Please enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice)
//         {
//         case 1:
//             castVote();
//             break;
//         case 2:
//             voteCount();
//             break;
//         case 3:
//             getLeadingCandidate();
//             break;
//         default:
//             printf("\n Error: Invalid Choice");
//         }
//     } while (choice != 0);

//     //Hold the screen
//     getchar();
//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <windows.h>
// typedef struct voter_information
// {
//     char aadhar[20];
//     char name[50];
//     char birth_date[15];
//     struct voter_information *next;
// } node;

// node *head;
// node *space,*start=NULL;
// node *search(char x[],char y[],char z[],node *,int *);
// node *voter_insert(node *);
// node *main_logs(node *);
//  void admin();
//  void winner();
//  	void exi();
//  	void voting();
//  	void not_again();
//  	void stop();
//  	void show();


// int count=0,R=3,vote=0;
// int vote1=0,vote2=0,vote3=0,vote4=0,vote5=0;
// int main()
// {
// 	while(1){

//     system("cls");
//     printf("\n\n\n");
//     printf("\t            ****** WELCOME TO THE ONLINE VOTING PORTAL ******        \n\n");

//     printf("\t           ***************************************************        \n\n\n\n\n");
//     printf("        \t\t *****Please Enter One(1) for logging vote main Logs*****    \n\n\n");
//     int BB;

//     scanf("%d",&BB);
//     if(BB==1)
//     {
//       start=  main_logs(start);
//     }

// }
//     return 0;
// }

// node *main_logs(node *start)
// {
//     system("cls");
//     printf("\n\n\n");
//     printf("        \t\t\t1. FOR VOTE ENTRY     \n");
//     Sleep(300);
//     printf("        \t\t\t2. FOR ADMIN PANEL    \n");
//     Sleep(300);
//     printf("        \t\t\t3. FOR WINNER         \n");
//     printf("    \t IF YOUR CREDENTIALS MATCHES WITH THOSE IN THE VOTER LIST THEN ONLY YOU CAN GIVE YOUR VOTE OTHERWISE YOU CAN NOT    \n\n\n");
//     Sleep(500);
//     printf("    \t ********So Plz Enter********\n\n\n");
//     int T;
//     scanf("%d",&T);
//     if(T==1)
//     {
//        start= voter_insert(start);
//     }
//     if(T==2)
//     {
//       admin();
//     }
//     if(T==3)
//     {
//       winner();
//     }
//     if(T!=1||T!=2||T!=3)
//     {
//     	main_logs(start);
// 	}


//     return start;
// }


// node *voter_insert(node *start)
// {
// 	int UNIVERSAL=0;
// int *z;
//  z = &UNIVERSAL;
//      node *temp;
//      char name[50],birth_date[15],aadhar[20];
//      system("cls");
//      printf("\n\n\n\n");
//      printf("\t IF AADHAR ID, YOUR NAME AND YOUR DATE OF BIRTH MATCHES THEN YOU CAN GIVE YOUR VOTE OTHERWISE NOT\n\n");
//      Sleep(300);
//      printf("\t\t\t ID YOU DO WRONG %d TIMES, THE PORTAL WILL BE CLOSED AUTOMATICALLY\n\n\n",R);
//      Sleep(300);
//      printf("\t\tPlease \n");
//      Sleep(300);
//      printf("\t\t\tEnter your AADHAR ID number  ");
//      gets(aadhar);
//      gets(aadhar);
//      printf("\t\t\tEnter Your NAME   ");
//      gets(name);
//      printf("\t\t\tEnter Your BIRTH DATE  in dd-mm-yyyy format");
//      gets(birth_date);
//      temp=(node *)malloc(sizeof(node));
//      strcpy(temp->aadhar,aadhar);
//      strcpy(temp->name,name);
//      strcpy(temp->birth_date,birth_date);
//      temp->next=NULL;
//      head=temp;
//      while(temp!=NULL)
//      {
//          if((strcmp(temp->aadhar,"10001")==0&& strcmp(temp->name,"Rajat Kumar")==0 &&strcmp(temp->birth_date,"31-03-1999")==0) ||
//          (strcmp(temp->aadhar,"10002")==0&& strcmp(temp->name,"Goutam Kumar Bhadani")==0 &&strcmp(temp->birth_date,"01-01-1999")==0)||
//          (strcmp(temp->aadhar,"10003")==0&& strcmp(temp->name,"Gautam Kumar")==0 &&strcmp(temp->birth_date,"12-10-1999")==0)||
//          (strcmp(temp->aadhar,"10004")==0&& strcmp(temp->name,"Kundan Kumar")==0 &&strcmp(temp->birth_date,"08-12-1999")==0)||
//          (strcmp(temp->aadhar,"10005")==0&& strcmp(temp->name,"Aniket Arora")==0 &&strcmp(temp->birth_date,"28-08-1999")==0)||
//          (strcmp(temp->aadhar,"10006")==0&& strcmp(temp->name,"Dipika Singh")==0 &&strcmp(temp->birth_date,"20-10-2000")==0)||
//          (strcmp(temp->aadhar,"10007")==0&& strcmp(temp->name,"Avinash Kumar")==0 &&strcmp(temp->birth_date,"02-03-1999")==0)||
//          (strcmp(temp->aadhar,"10008")==0&& strcmp(temp->name,"Ravi Raj")==0 &&strcmp(temp->birth_date,"26-12-1999")==0)||
//          (strcmp(temp->aadhar,"10009")==0&& strcmp(temp->name,"Shubham Kumar")==0 &&strcmp(temp->birth_date,"02-01-1999")==0)||
//          (strcmp(temp->aadhar,"10010")==0&& strcmp(temp->name,"Subham Kumar")==0 &&strcmp(temp->birth_date,"03-01-1999")==0))

//          {
//          	R=3;
//          	start=search(temp->aadhar,temp->name,temp->birth_date,start,&UNIVERSAL);

//          	if(UNIVERSAL==0)
//             {
//             	 voting();
// 			}
//             else
//              {
//              	not_again();
// 			 }
//            }
//          else
//             {
//               R--;
//          if(R==0)
//          {
//              stop();
//              break;
//          }
//          printf("\n\n\n\n");
//          printf("\tYour AADHAR ID or NAME or DATE OF BIRTH is wrong\n\n");
//          Sleep(300);
//          printf("\t\t\tPlz Re-Enter\n\n");
//          Sleep(300);
//          system("pause");
//         start= main_logs(start);
//             }
//             temp=temp->next;
//      }
//      return start;
// }


// void voting()
// {
//      system("cls");
//     printf("\n\n\n\n");
//     printf("\t\t     * * * * * LIST OF CANDIDATES * * * * * \n\n\n");
//     Sleep(300);
//     printf("\t\t\t NAME     & THEIR RESPECTIVE      SYMBOL\n\n");
//     Sleep(300);
//     printf("\t\t\t 1.Mamata Banerjee                1.Fish\n");
//     Sleep(300);
//     printf("\t\t\t 2.Deepa Dasmunsi                 2.Boat\n");
//     Sleep(300);
//     printf("\t\t\t 3.Protima Rajak                  3.Motorcycle\n");
//     Sleep(300);
//     printf("\t\t\t 4.Joydeb Halder                  4.Broomstick\n");
//     Sleep(300);
//     printf("\t\t\t 5.Kartik Chandra Ghosh           5.Wheel\n\n\n");



//        int B,j;
//        printf("\t\t\t Plzz, \n");
//        printf("\t\t\t Enter Your Choice \n");
//        for(j=1;j<=1;j++)
//        {
//            scanf("%d",&B);

//            if(B==1)
//            {
//                vote1++;
//                printf("\n\n\t\t\t\tYOU HAVE SUCCESSFULLY GIVEN YOUR VOTE TO MAMTA BANERJEE\n");
//                break;

//            }
//            if(B==2)
//            {
//                vote2++;
//                 printf("\n\n\t\t\t\tYOU HAVE SUCCESSFULLY GIVEN YOUR VOTE TO DEEPA DASMUNSI\n");
//                break;

//            }
//            if(B==3)
//            {
//                vote3++;
//                 printf("\n\n\t\t\t\tYOU HAVE SUCCESSFULLY GIVEN YOUR VOTE TO PROTIMA RAJAK\n");
//                break;

//            }
//            if(B==4)
//            {
//                vote4++;
//                 printf("\n\n\t\t\t\tYOU HAVE SUCCESSFULLY GIVEN YOUR VOTE TO JOYDEB HALDER\n");
//                break;
//            }
//            if(B==5)
//            {
//                vote5++;
//                 printf("\n\n\t\t\t\tYOU HAVE SUCCESSFULLY GIVEN YOUR VOTE TO KARTIK CHANDRA GHOSH\n");
//                break;
//            }
//             if(B!=1||B!=2||B!=3||B!=4||B!=5)
//            {
//            	printf("\n\t\t************* INVALID CHOICE ENTERED**************\t\t\n");
//            	printf("\n\t\t\tENTER AGAIN\t\t\t\n");
// 		   }



//        }
// 	   printf("\n\n**************************THANK YOU***************************\n\n");
// 	   printf("press any key");
// 	   getch();
// }

//  void admin()
//  {
//      int B;
//      printf("\n\n\n\n");
//      printf("\t\t\t\t\tEnter Your Password To Unlock The Admin Panel\n\n");
//      scanf("%d",&B);
//      if(B==3692)
//      {
//          show();

//      }
//      else
//      {
//          printf("Wrong Password\n");
//      }
//  }

//   void show()
//   {
//   	int G;
//       system("cls");

//       printf("\n\n\n\n");
//       printf("\t\t\tPresent Vote Count :\n\n");
//       Sleep(500);
//       printf("\t\t\t  Mamata Banerjee is on     %d Votes\n",vote1);
//       Sleep(500);
//       printf("\t\t\t  Deepa Dasmunsi is on      %d Votes\n",vote2);
//       Sleep(500);
//       printf("\t\t\t  Protima Rajak is on       %d Votes\n",vote3);
//       Sleep(500);
//       printf("\t\t\t  Joydeb Halder  is on      %d Votes\n",vote4);
//       Sleep(500);
//       printf("\t\t\t  Kartik Chandra Ghosh  is on     %d Votes\n\n\n\n",vote5);
//       Sleep(500);


//       printf("\t\t\t\t\tEnter Any Key For Main Logs\n\n\t\t\t\t\t\t\tOR\n\n\t\t\t\t\tENTER THE SPECIAL PASSWORD TO CLOSING VOTING PORTAL\n ");
//     scanf("%d",&G);
//     if(G==1234)
//     exi();
//     else
//     main_logs(start);

//   }

//    void winner()
//    {
//        system("cls");
//        printf("\n\n\n\n");
//        if(vote2<vote1 && vote3< vote1 && vote4<vote1 && vote5<vote1)
//         printf("\t\t\tThe present Winner is Mamata Banerjee and she has got %d votes\n\n\n\n",vote1);

//        if(vote1<vote2 && vote3< vote2 && vote4<vote2 && vote5<vote2)
//         printf("\t\t\tThe present Winner is Deepa Dasmunsi and she has got %d votes\n\n\n\n",vote2);

//         if(vote1<vote3 && vote2< vote3 && vote4<vote3 && vote5<vote3)
//         printf("\t\t\tThe present Winner is Protima Rajak and she has got %d votes\n\n\n\n",vote3);

//         if(vote1<vote4 && vote2< vote4 && vote3<vote4 && vote5<vote4)
//         printf("\t\t\tThe present Winner is Joydeb Halder and he has got %d votes\n\n\n\n",vote4);

//         if(vote1<vote5 && vote2< vote5 && vote3<vote5 && vote4<vote5)
//         printf("\t\t\tThe present Winner is Kartik Chandra Ghosh and he has got %d votes\n\n\n\n",vote5);

//         printf("\t\t\t\tEnter Any Key for Main Log\n\n");
//         getch();
//         main_logs(start);

//    }

//    void stop()
//    {
//        system("cls");

//        printf("\n\n\n\n");
//        printf("\t\t\t (:-SORRY YOU ENTERED WRONG CREDENTIALS FOR THREE(3) TIMES IN A ROW -:) \n\n\n");
//        Sleep(500);
//        printf("\t\t\t Plz try again After A few Moment\n\n\n");
//        Sleep(500);
//        printf("\t\t\t * * *Thank You* * *  \n\n\n");
//        Sleep(500);
//        printf("press any key");
//        getch();

//    }

//    void not_again()
//    {
//         int A;
// 		system("cls");
//         printf("\n\n\n\n");
//         printf("\t\t\t        ***YOU HAVE GIVEN YOUR VOTE SUCCESSFULLY***       \n\n\n");
//         Sleep(300);
//         printf("\t\t\t        ***YOU CANNOT GIVE YOUR VOTE MORE THAN ONCE***     \n\n\n");
//         Sleep(300);
//         printf("\t\t\t If You want to see present winner Enter One(1) or Enter Any Other Key for Main  Logs\n\n");
//         Sleep(300);

//         scanf("%d",&A);
//         if(A==1)
//         {
//             winner();
//         }
//         else
//         {
//             main_logs(start);
//         }

//    }

//    void exi()
//    {
//        system("cls");

//        printf("\n\n\n\n\n");
//        Sleep(500);
//        printf("\t\t\t        ***YOU ARE NOW EXITING THE PORTAL***       \n\n\n");
//        Sleep(1000);
//        printf("\t\t\t * * *Thank You For Using This ONLINE PLATFORM For VOTING* * *  \n\n\n");
//        Sleep(1000);
//        exit(0);
//    }
// node *search(char x[],char y[],char z[],node *start,int *Y)
// {
// 	 *Y=0;
//   node *t,*space;
//   if(start==NULL)
//   {
//       space=(node*)malloc(sizeof(node));
//      strcpy(space->aadhar,x);
//      strcpy(space->name,y);
//      strcpy(space->birth_date,z);

//       start=space;
//       space->next=NULL;

//   }
//   else
//   {
//       t=start;
//       while(t!=NULL)
//        {
//           if((strcmp(t->aadhar,x)==0&& strcmp(t->name,y)==0 &&strcmp(t->birth_date,z)==0))
//           {
//           	*Y=1;

//           	break;
//           }
//               t=t->next;
//     	}

//           if(*Y==0)
//           {

//           	space=(node*)malloc(sizeof(node));

//        		strcpy(space->aadhar,x);

//        		strcpy(space->name,y);

//        		strcpy(space->birth_date,z);
// 	        t=space;
//     	    space->next=NULL;

//     	}
//   }
//   return start;
//  }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct voter_information
{
    char aadhar[20];
    char name[50];
    char birth_date[15];
    struct voter_information *next;
} node;

node *head;
node *space, *start = NULL;
node *search(char x[], char y[], char z[], node *, int *);
node *voter_insert(node *);
node *main_logs(node *);
void admin();
void winner();
void exi();
void voting();
void not_again();
void stop();
void show();

int count = 0, R = 3, vote = 0;
int vote1 = 0, vote2 = 0, vote3 = 0, vote4 = 0, vote5 = 0;

int main()
{
    while (1)
    {
        system("clear"); // For clearing the console on Unix-like systems
        printf("\n\n\n");
        printf("\t            ****** WELCOME TO THE ONLINE VOTING PORTAL ******        \n\n");
        printf("\t           ***************************************************        \n\n\n\n\n");
        printf("        \t\t *****Please Enter One(1) for logging vote main Logs*****    \n\n\n");
        int BB;

        scanf("%d", &BB);
        if (BB == 1)
        {
            start = main_logs(start);
        }
    }
    return 0;
}

node *main_logs(node *start)
{
    system("clear"); // For clearing the console on Unix-like systems
    printf("\n\n\n");
    printf("        \t\t\t1. FOR VOTE ENTRY     \n");
    printf("        \t\t\t2. FOR ADMIN PANEL    \n");
    printf("        \t\t\t3. FOR WINNER         \n");
    printf("    \t IF YOUR CREDENTIALS MATCHES WITH THOSE IN THE VOTER LIST THEN ONLY YOU CAN GIVE YOUR VOTE OTHERWISE YOU CAN NOT    \n\n\n");
    printf("    \t ********So Plz Enter********\n\n\n");
    int T;
    scanf("%d", &T);
    if (T == 1)
    {
        start = voter_insert(start);
    }
    if (T == 2)
    {
        admin();
    }
    if (T == 3)
    {
        winner();
    }
    if (T != 1 || T != 2 || T != 3)
    {
        main_logs(start);
    }

    return start;
}

node *voter_insert(node *start)
{
    FILE *fp;
    fp = fopen("voter_database.txt", "a"); // Open file in append mode

    if (fp == NULL)
    {
        printf("Error opening file.\n");
        exit(1);
    }

    int UNIVERSAL = 0;
    int *z;
    z = &UNIVERSAL;
    node *temp;
    char name[50], birth_date[15], aadhar[20];
    system("clear"); // For clearing the console on Unix-like systems
    printf("\n\n\n\n");
    printf("\t IF AADHAR ID, YOUR NAME AND YOUR DATE OF BIRTH MATCHES THEN YOU CAN GIVE YOUR VOTE OTHERWISE NOT\n\n");
    printf("\t\t\t ID YOU DO WRONG %d TIMES, THE PORTAL WILL BE CLOSED AUTOMATICALLY\n\n\n", R);
    printf("\t\tPlease \n");
    printf("\t\t\tEnter your AADHAR ID number  ");
    fflush(stdin);
    fgets(aadhar, sizeof(aadhar), stdin);
    aadhar[strcspn(aadhar, "\n")] = 0; // Removing trailing newline
    printf("\t\t\tEnter Your NAME   ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0; // Removing trailing newline
    printf("\t\t\tEnter Your BIRTH DATE  in dd-mm-yyyy format");
    fgets(birth_date, sizeof(birth_date), stdin);
    birth_date[strcspn(birth_date, "\n")] = 0; // Removing trailing newline

    // Write to file
    fprintf(fp, "%s %s %s\n", aadhar, name, birth_date);
    fclose(fp);

    temp = (node *)malloc(sizeof(node));
    strcpy(temp->aadhar, aadhar);
    strcpy(temp->name, name);
    strcpy(temp->birth_date, birth_date);
    temp->next = NULL;
    head = temp;

    while (temp != NULL)
    {
        if ((strcmp(temp->aadhar, "10001") == 0 && strcmp(temp->name, "Rajat Kumar") == 0 && strcmp(temp->birth_date, "31-03-1999") == 0) ||
            (strcmp(temp->aadhar, "10002") == 0 && strcmp(temp->name, "Goutam Kumar Bhadani") == 0 && strcmp(temp->birth_date, "01-01-1999") == 0) ||
            (strcmp(temp->aadhar, "10003") == 0 && strcmp(temp->name, "Gautam Kumar") == 0 && strcmp(temp->birth_date, "12-10-1999") == 0) ||
            (strcmp(temp->aadhar, "10004") == 0 && strcmp(temp->name, "Kundan Kumar") == 0 && strcmp(temp->birth_date, "08-12-1999") == 0) ||
            (strcmp(temp->aadhar, "10005") == 0 && strcmp(temp->name, "Aniket Arora") == 0 && strcmp(temp->birth_date, "28-08-1999") == 0) ||
            (strcmp(temp->aadhar, "10006") == 0 && strcmp(temp->name, "Dipika Singh") == 0 && strcmp(temp->birth_date, "20-10-2000") == 0) ||
            (strcmp(temp->aadhar, "10007") == 0 && strcmp(temp->name, "Avinash Kumar") == 0 && strcmp(temp->birth_date, "02-03-1999") == 0) ||
            (strcmp(temp->aadhar, "10008") == 0 && strcmp(temp->name, "Ravi Raj") == 0 && strcmp(temp->birth_date, "26-12-1999") == 0) ||
            (strcmp(temp->aadhar, "10009") == 0 && strcmp(temp->name, "Shubham Kumar") == 0 && strcmp(temp->birth_date, "02-01-1999") == 0) ||
            (strcmp(temp->aadhar, "10010") == 0 && strcmp(temp->name, "Subham Kumar") == 0 && strcmp(temp->birth_date, "03-01-1999") == 0))
        {
            R = 3;
            start = search(temp->aadhar, temp->name, temp->birth_date, start, &UNIVERSAL);

            if (UNIVERSAL == 0)
            {
                voting();
            }
            else
            {
                not_again();
            }
        }
        else
        {
            R--;
            if (R == 0)
            {
                stop();
                break;
            }
            printf("\n");
            printf("\tYour AADHAR ID or NAME or DATE OF BIRTH is wrong\n");
            fflush(stdin);
            start = main_logs(start);
        }
        temp = temp->next;
    }
    return start;
}

void admin()
{
    int B;
    printf("\n\n\n\n");
    printf("\t\t\t\t\tEnter Your Password To Unlock the Admin Panel\n\n");
    scanf("%d", &B);
    if (B == 3692)
    {
        show();
    }
    else
    {
        printf("Wrong Password\n");
    }
}

void show()
{
    int G;
    FILE *fp;
    char voter_info[100];

    system("clear");
    fp = fopen("voter_database.txt", "r"); // Open file in read mode

    if (fp == NULL)
    {
        printf("Error opening file.\n");
        exit(1);
    }

    printf("\n\n\n\n");
    printf("\t\t\tPresent Vote Count :\n\n");
    while (fgets(voter_info, sizeof(voter_info), fp) != NULL)
    {
        printf("\t\t\t%s", voter_info);
    }

    fclose(fp);

    printf("\t\t\t\t\tEnter Any Key For Main Logs\n\n\t\t\t\t\t\t\tOR\n\n\t\t\t\t\tENTER THE SPECIAL PASSWORD TO CLOSING VOTING PORTAL\n ");
    scanf("%d", &G);
    if (G == 1234)
        exi();
    else
        main_logs(start);
}

void winner()
{
    system("clear");
    printf("\n\n\n\n");
    if (vote2 < vote1 && vote3 < vote1 && vote4 < vote1 && vote5 < vote1)
        printf("\t\t\tThe present Winner is Mamata Banerjee and she has got %d votes\n\n\n\n", vote1);

    if (vote1 < vote2 && vote3 < vote2 && vote4 < vote2 && vote5 < vote2)
        printf("\t\t\tThe present Winner is Deepa Dasmunsi and she has got %d votes\n\n\n\n", vote2);

    if (vote1 < vote3 && vote2 < vote3 && vote4 < vote3 && vote5 < vote3)
        printf("\t\t\tThe present Winner is Protima Rajak and she has got %d votes\n\n\n\n", vote3);

    if (vote1 < vote4 && vote2 < vote4 && vote3 < vote4 && vote5 < vote4)
        printf("\t\t\tThe present Winner is Joydeb Halder and he has got %d votes\n\n\n\n", vote4);

    if (vote1 < vote5 && vote2 < vote5 && vote3 < vote5 && vote4 < vote5)
        printf("\t\t\tThe present Winner is Kartik Chandra Ghosh and he has got %d votes\n\n\n\n", vote5);

    printf("\t\t\t\tEnter Any Key for Main Log\n\n");
    fflush(stdin);
    getchar();
    main_logs(start);
}

void stop()
{
    system("clear");

    printf("\n\n\n\n");
    printf("\t\t\t (:-SORRY YOU ENTERED WRONG CREDENTIALS FOR THREE(3) TIMES IN A ROW -:) \n\n\n");
    printf("\t\t\t Plz try again After A few Moment\n\n\n");
    printf("\t\t\t * * *Thank You* * *  \n\n\n");
    fflush(stdin);
    getchar();
}

void not_again()
{
    int A;
    system("clear");
    printf("\n\n\n\n");
    printf("\t\t\t        ***YOU HAVE GIVEN YOUR VOTE SUCCESSFULLY***       \n\n\n");
    printf("\t\t\t        ***YOU CANNOT GIVE YOUR VOTE MORE THAN ONCE***     \n\n\n");
    printf("\t\t\t If You want to see present winner Enter One(1) or Enter Any Other Key for Main  Logs\n\n");
    scanf("%d", &A);
    if (A == 1)
    {
        winner();
    }
    else
    {
        main_logs(start);
    }
}

void exi()
{
    system("clear");

    printf("\n\n\n\n\n");
    printf("\t\t\t        ***YOU ARE NOW EXITING THE PORTAL***       \n\n\n");
    printf("\t\t\t * * *Thank You For Using This ONLINE PLATFORM For VOTING* * *  \n\n\n");
    exit(0);
}

node *search(char x[], char y[], char z[], node *start, int *Y)
{
    *Y = 0;
    node *t, *space;
    if (start == NULL)
    {
        space = (node *)malloc(sizeof(node));
        strcpy(space->aadhar, x);
        strcpy(space->name, y);
        strcpy(space->birth_date, z);

        start = space;
        space->next = NULL;
    }
    else
    {
        t = start;
        while (t != NULL)
        {
            if ((strcmp(t->aadhar, x) == 0 && strcmp(t->name, y) == 0 && strcmp(t->birth_date, z) == 0))
            {
                *Y = 1;

                break;
            }
            t = t->next;
        }

        if (*Y == 0)
        {

            space = (node *)malloc(sizeof(node));

            strcpy(space->aadhar, x);

            strcpy(space->name, y);

            strcpy(space->birth_date, z);
            t = space;
            space->next = NULL;
        }
    }
    return start;
}
