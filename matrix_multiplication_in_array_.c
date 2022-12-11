#include<stdio.h>
int main(){
  int arr[3][3],n,i,j,k[3][3],m[3][3] ;


  printf("enter array :\n");
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      scanf("%d",&arr[i][j]);
    }
  }


printf("1 st matrix :\n");
   for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      printf("%d  ",arr[i][j]);
    }
    printf("\n");
  }
// second matrix
printf("enter second matrix :\n");
 for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      scanf("%d",&k[i][j]);
    }
  }

printf("2 nd matrix \n");
 for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      printf("%d ",k[i][j]);
    }
    printf("\n");
  }

 for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      m[i][j] = arr[i][j]*k[i][j];
    }
  }  
printf("matrix into \n");
   for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      printf("%d ",m[i][j]);
    }
     printf("\n");
  }
}
