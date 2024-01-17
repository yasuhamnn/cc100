#include <stdio.h>

int main()
{
    int a, b, c, number;
    
    printf("How many numbers do you want to enter? ");
    scanf("%d", &c);
    for(;;)
    {
        printf("\nEnter option to select operation\n [1.] Addition\n [2.] Subtraction\n [3.] Multiplication\n [4.] Division\n");
        scanf("%d", &a);
        switch(a)
        {
            int sum, sub, mul, cnt;
            float divis;
            case 1:
                sum= 0;
                    printf("\nEnter %d numbers:  \n", c);
                    for(b=0;b<c;b++)
                    {
                        scanf("%d", &number);
                        sum=sum+number;
                    }
                    printf("\nThe sum is %d", sum);
                    printf("\n");
                    break;
            case 2:
            sub=0,cnt=1;
                    printf("\nEnter %d numbers: \n", c);
                    for(b=0;b<c;b++)
                    {
                        scanf("%d", &number);
                        if(cnt==1)
                        {
                        sub=number-sub;
                        }
                        else
                        {
                            sub=sub-number;
                        }
                        cnt++;
                    }
                    printf("\nThe sub is %d\n", sub);
                    break;
            case 3:
            mul=1;
                    printf("\nEnter %d numbers\n", c);
                    for(b=0;b<c;b++)
                    {
                        scanf("%d", &number);
                        if(number==0)
                            mul=0;
                        else
                            mul=mul*number;
                    }
                    printf("\nThe mul is %d\n", mul);
                    break;
            case 4:
            divis=1, cnt=1;
                    printf("\nEnter %d numbers\n", c);
                    for(b=0;b<c;b++)
                    {
                        scanf("%d", &number);
                        if(number==0)
                        {
                            divis=0;
                        }
                        else
                        {
                            if(cnt==1)
                            {
                                divis=number/1;
                            }
                            else
                            {
                                divis=divis/number;
                            }
                        }
                        cnt++;
                    }
                    printf("\nThe div is %.2f\n", divis);
                    break;
                default:printf("\nYou entered an invalid option.\n");
                        break;
        }   
    }
    return 0;
    
    printf("\n\n\nPROGRAMMER: PELAYO, JOHN MICHAEL S.             BSIT-1C");
}