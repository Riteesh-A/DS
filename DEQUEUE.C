#include<stdio.h>
#include <conio.h>
#include <process.h>
#define qsize 3

int f=0, r=-1, ch;
int item, q[10];

int isFull()
{
return(r == qsize - 1)?1:0;
}

int isEmpty(int f, int r)
{
return(f>r)?1:0;
}

void insert_rear()
{
 if(isFull(r))
  {
   printf("queue overflow \n");
   return;
  }
 r = r + 1;
 q[r] = item;
}

void delete_front()
{
 if(isEmpty(f,r))
  {
   printf("queue empty \n");
    return;
  }
  printf("item deleted is %d \n", q[(f)++]);
   if(f>r)
    {
    f = 0;
    r = -1;
    }
}

void insert_front()
{
 if(f != 0)
   {
    f= f-1;
    q[f] = item;
    return;
   }
   else if ((f == 0)&&(r == -1))
   {
    q[++(r)] = item;
    return;
   }
   else
    printf("insertion not possible \n");
}

void delete_rear()
 {
  if(isEmpty(f,r))
   {
    printf("queue is empty\n");
    return;
   }
  printf("item deleted is %d\n", q[(r)--]);
  if(f>r)
    {
     f = 0;
     r = -1;
    }
  }

 void display()
  {
   int i;
   if(isEmpty(f,r))
    {
     printf("queue is empty\n");
     return;
    }

   for (i = f; i<= r; i++)
   printf("%d\n", q[i]);
  }

 void main()
 {
  clrscr();
  for(;;)
  {
   printf("\n1:insert_rear\n2:insert_front\n3:delete_rear\n4:delete_front\n5:display\n6:exit\n");
   printf("Enter choice\n");
   scanf("%d", &ch);
   switch(ch)
    {
     case 1 : printf("Enter the item\n");
	      scanf("%d", &item);
	      insert_rear();
	      break;
     case 2 : printf("Enter the item\n");
	      scanf("%d", &item);
	      insert_front();
	      break;
     case 3 : delete_rear();
	      break;
     case 4 : delete_front();
	      break;
     case 5 : display();
	      break;

	      default:exit(0);

	      }
     }
   }