#include<stdio.h>
#include<stdlib.h>
void main(){
    int i,j,n,av[10],all[10][10],max[10][10],need[10][10],r;
    printf("Enter number of resources : ");
    scanf("%d",&r);
    printf("Enter number of processes : ");
    scanf("%d",&n);
    printf("Enter Allocation MAtrix : ");
    for (i=0;i<n;i++)
        for (j=0;j<r;j++)
            scanf("%d",&all[i][j]);
    printf("Enter MAx Marix : ");
    for (i=0;i<n;i++)
        for (j=0;j<r;j++)
            scanf("%d",&max[i][j]);
    // printf("Enter total available resources : ");
    // for (i=0;i<n;i++)
    //     scanf("%d",&av[i]);
    printf("Allocation Matrix : \n");
    for (i=0;i<n;i++){
        for (j=0;j<r;j++)
            printf("%d ",all[i][j]);
        printf("\n");
    }
    printf("Max Matrix : \n");
    for (i=0;i<n;i++){
        for (j=0;j<r;j++)
            printf("%d ",max[i][j]);
        printf("\n");
    }
    printf("Need matrix : \n");
    for (i=0;i<n;i++){
        for (j=0;j<r;j++){
            need[i][j]=max[i][j]-all[i][j];
            printf("%d ",need[i][j]);
        }
        printf("\n");
    }
}