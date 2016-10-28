#include<stdio.h>
int main()
{
        int s=0,l=0,i,n,a[10],temp,j,diff,c;
        printf("Enter the number of elements\n");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
                printf("Enter the %d elements\t",i+1);
                scanf("%d",&a[i]);
        }
        printf("You entered\n");
        {
                for(i=0;i<n;i++)
                {
                        printf("%d\t",a[i]);
                }
                printf("\n");
        }
	c=n;
	a[n]='\0';
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<c;j++)
		{
			if(a[i]==a[j])
			{
				c--;
				a[j]=a[j+1];
				a[j+1]='\0';
			}
			else
				continue;
		}
	}
	for(i=0;i<c;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	return 0;
}
