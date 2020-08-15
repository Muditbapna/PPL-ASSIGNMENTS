#include <stdio.h>

int main()
{
    for (int i = 2; i < 101; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
            if (i==j)
            {
                printf("\n%d", i);
            }
            
            
        }
        
    }
    
}
//Output is prime numbers upto 100