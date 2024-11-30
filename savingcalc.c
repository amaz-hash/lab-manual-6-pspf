//digital piggy bank taking daily saving with 100$ goal
#include <stdio.h> 

int calculatetotalsaving(int saving, int dailysav)
{
    return saving + dailysav;
}
int main ()
{
int saving = 0;
int goal = 100;
int dailysav;
int totalsaving;

printf ("Welcome to the digital piggy bank\n");
printf ("Your saving goal: $100\n");

for (int day=1 ; saving<goal; day++)
{
    printf ("Enter day %d saving: ", day);
    scanf ("%d", &dailysav);
    totalsaving = calculatetotalsaving (saving, dailysav);
    printf (" progress : %d\n ", totalsaving );
    if (totalsaving >= goal)
    {
        printf (" goal reached! \n");
        printf (" total days taken : %d\n", day);
        printf (" total amount saving : $%d\n", totalsaving);
        printf (" extra saving : $%d\n", totalsaving-goal); 
        break;
    }
    {
    saving = totalsaving;
    printf ("remaing : %d\n", goal-totalsaving);
    }
}
        return 0;
}
