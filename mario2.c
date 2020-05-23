#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = get_int("Height is: ");

    int x = 0;
    int b = 0;
    int c = 0;
 
    if (height > 0 && height < 8)
    {
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < height; j++)
            {
                if (height - x > 1)
                {
                    printf(" ");
                    x++;
                }
                else 
                    printf("#");
                if (height - j == 1)
                {
                    printf(" ");
                    while (c <= i)
                    {
                        printf("#");
                        c++;
                    }
                    c = 0;
                }
                
              
            }
            b++;
            x = b;
            printf("\n");
        }    
    }
    else
            main();
}

