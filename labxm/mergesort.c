#include<stdio.h>
void main()
{
	int i,j,k=0,m,n;
	printf("Enter the size of first array: ");
	scanf("%d",&m);
	printf("Enter the size of second array: ");
	scanf("%d",&n);
	int arr1[m], arr2[n],res[m+n];
	
	printf("Enter the elements of first Array: ");
	for(i=0;i<=m-1;i++)
	{
		scanf("%d",&arr1[i]);
	}
        printf("The elements in the first array is");
	for(i=0;i<=m-1;i++)
	{
		printf("%d\n",arr1[i]);
	}
	printf("Enter the elements of second Array: ");
	for(j=0;j<=n-1;j++)
	{
		scanf("%d",&arr2[j]);
	}
         printf("The elements in the Second array is");
	for(j=0;j<=n-1;j++)
	{
		printf("%d\n",arr2[j]);
	}
	i=0;
	j=0;
	while((i<m)&&(j<n))
	{
		if ((arr1[i])<(arr2[j]))
		{
			res[k]=arr1[i];
			i++;
			k++;
		}
		else
		{
			res[k]=arr2[j];
			j++;
			k++;
		}
	}
	while(i<m)
	{
		res[k]=arr1[i];
		i++;
		k++;
	}
	while(j<n)
	{
		res[k]=arr2[j];
		j++;
		k++;
	}
        printf("the merged array is\n");
	for(k=0;k<(m+n);k++)
	{
		printf("%d\t",res[k]);
	}
}

