// cpp program for the bisection formulae
#include<stdio.h>
#include<math.h>
#include<conio.h>
#define EPSILON 0.01
double function(double num)
{
    return num*num+2*num-5;
}
void bisection(double a,double b)
{
    int count=1;
    int iterate;
    if(function(a)*function(b)>=0)
    {
        printf("you have entereed the wrong interval");
        return;
    }
    printf("enter the number of iterations you really want to perform : ");
    scanf("%d",&iterate);
    printf("the entered interval is (%2lf,%2lf)",a,b);
    double c=a;
    while(count<=iterate)
    {
        c=(a+b)/2;
        if(function(c)==0.0)break;
        printf("the root after %d iterations is %lf",count,c);
        if(function(c)*function(a)<0)
        b=c;
        else 
        a=c;
        count++;
    }
    if((b-a)>=EPSILON)
    {
        printf("After the %d iterations the root = %lf \n ",iterate,c);
    }
    
    
}
int main()
{
    double a,b;
    printf("enter the initial intervals for the equations");
    scanf("%lf%lf",&a,&b);
    bisection(a,b);
    return 0;
}
