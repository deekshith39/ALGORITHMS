#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 100
int g[1000][1000];
int visited[1000];
//void display();
int rear=-1;
int front=-1;
int que[MAX];
void enqueue(int a);
void dequeue();
int peek();
int isempty();
void main()
{
   int v,e,x,y;
   printf("enter the no. of edges and vertices ");
   scanf("%d",&e);
   scanf("%d",&v);
   printf("\nenter end points of the edges");
   while(e--)
   {
       scanf("%d%d",&x,&y);//scanning for the edges which are present

       g[x][y]=1;
   }
   printf("enter the start vertex : ");
   scanf("%d",&x);
   visited[x]=1;//true-1
   enqueue(x);
   while(isempty()!=1)
   {
       x=peek();
       dequeue();
       printf("%d ",x);
       for(int i=1;i<=v;i++)
       {
           if((g[x][i]==1)&&(visited[i]!=1))
           {
               enqueue(i);
               visited[i]=1;
           }
       }

   }
}
void enqueue(int a)
{
    if(rear==MAX)
        printf("full");
    else
    {
        if(front=-1)
            front=0;
        rear=rear+1;
        que[rear]=a;
    }

}
void dequeue()
{ int item;
    if(front==-1)
        printf("empty");
    else
    {
        item=que[front];
        front=front+1;
    }
}
int isempty()
{
    if((front==-1)||(front>rear))
        return 1;
    else
        return 0;
}
int peek()
{
    return que[front];

}
/*void display()
{
int i;
if(front==-1)
{printf("empty\n");
}
else
{
for(i=front;i<=rear;i++)
{
printf("%d",que[i]);
printf("\n");
}
}
}*/

