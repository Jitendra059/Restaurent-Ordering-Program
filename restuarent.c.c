#include <stdio.h>			//header files
#include <ctype.h>
#include <windows.h>
#include <stdlib.h>
int headcount=0;
struct slist
{
	int cno;
	char choice;
	int option;
	int quantity;
	float total;
	struct slist *next;	
};
typedef struct slist node;
node *head=NULL,*start;

void bfast(node*);		// prototype's
void lunch(node*);
void dinner(node*);
void m_m(); 
void exit();
void create();
int num;		//global variable
float price;
char choice;
int again;

void main()
{
	create();
	getch();
}

void create()
{
 if(headcount==0)
 {
 	node *new1;
 	new1=(node*)malloc(sizeof(node));
 	m_m();
 	head=new1;
 	new1->next=NULL;
 	headcount++;
 }
 else
 {
 	
	 node *new1,*start;
	 start=head;
 	while(start->next!=NULL)
 	start=start->next;
	 new1=(node*)malloc(sizeof(node));
 	m_m();
 	start->next=new1;
 	new1->next=NULL;
 	
 }
} 
 
void m_m()  // main menu screen
{
	node *new1;
	
  printf("                Welcome to Jitendra Restaurant.          \n ");
  printf("               +============================+          \n\n");
  printf("  && Please select the meal that you would like to purchase. && \n\n");
  printf("\t\t      [A] Breakfast\n");
  printf("\t\t      [B] Lunch\n");
  printf("\t\t      [C] Dinner\n");
  printf("\t\t      [D] Exit\n\n");
  printf("Enter your choice here : ");
  scanf("%c", &new1->choice);
	switch(new1->choice)
	{
	  case 'a':
	  	bfast(new1);
	  	break;
	  case 'b':
	  	lunch(new1);
	  	break;
	  case 'c':
	  	dinner(new1);
	  	break;
	  case 'd':
	  	exit(0);
		  break;
	  	default:
	  		printf("\n Invalid press");
	  		break;

	}
  
getch();
}
void bfast( node *new2) //Breakfast Menu Screen 
{
   int again = 0;   //local variables
  
  fflush(stdin);
  printf("                 --  Breakfast Menu  -- \n\n");
  printf("  && Please select the food that you would like to purchase. && \n\n");
  printf("\t\t   [1] Toast - Rs 10\n");
  printf("\t\t   [2] Egg omlete - Rs 15\n");
  printf("\t\t   [3] Corn flakes - Rs 20\n");

  
  printf("Enter your choice here : ");
  scanf("%d",&new2->option);
  switch(new2->option)
  {
  	case 1:	  
	  printf("Enter quantity : ");
	  scanf("%d", &new2->quantity);
	  new2->total = 10 * new2->quantity ;
	   printf("Your total amount is Rs%.2f , Please pay at the counter\n\n\n ",new2->total); 
	   printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
			scanf("%d", &again);
			system("cls");
		
			 if (again == 1 )
				bfast(new2);
			 else 
				 if (again == 2 )
					m_m();
			else
				if (again != 1 , 2)
				{
				 printf("\n\n\t\tWrong input provided\n\n\n\n");
				  printf("Press enter to continue");
				 getch();
				   system("cls");

				 bfast(new2);
			}
	break;
	case 2:	  printf("Enter quantity : ");
		  scanf("%d", &new2->quantity);
		  new2->total = 15 * new2->quantity ;
		  printf("Your total amount is Rs%.2f , Please pay at the counter\n\n\n ",new2-> total);
		    printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
			scanf("%d", &again);
			system("cls");
		
			 if (again == 1 )
				bfast(new2);
			 else if (again == 2 )	
				m_m();
			else
				if (again != 1 , 2)
				{
				 printf("\n\n\t\tWrong input provided\n\n\n\n");
				  printf("Press enter to continue");
				 getch();
				   system("cls");

				 bfast(new2);
				 
		  }
		       break;
		case 3:printf("Enter quantity : ");
			  scanf("%d", &new2->quantity);
			  new2->total = 20 * new2->quantity ;
			  printf("Your total amount is Rs%.2f , Please pay at the counter\n\n\n ",new2->total); 
		       printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
			   scanf("%d", &again);
			   system("cls");
		
			  if (again == 1 )
				{
				bfast(new2);
				 }
			  else 
				  if (again == 2 )
				{	
				m_m();
				}
				else
				    if (again != 1 , 2)
					{
					 printf("\n\n\t\tWrong input provided\n\n\n\n");
					  printf("Press enter to continue");
				 getch();
					   system("cls");

					 bfast(new2);
				}
				 break;
				 
		
			default:
					printf("\n\n\t\t   Invalid Choice Entered\n\n");
						 printf("Press enter to continue");
				 getch();
						  system("cls");

						bfast(new2);
			 
    }			
  }

void lunch(node *new2) // Lunch Screen Menu
{
  int again; //local variables
  printf("                   --  Lunch Menu  -- \n\n");
  printf("  && Please select the food that you would like to purchase. && \n\n");
  printf("\t\t   [1] Fried Rice - Rs 40\n");
  printf("\t\t   [2] Chapati- Rs 40\n");
  printf("\t\t   [3] Chicken Curry with Rice - Rs 50\n");

    
  printf("Enter your choice here : ");
  scanf("%d", &new2->option);
    switch(new2->option)
  {
  	case 1:	  printf("Enter quantity : ");
	  scanf("%d", &new2->quantity);
	  new2->total = 40 * new2->quantity ;
	   printf("Your total amount is Rs%.2f , Please pay at the counter\n\n\n ",new2->total); 
	   printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
			scanf("%d", &again);
			system("cls");
		
			 if (again == 1 )
				lunch(new2);
			 else 
				 if (again == 2 )
					m_m();
			else
				if (again != 1 , 2)
				{
				 printf("\n\n\t\tWrong input provided\n\n\n\n");
				  printf("Press enter to continue");
				 getch();
				   system("cls");

				 lunch(new2);
			}
				 break;
	case 2:	  printf("Enter quantity : ");
		  scanf("%d", &new2->quantity);
		  new2->total = 40 * new2->quantity ;
		  printf("Your total amount is Rs%.2f , Please pay at the counter\n\n\n ",new2-> total);
		    printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
			scanf("%d", &again);
			system("cls");
		
			 if (again == 1 )
				lunch(new2);
			 else if (again == 2 )	
				m_m();
			else
				if (again != 1 , 2)
				{
				 printf("\n\n\t\tWrong input provided\n\n\n\n");
				  printf("Press enter to continue");
				 getch();
				   system("cls");

				 lunch(new2);
				 
		  }
		       break;
		case 3:printf("Enter quantity : ");
			  scanf("%d", &new2->quantity);
			  new2->total = 50 * new2->quantity ;
			  printf("Your total amount is Rs%.2f , Please pay at the counter\n\n\n ",new2->total); 
		       printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
			   scanf("%d", &again);
			   system("cls");
		
			  if (again == 1 )
				{
				lunch(new2);
				 }
			  else 
				  if (again == 2 )
				{	
				m_m();
				}
				else
				    if (again != 1 , 2)
					{
					 printf("\n\n\t\tWrong input provided\n\n\n\n");
					  printf("Press enter to continue");
				 getch();
					   system("cls");

					 lunch(new2);
				}
				 break;
				 
		
			default:
					printf("\n\n\t\t   Invalid Choice Entered\n\n");
						 printf("Press enter to continue");
				 getch();
						  system("cls");

						lunch(new2);
			 
    }			
  }

void dinner(node *new2) // Dinner Menu Screen
{
  int again; //local variables
  printf("                    --  Dinner Menu  -- \n\n");
  printf("  && Please select the food that you would like to purchase. && \n\n");
  printf("\t\t   [1] Chicken Soup - Rs 65\n");
  printf("\t\t   [2] Noodeles - Rs 55\n");
  printf("\t\t   [3] Chicken Burger - Rs 30\n");

    
  printf("Enter your choice here : ");
  scanf("%d", &new2->option);
    switch(new2->option)
  {
  	case 1:	  printf("Enter quantity : ");
	  scanf("%d", &new2->quantity);
	  new2->total = 65 * new2->quantity ;
	   printf("Your total amount is Rs%.2f , Please pay at the counter\n\n\n ",new2->total); 
	   printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
			scanf("%d", &again);
			system("cls");
		
			 if (again == 1 )
				dinner(new2);
			 else 
				 if (again == 2 )
					m_m();
			else
				if (again != 1 , 2)
				{
				 printf("\n\n\t\tWrong input provided\n\n\n\n");
				  printf("Press enter to continue");
				 getch();
				   system("cls");

				 dinner(new2);
			}
				 break;
	case 2:	  printf("Enter quantity : ");
		  scanf("%d", &new2->quantity);
		  new2->total = 55 * new2->quantity ;
		  printf("Your total amount is Rs%.2f , Please pay at the counter\n\n\n ",new2-> total);
		    printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
			scanf("%d", &again);
			system("cls");
		
			 if (again == 1 )
				dinner(new2);
			 else if (again == 2 )	
				m_m();
			else
				if (again != 1 , 2)
				{
				 printf("\n\n\t\tWrong input provided\n\n\n\n");
				  printf("Press enter to continue");
				 getch();
				   system("cls");

				 dinner(new2);
				 
		  }
		       break;
		case 3:printf("Enter quantity : ");
			  scanf("%d", &new2->quantity);
			  new2->total = 30 * new2->quantity ;
			  printf("Your total amount is Rs%.2f , Please pay at the counter\n\n\n ",new2->total); 
		       printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
			   scanf("%d", &again);
			   system("cls");
		
			  if (again == 1 )
				{
				dinner(new2);
				 }
			  else 
				  if (again == 2 )
				{	
				m_m();
				}
				else
				    if (again != 1 , 2)
					{
					 printf("\n\n\t\tWrong input provided\n\n\n\n");
					  printf("Press enter to continue");
				 getch();
					   system("cls");

					 dinner(new2);
				}
				 break;
	
			default:
					printf("\n\n\t\t   Invalid Choice Entered\n\n");
						 printf("Press enter to continue");
				 getch();
						  system("cls");

						dinner(new2);
			 
    }			
}





