#include <stdio.h>
int binarysearch(int a[], int n,int x)

{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(a[mid]==x)
         return mid;
        else
         if(a[mid]>x)
          end=mid-1;
         else
          start=mid+1;
    }
    return -1;
    
}

int main() 

{
    int a[100],n,i,mid;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    printf("enter the number in sorted order\n");
    for( i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the element to search:");
    int x;
    scanf("%d",&x);
    int index=binarysearch(a,n,x);
    if(index==-1)
	 printf("the element %d is not found ",x);
	 else
	 printf("the element %d is not found at the index %d",x,index);
    
      
    
    
    
}
