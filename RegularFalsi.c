/* author - AYUSH AGARWAL
    TOPIC - REGULAR FALSI
    */
    
    
#include<stdio.h>
#include<conio.h>
#define EPSILON 0.00001
double func(double x)
{
    return x*x*x-2*x-2;
}

void regularFalsi(double a, double b)
{
    int count =1;
    int iterate;
    if(func(a)*func(b)>0) 
    {
        printf("You have not assumed the right intervals");
        return;
    }
    
    
    printf("enter the number of iterations you want to perform");
    
        scanf("%d",&iterate);
        if(func(a)*func(b)==0)
        printf("the roots the equation are :%lf,%lf",a,b);
        else
        {
            double c,prev;
            while(count<=iterate)
            {
                prev=c;
                c=(a*func(b)-b*func(a))/(func(b)-func(a));
                if(func(c)==0) break;
                printf("\n the root after %d iterations is %lf .\n",count,c);
                if(func(c)*func(a)<0)
                b=c;
                else 
                a=c;
                
                count++;
            }
            if(fabs(func(c)-func(prev))>EPSILON)
            {
                printf("the value of the root is %lf",c);
            }
        }
        
    
}

int main()
{
    double a,b;
    
    printf("Enter the interval for the equation");
    scanf("%lf%lf",&a,&b);
    
    regularFalsi(a,b);
    return 0;
}
