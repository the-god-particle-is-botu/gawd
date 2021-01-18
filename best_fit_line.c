#include <stdio.h>
#include<stdlib.h>
int main() 
{ 
    int i,k;
    printf("enter the no of elements required\n");
    scanf("%d",&k);

    float xavg=0,sxs=0,djs=0;
    float yavg=0;
    float* X = (float*)malloc(k*sizeof(float));
    float* Y = (float*)malloc(k*sizeof(float));
    float* x = (float*)malloc(k*sizeof(float));
    float* y = (float*)malloc(k*sizeof(float));
    float* sx =(float*)malloc(k*sizeof(float));
    float* dj =(float*)malloc(k*sizeof(float));
    printf("enter the values of x \n");
    for(i=0;i<k;i++)
    {
       scanf("%f",&x[i]);
       xavg+=x[i];
    }
    xavg=xavg/k;
    printf("the average of x is %f\n\n",xavg);
    printf("the values of (x - xavg) are \n");
    for(i=0;i<k;i++)
    { 
        X[i]=x[i]-xavg;
        sx[i]=X[i]*X[i];
        sxs+=sx[i];
        printf("\t%f\n",X[i]);
    }
    printf("\nthe values of (x - xavg)^2 are\n");
    for(i=0;i<k;i++)
    {
      printf("\t%f\n",sx[i]);
    }
    printf("\nthe summation of all (x - xavg)^2 is %f\n",sxs);
    printf("\n------------------------------------------------\n");
        printf("enter the values of y \n");
        for(i=0;i<k;i++)
        {
           scanf("%f",&y[i]);
           yavg+=y[i];
        }
        yavg=yavg/k;
        printf("the average value of y is %f\n",yavg);
        printf("the values of (y - yavg) are\n");
        for(i=0;i<k;i++)
        { 
            Y[i]=y[i]-yavg;
            printf("\t%f\n",Y[i]);
        } 
    printf("\n------------------------------------------------\n");
    printf("\nthe values of (x - xavg)*(y - yavg) are\n");
    for(i=0;i<k;i++)
    {
          dj[i]= X[i] * Y[i];
          djs=djs + dj[i];
          printf("\t%f\n",dj[i]);
    }
    printf("\nthe summation of all (x - xavg)*(y - yavg) is %f\n",djs);
    return 0;
}
