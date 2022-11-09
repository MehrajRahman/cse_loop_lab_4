#include <stdio.h>
int main()
{
    int number;
    scanf("%d", &number);

    double atndce, assign, ct, midterm, termfinal, result;

    for (int i = 0; i < number; i++)
    {
        printf("Enter Attendence: [ 5marks ] \n");
        scanf("%lf", &atndce);

        printf("Enter assignment marks: [ 10marks ] \n");
        scanf("%lf", &assign);

        printf("Enter CT marks: [ 15marks ] \n");
        scanf("%lf", &ct);

        printf("Enter Mid  Term: [ 50marks ] \n");
        scanf("%lf", &midterm);

        printf("Enter Final Term: [ 100marks ] \n");
        scanf("%lf", &termfinal);

        result = atndce + assign + ct + midterm * 0.6 + termfinal * 0.4;

        if (result < 55)
        {

            printf("F. Marks:  = %.2lf \n", result);
        }
        else if (result >= 55 && result < 57)
        {

            printf("D. Marks:  = %.2lf \n", result);
        }
        else if (result >= 58 && result < 61)
        {

            printf("D+. Marks:  = %.2lf \n", result);
        }
        else if (result >= 62 && result < 65)
        {

            printf("C-. Marks:  = %.2lf \n", result);
        }
        else if (result >= 66 && result < 69)
        {

            printf("C. Marks:  = %.2lf \n", result);
        }
        else if (result >= 70 && result < 73)
        {

            printf("C+. Marks:  = %.2lf \n", result);
        }
        else if (result >= 74 && result < 77)
        {

            printf("B-. Marks:  = %.2lf \n", result);
        }
        else if (result >= 78 && result < 81)
        {

            printf("B. Marks:  = %.2lf \n", result);
        }
        else if (result >= 82 && result < 85)
        {

            printf("B. Marks:  = %.2lf \n", result);
        }
        else if (result >= 86 && result < 89)
        {

            printf("B+. Marks:  = %.2lf \n", result);
        }
        else if (result >= 87 && result < 90)
        {

            printf("A-. Marks:  = %.2lf \n", result);
        }
        else
        {

            printf("A+ Marks:  = %.2lf \n", result);
        }
    }

    return 0;
}