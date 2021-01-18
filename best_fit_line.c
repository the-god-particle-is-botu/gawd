#include <stdio.h>

int main() { 
  

    int i,k;
    float x[k],xavg=0,X[k],sx[i],sxs=0,dj[i],djs=0;
    float y[k],yavg=0,Y[k];
    printf("enter the no of elements required\n");
    scanf("%d",&k);
    printf("enter the values of x \n");
    for(i=0;i<k;i++)
    {
       scanf("%f",&x[i]);
        }
    
    for(i=0;i<k;i++)
   { xavg=xavg+x[i];}
     xavg=xavg/k;
   
    printf(" the average of x is %f\n",xavg);
   printf("the values of (x - xavg) are \n");
    for(i=0;i<k;i++)
    
       { X[i]=x[i]-xavg;
        printf("%f\n",X[i]);}
        printf("the values of (x - xavg)^2 are\n");
        for(i=0;i<k;i++)
    {
        sx[i]=X[i]*X[i];
        printf("%f\n",sx[i]);
    }
    for(i=0;i<k;i++)
       { sxs=sxs+sx[i];}
    printf(" the summation of all (x - xavg)^2 is %f\n",sxs);
    
    
    {
    printf("enter the values of y \n");
    for(i=0;i<k;i++)
    {
       scanf("%f",&y[i]);
        }
    
    for(i=0;i<k;i++)
   { yavg=yavg+y[i];}
     yavg=yavg/k;
   
    printf("the average value of y is %f\n",yavg);
   printf("the values of (y - yavg) are\n");
    for(i=0;i<k;i++)
    
       { Y[i]=y[i]-yavg;
        printf("%f\n",Y[i]);}  
    
    
    
}printf("the values of (x - xavg)*(y - yavg) are\n");
for(i=0;i<k;i++)
{dj[i]= X[i] * Y[i];
printf("%f\n",dj[i]);}
for(i=0;i<k;i++)
{djs=djs + dj[i];}
printf(" the summation of all (x - xavg)*(y - yavg) is %f\n",djs);


return 0;
}
