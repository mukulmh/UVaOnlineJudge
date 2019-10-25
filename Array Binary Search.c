#include<stdio.h>

int main()
{
    int n,i,j,a,number[100],key;

    printf("Input N :\n");
    scanf("%d",&n);

    printf("Enter Numbers : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&number[i]);
    }
    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (number[i] > number[j])
            {
                a =  number[i];

                number[i] = number[j];

                number[j] = a;
            }
        }
    }
    printf("Enter the value you want to search :\n");
    scanf("%d",&key);

    int low=0,high=n-1,mid;

    while(low<=high)
    {
        mid = (low+high)/2;

        if(number[mid]==key)
            {
                return number[mid];
            }

        else if(number[mid]>key) high = mid - 1;

        else low = mid + 1;
    }

    return -1;
}
