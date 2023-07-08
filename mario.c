#include <cs50.h>
#include <stdio.h>


int get_positive_int(void);
void draw_pyramid(int height);

int main(void)
{
    int height = get_positive_int();
    draw_pyramid(height);

}

int get_positive_int(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);
    return n;
}

void draw_pyramid(int height)
{
    for (int i = 1; i <= height; i++)
    {
        // Print spaces
        for (int j = 0; j < height - i; j++)
        {
            printf(" ");
        }

        // Print left pyramid
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }

        // Print gap
        printf("  ");

        // Print right pyramid
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }

        printf("\n");
    }

}
