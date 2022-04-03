#include<stdio.h>

int main()

{
    int n;
    printf("enter number\n");
    scanf("%d",&n);
    int size=2*n-1;
    int pattern[size][size];
    int start=1;
    int end=size;
    while(start<=n)
    {
        for(int i=start;i<=end;i++)
        {
            for(int j=start;j<=end;j++)
            {
                if(i==start||i==end||j==start||j==end)
                {
                    pattern[i][j]=n+1-start;
                }
            }
        }
        start++;
        end--;
    }
    for(int i=1;i<=size;i++)
    {
        for(int j=1;j<=size;j++)
        {
            printf("%d ",pattern[i][j]);
        }
        printf("\n");
    }
}
