//Newton Raphson
#include<stdio.h>
#include<math.h>
#define eps 0.001
double f(double x)
{
    return 3*x*x*x -2*x*x-1;
}
double derv(double x)
{
    return 9*x*x-4*x;
}

void Newton(double x)
{
    int count =1,itr;
    printf("Enter the number of iterations\n");
    scanf("%d",&itr);
    double h = f(x)/derv(x);
    while(count<=itr)
    {
        double h = f(x)/derv(x);
        x=x-h;
        printf("The root after %d iterations is %lf\n",count,x);
        count++;
    }
    if(fabs(h)>eps)
    {
        printf("The root value is %lf",x);
    }
}
int main()
{
    double a,b,x;
    a=-1,b=2;
    if(f(a)*f(b)>0)
    {
        printf("Wrong Interval\n");
        return 0;
    }
    
    if(f(a)*f(b)<0)
    {
       if(fabs(f(a)-0)>fabs(f(b)-0))
        x=a;
        else 
        x=b;
    }
    Newton(x);
}

