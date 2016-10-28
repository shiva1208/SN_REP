#include<stdio.h>
int main()
{
        int i,n,a[50],temp,j;
        printf("Enter number of elements\n");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
                printf("Enter the %d elements\n",i+1);
                scanf("%d",&a[i]);
        }
        printf("You entered \n");
        for(i=0;i<n;i++)
        {
                printf("%d\t",a[i]);
        }
        for(i=0;i<n-1;i++)
        {
                for(j=i;j<n;j++)
                {
                        if(a[i]>a[j])
                        {
                                temp=a[j];
                                a[j]=a[i];
                                a[i]=temp;
                        }
                        else
                                continue;
                }
        }
        printf("\nAfter sorting\n");
        for(i=0;i<n;i++)
        {
                printf("%d\t",a[i]);
        }
        printf("\n");
        return 0;
}
