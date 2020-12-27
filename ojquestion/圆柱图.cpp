#include<stdio.h>


int main()
{
   char table[21][31];
   int num[20];
   char sign[20];
   int n,i,j;
   scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
        scanf("%c",&sign[i]);
    }
    int up=0,down=0;
    for(i=0;i<n;i++)
    {
        if(num[i]>0&&up<num[i])
        {
            up=num[i];

        }
        else if(num[i]<=0&&down>num[i])
        {
            down=num[i];

        }
    }
    int row=up-down+1;

    for(j=0;j<n;j++)
    {
        if(num[j]>0)
        {
            for(i=0;i<row;i++)
            {
                if(i<up-num[j])
                {
                    table[i][j]=' ';
                }
                else if(i<up&&i>=up-num[j])
                {
                    if(sign[j]==' '||sign[j]=='\n')
                    {
                        table[i][j]='+';
                    }
                    else{
                        table[i][j]=sign[j];
                    }

                }
                else if(i==up)
                {
                    table[i][j]='-';
                }
                else
                {
                    table[i][j]=' ';
                }
            }
        }
        else
        {
            for(i=0;i<row;i++)
            {

                if(i<up)
                {
                    table[i][j]=' ';
                }
                else if(i==up)
                {
                    table[i][j]='-';
                }
                else if(i>up&&i<=up-num[j])
                {
                    if(sign[j]==' '||sign[j]=='\n')
                    {
                        table[i][j]='+';
                    } else{
                        table[i][j]=sign[j];
                    }
                }
                else
                    {
                     table[i][j]=' ';

                }
            }

        }
    }


    for(i=0;i<row;i++)
    {
        if(i==up)
        {
            for(j=0;j<n;j++)
            {
                if(j==n-1)
                {
                    printf("%c",table[i][j]);
                }
                else
                {
                    printf("%c-",table[i][j]);
                }

            }
        }
        else
        {
            for(j=0;j<n;j++)
            {
                printf("%c ",table[i][j]);
            }
        }
        printf("\n");
    }


    return 0;

}

