#include <stdio.h>
#
#Buuble Sort algorithm
#begin BubbleSort(list)
#
#   for all elements of list
#      if list[i] > list[i+1]
#         swap(list[i], list[i+1])
#      end if
#   end for
#   
#   return list
#   
#end BubbleSort

int main(){

int a[100],c,n,d,swap;
printf("\nPlease enter the no of element: ");
scanf("%d",&n);

for(c=0;c<n;c++)
	scanf("%d",&a[c]);

for(c=0;c<n-1;c++)
 for(d=0;d<n-c-1;d++)
   {
       if(a[d]>a[d+1]){
	  swap=a[d];
	  a[d]=a[d+1];
	 a[d+1]=swap;
	}
			
  } 
	
for(c=0;c<n;c++)
 printf("%d",a[c]);

return 0;
}
