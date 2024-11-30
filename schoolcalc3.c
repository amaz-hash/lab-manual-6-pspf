#include <stdio.h>

int main()
{
    float science1, science2, maths1, maths2, english1, english2;
    float scienceavg, mathsavg, englishavg, overallavg;

    for (int i = 1; i < 2; i++)
    {
        printf("Enter marks for science 1: ");
        scanf("%f", &science1);
        if (science1 < 0 || science1 > 100)
        {
            printf("Invalid marks! Skipping...\n");
            continue;
        }
        else
        {
            printf("Science marks 1: %.2f\n", science1);
        }

        printf("Enter marks for science 2: ");
        scanf("%f", &science2);
        if (science2 < 0 || science2 > 100)
        {
            printf("Invalid marks! Skipping...\n");
            continue;
        }
        else
        {
            printf("Science marks 2: %.2f\n", science2);
        }

        scienceavg = (science1 + science2) / 2;
        printf("Science average: %.2f\n", scienceavg);
    }

    for (int i = 1; i < 2; i++)
    {
        printf("Enter marks for maths 1: ");
        scanf("%f", &maths1);
        if (maths1 < 0 || maths1 > 100)
        {
            printf("Invalid marks! Skipping...\n");
            continue;
        }
        else
        {
            printf("Maths marks 1: %.2f\n", maths1);
        }

        printf("Enter marks for maths 2: ");
        scanf("%f", &maths2);
        if (maths2 < 0 || maths2 > 100)
        {
            printf("Invalid marks! Skipping...\n");
            continue;
        }
        else
        {
            printf("Maths marks 2: %.2f\n", maths2);
        }

        mathsavg = (maths1 + maths2) / 2;
        printf("Maths average: %.2f\n", mathsavg);
    }

    for (int i = 1; i < 2; i++)
    {
        printf("Enter marks for english 1: ");
        scanf("%f", &english1);
        if (english1 < 0 || english1 > 100)
        {
            printf("Invalid marks! Skipping...\n");
            continue;
        }
        else
        {
            printf("English marks 1: %.2f\n", english1);
        }

        printf("Enter marks for english 2: ");
        scanf("%f", &english2);
        if (english2 < 0 || english2 > 100)
        {
            printf("Invalid marks! Skipping...\n");
            continue;
        }
        else
        {
            printf("English marks 2: %.2f\n", english2);
        }

        englishavg = (english1 + english2) / 2;
        printf("English average: %.2f\n", englishavg);
    }

    overallavg = (scienceavg + mathsavg + englishavg) / 3;
    printf("Overall average: %.2f\n", overallavg);

    return 0;
}