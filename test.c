#include<stdio.h>
int main(){
int n,new,p;
printf("Enter the number of elements for the array: ");
scanf("%d",&n);

int array[n];
for(int i=0;i<n;i++){
		      printf("%d element= ",i);
		      scanf("%d",&array[i]);
                     }

printf(" The array is: ");
for(int i=0;i<n;i++){
		      printf("%d ",array[i]);
                     }
printf("\n");
printf("Enter the new element: ");
scanf("%d",&new);

printf("Enter the position: ");
scanf("%d",&p);

for(int i=n;i>=p;i--){
		   array[i]=array[i-1];
		  }
array[p-1]=new;
printf(" The array is: ");
for(int i=0;i<=n;i++){
		      printf("%d ",array[i]);
                     }

return 0;
}