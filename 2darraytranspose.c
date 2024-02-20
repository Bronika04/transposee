#include<stdio.h>
int main(){
    int r;
    printf("Enter the number of rows:");
    scanf("%d",&r);
    int c;
    printf("Enter the number of columns:");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           // printf("Enter the elements");
            scanf("%d", &arr[i][j]);
        }
    }
    int brr[c][r];
    printf("\n");
    for(int i=0;i<c;i++){
        for(int j =0;j<r;j++){
            printf("%d", arr[j][i]);// not store in other array just print
          //   brr[i][j] = arr[j][i]; store in another array then print
        }
        printf("\n");
    }
    //print brr 
   /* for(int i=0;i<c;i++){
        for(int j =0;j<r;j++){
            printf("%d", brr[j][i]);
        }
    }*/
        
    
    return 0;
}