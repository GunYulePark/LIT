#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MONTHS  12
#define YEARS   3

void year_index(void)
{
    printf("Year index :\t");

    for (int i = 0; i < MONTHS; ++i)
        printf("%d\t", i + 1);

    printf("\n");
}

int main()
{
    double year2016[MONTHS] = { -4, -1.6, 8.1, 13, 18.2, 23.1, 27.8, 28.8, 21.5, 13.1, 7.8, -0.6 };
    double year2017[MONTHS] = { -0.9, 1, 7.1, 12.1, 19.4, 22.5, 25.9, 27.2, 22.6, 16.4, 7.6, 1.4 };
    double year2018[MONTHS] = { 1.6, 2.5, 7.7, 11.1, 18, 23.9, 24.1, 26.5, 21.4, 14.3, 8, -0.3 };

    // 1. Use 2D array
    double year_arr[YEARS][MONTHS] = {
        { -4, -1.6, 8.1, 13, 18.2, 23.1, 27.8, 28.8, 21.5, 13.1, 7.8, -0.6 },
        { -0.9, 1, 7.1, 12.1, 19.4, 22.5, 25.9, 27.2, 22.6, 16.4, 7.6, 1.4 },
        { 1.6, 2.5, 7.7, 11.1, 18, 23.9, 24.1, 26.5, 21.4, 14.3, 8, -0.3 }
    };
    
    // 2. Print data

    printf("[Temperature Data]\n");

    year_index();

    for (int j = 0; j < YEARS; ++j)
    {
        printf("Year %d     :\t", j);
        for (int i = 0; i < MONTHS; ++i)
            printf("%.1f\t", year_arr[j][i]);
        printf("\n");
    }

    printf("\n");
    
    // 3. Calculate and print yearly average temperatures of 3 years
    
    printf("[Yearly average temperatures of 3 years]\n");


    for (int j = 0; j < YEARS; ++j)
    {
        printf("Year %d : average temperature =\t", j);
        
        double avg = 0.0;
        for (int i = 0; i < MONTHS; ++i)
            avg += year_arr[j][i];

        avg /= MONTHS;
        printf("%.1f", avg);
        printf("\n");

    }

    printf("\n");

    // 4. Montly average temperatures for 3 years

    printf("[Montly average temperatures for 3 years]\n");

    year_index();

    printf("Avg temps  :\t");

    for (int i = 0; i < MONTHS; ++i)
    {
        double avg = 0.0;

        for (int j = 0; j < YEARS; ++j)
            avg += year_arr[j][i];

        avg /= YEARS;
        printf("%.1f\t", avg);
    }
    printf("\n");
    
    return 0;
}