#include<stdio.h>
#include<math.h>
// Write a C program to find A.M. G.M. and H.M. of Numbers given by user.
int main()
{
    int i,n,a[1000];
    float G=0.0,am=0.0,gm=1.0,hm=1.0;
    printf("Enter the limit here: ");
    scanf("%d",&n);
    printf("\n Enter %d number here: ",n);
    for(i=0;i<n;i++)
    {
        printf("\n Enter number %d : ",i+1);
        scanf("%d",&a[i]);
        am=am+a[i];
        gm=gm*a[i];
        hm=hm+1/a[i];
    }
    G=pow(gm,1.0/n);
    printf("\n Arithmatic mean is= %f",am/n);
    printf("\n Geomatric mean is= %f",G);
    printf("\n Harmonic mean is= %f",hm/n);
    return 0;
}