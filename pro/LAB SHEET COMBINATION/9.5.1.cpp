

#include<stdio.h>
#include<conio.h>
struct TIME
{
    int hour;
    int minutes;
    int seconds;
}s[4];
void time(struct TIME s[])
{
    int i;
    s[2].hour=s[0].hour + s[1].hour; 
    s[2].minutes=s[0].minutes + s[1].minutes; 
    s[2].seconds=s[0].seconds + s[1].seconds; 
    if(s[2].minutes>60)
    {
        s[2].minutes = s[1].minutes + s[0].minutes - 60;
        s[2].hour++;
    }
    if(s[2].seconds>60)
    {
        s[2].seconds = s[1].seconds + s[0].seconds - 60;
        s[2].minutes++;
    }
    s[3].hour = s[1].hour-s[0].hour; 
    s[3].minutes=s[1].minutes - s[0].minutes; 
    s[3].seconds=s[1].seconds - s[0].seconds; 
    if(s[3].minutes<0)
    {
        s[3].minutes = s[1].minutes + 60 - s[0].minutes;
        s[3].hour--;
    }
    if(s[3].seconds<0)
    {
        s[3].seconds = s[1].seconds + 60 - s[0].seconds;
        s[3].minutes--;
    }
    // s[2] has added time
    // s[3] has subctracted time
    for(i=2;i<4;i++)
    {
        printf("%d\t:\t%d\t:\t%d\n",s[i].hour,s[i].minutes,s[i].seconds);
    }
}
int main()
{
    int i;
    for(i=0;i<2;i++)
    {
        printf("Enter time %d:\n",i+1);
        scanf("%d%d%d",&s[i].hour,&s[i].minutes,&s[i].seconds);
    }
    time(s);
    getch();
    return 0;
}

