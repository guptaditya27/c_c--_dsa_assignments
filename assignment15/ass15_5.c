# include<stdio.h>
void nprime(int);
int main() {
    int n;
    printf("enter no of terms:- ");
    scanf("%d",&n);
    nprime(n);
    return 0;
}
void nprime(int n)
{
    int count=1;
    printf("%d ",2);
    for(int i=1;count<n;i++)
    {   int flag=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                break;
            }
            else{
                flag=1;
            }

        }
        if(flag==1)
        {   
            printf("%d ",i);
            flag=0;
            count++;
        }
    }
}