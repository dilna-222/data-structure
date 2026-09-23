#include<stdio.h>
#include<stdlib.h>                                                                                                   
#define SIZE 10
int stk[SIZE];
int sp=-1;
void main()
{
void push(int);
int pop();
void print();
int opt,item;
do{
printf("\n 1.Push\n 2.Pop\n 3.Display\n 4.Exit\n");
printf("Enter your choice:");
scanf("%d",&opt);
switch(opt)
{
case 1:
printf("Enter your item: ");
scanf("%d",&item);
push(item);
break;
case 2: 
item=pop();
if(item!=-9)
printf("Popped value=%d\n",item);
break;
case 3:
print();
break;
case 4:
exit(0);
}
}
while(1);
}

//function to push an item
void push(int x)
{
if (sp==SIZE-1)
{
printf("Stack is full");
return;
}
else
stk[++sp]=x;
return;
}
//function pop
int pop()
{
if (sp==-1)
{
printf("Stack is empty");
return -9;
}
else 
return stk[sp--];
}
//function to display the elements
void print()
{
int i;
if(sp!=-1){
for(i=sp;i>=0;i--)
printf("%d\t",stk[i]);
}
else{
printf("stack is empty...\n");
return;
}
}
