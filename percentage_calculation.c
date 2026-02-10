#include <stdio.h>

int main()
{
    int s1, s2, s3, s4, s5; // marks of 5 subjects
    float total, percent;

    printf("Enter marks of 5 subjects (out of 100):\n");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);

    // Check if failed in any subject
    if (s1 < 35 || s2 < 35 || s3 < 35 || s4 < 35 || s5 < 35)
    {
        printf("Fail");
    }
    else
    {
        total = s1 + s2 + s3 + s4 + s5;
        percent = total / 5;

        printf("Percentage: %.2f%%\n", percent);

        if (percent > 70)
            printf("Congratulations, you got Distinction!");
        else if (percent > 60)
            printf("First Class");
        else if (percent > 55)
            printf("Higher Second Class");
        else if (percent >= 50)
            printf("Pass Class");
        else
            printf("Fail");
    }

    return 0;
}
