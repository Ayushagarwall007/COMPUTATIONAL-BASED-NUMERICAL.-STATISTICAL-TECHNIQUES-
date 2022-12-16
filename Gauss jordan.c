//Guass Elimination
#include<stdio.h>
#include<math.h>
int main()
{
    int n = 3;
   float a[3][4]={{1,1,19,9},{2,-3,4,13},{3,4,5,40}};
    float p,s;
    float x[3];
    for(int k = 0;k<n;k++)
    {
        for(int i = k+1;i<n;i++)
        {
            p=a[i][k]/a[k][k];
            for(int j = k;j<=n;j++)
            {
                a[i][j]=a[i][j]-(p*a[k][j]);
            }
        }
    }
    
    for(int i= 0;i<n;i++)
    {
        for(int j = 0;j<=n;j++)
        {
            printf("%f ",a[i][j]);
        }
        printf("\n");
    }
    
    x[n-1]=a[n-1][n]/a[n-1][n-1];
    for(int i = n-2;i>=0;i--)
    {
        s=0;
        for(int j = i+1;j<n;j++)
        {
            s+=(a[i][j]*x[j]);
            x[i]=(a[i][n]-s)/a[i][i];
        }
    }
    
    for(int i= 0;i<n;i++)
    {
        printf("%f\n",x[i]);
    }
}
