#include <stdio.h>
int main() {
 
	int a[10],i,pos,element,n=8;
	printf("enter the element in array");
	for(int i=0; i<n; i++){
	
		scanf("%d",&a[i]);
	}
		printf("Enter position");
	scanf("%d",&pos);
	    printf("enter element");
	scanf("%d",&element);
	for (i=n;i>pos-1;i--){
	  a[i]=a[i-1];
	}
	a[pos]=element;
	n++;
	printf("Array after insertion");
	
	for(i=0;i<10;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}   
    
