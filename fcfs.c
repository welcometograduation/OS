#include<stdio.h>
#include<stdlib.h>
void main(){
    int i,n,req[20],init,total=0;
    printf("Enter total disk requests : \n");
    scanf("%d",&n);
    printf("Enter disk request queue : \n");
    for (i=0;i<n;i++)
        scanf("%d",&req[i]);
    printf("Enter initial head position : \n");
    scanf("%d",&init);
    for (i=0;i<n;i++){
        total+=abs(req[i]-init);
        init=req[i];
    }
    printf("Total head movements : %d\n",total);
}