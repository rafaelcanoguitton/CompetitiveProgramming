    #include<stdio.h>  
      
    int main()  
    {  
        int limit, num1, num2 = 3, count, flag, slno = 1;  
      
        printf("How many co-prime numbers you want to print?\n");  
        scanf("%d", &limit);  
      
        while(limit)  
        {  
      
            for(num1 = 2; num1 <= num2; num1++)  
            {  
                for(count = 2; count <= num1; count++)  
                {  
                    flag = 1;  
                    if(num1 % count == 0 && num2 % count == 0)  
                    {  
                        flag = 0;  
                        break;  
                    }  
                }  
      
                if(flag)  
                {  
                    printf("%d. (%d, %d) are co-prime numbers.\n",   
                          slno++, num1, num2);  
                    limit--;  
      
                    if(limit == 0)  
                    {  
                        num1 = num2 + 10;  
                    }  
                }  
      
            }  
      
            num2++;  
        }  
      
        return 0;  
    }  