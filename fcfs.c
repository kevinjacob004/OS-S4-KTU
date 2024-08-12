#include<stdio.h>
#include<math.h>
void main()
{
	int a[20],n,l=0,i,j;
	printf("Enter the range: ");
	scanf("%d",&n);
	printf("Enter the header position: ");
	scanf("%d",&a[0]);
	printf("Enter the track:\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The disk is moved from:\n");
	for(j=0;j<n;j++)
	{
		i=abs(a[j+1]-a[j]);
		l=l+i;
		printf("The disk is moved from %d to %d with seek time %d.\n",a[j],a[j+1],i);
	}
	printf("The total head movement is: %d \n",l);
}
