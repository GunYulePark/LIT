#include <stdio.h>

int main()
{
    const double A_speed = 10.0;
    const double t_speed = 0.001;

    const unsigned repeat_max = 100;

    double dt = 0.01;
    double time = 0.0; // Elapsed time
    double A_dist = 0.0; // Archilleus Distance
    double t_dist = 1.0; // Archilleus Distance

    unsigned i = 0;

    do
    {
        A_dist += A_speed * dt;
        t_dist += t_speed * dt;
        time += dt;
        
        printf("Time = %fs, dt = %fs, Archilleus = %fm, turtle = %fm\n" ,time, dt, A_dist, t_dist);

        dt *= 0.5;
        i ++;
    }
    while(i < repeat_max);

    return 0;
}