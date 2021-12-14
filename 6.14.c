#include <stdio.h>

int main()
{
    const double speed = 1.0;
    const unsigned repeat_max = 100;

    double dt = 1.0;
    double time = 0.0; // Elapsed time
    double dist = 0.0; // Distance

    unsigned i = 0;

    do
    {
        dist += speed * dt;
        time += dt;
        printf("Elapsed time = %f, Distance = %f\n", time, dist);
        dt *= 0.5;
        i++;        
    }
    while(i < repeat_max);
}