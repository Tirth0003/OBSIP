#include<iostream>
#include<conio.h>
#define max 5
int a[max],top=-1;
void push();
void pop();
void display();
int main()
{
     int ch;
     printf("1.push or insert\n");
     printf("2.pop or delete \n");
     printf("3.display \n");
     printf("4.end program");
     while(1)
     {
        printf("\n enter choise");
        scanf("%d",&ch);
        switch(ch)
        {

        
        case 1:
    {
        push();
        break;
    }
    case 2:
    {
        pop();
        break;
    }
    case 3:
    {
        display();
        break;

    }
    case 4:
    {
         exit();
         break;
    }
    default:
    {
        printf("wrong choise");
    }
    }
}
}