#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 101

int array[MAX_SIZE],top=-1,store;

int get_top()
{
    return array[top];
}

int is_full()
{
    if(top == MAX_SIZE)
    {
        printf("stack is full..!\n\n");
        return 1;
    }
    else{
        printf("stack is not full\n\n");
        return 0;
    }
}

int is_empty()
{
    if(top==-1)
    {
        printf("stack is empty\n\n");
        return 1;
    }
    else{
        printf("stack is not empty\n\n");
        return 0;
    }

}

void push(int x)
{
    if(top==MAX_SIZE-1)
    {
        printf("stack is already full...!\n\n");
        return;
    }
    else{
        top = top + 1;
        array[top] = x;
    }
}
int pop()
{
    if(top==-1)
    {
        printf("stack is already empty...!\n\n");
        return 0;
    }
    else{
        store = array[top];
        top = top - 1;
        return store;
    }
}
void show()
{
    int i;
    printf("\n\nstack : ");
    for(i=0;i!=top+1;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
}
int main()
{
   printf("****   stack Implementation using array  ****\n");
    do{
        int choice,data;
        printf("\n\n_______________________________________________________________________________\n\n\n\n");
        printf("-> push : press 1\n-> pop : press 2\n-> get top element : press 3\n-> checking for underflow : press 4\n-> checking for overflow : press 5\n-> show list : press 6\n-> To end programm : press 7\n");
        printf("\n\nenter choice > ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("\n\nEnter data > ");
                    scanf("%d",&data);
                    push(data);
                    break;
            case 2: printf("\n\nelement deleted > %d",pop());
                    break;
            case 3: printf("\n\ntop element > %d",get_top());
                    break;
            case 4: is_empty();
                    break;
            case 5: is_full();
                    break;
            case 6: show();
                    break;
            case 7: printf("\n\nprogram terminated successfully !\n\n");
                    printf("_______________________________________________________________________________\n\n\n");
                    exit(0);
            default: printf("\n\noops...! wrong input");

        }
    }while(1);
   return 0;
}
