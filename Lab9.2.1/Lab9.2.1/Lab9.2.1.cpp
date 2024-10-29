#include <stdio.h>
#include <conio.h>
#include <math.h>

#define ABS(x) ((x) < 0 ? -(x) : (x))           
#define MIN(a, b) ((a) < (b) ? (a) : (b))     
#define MAX(a, b) ((a) > (b) ? (a) : (b))       
#define CUBE(x) ((x) * (x) * (x))              
#define SQR(x) ((x) * (x))                     
#define PRINTI(w) puts("control output"); \
                 printf(#w " = %d\n", w)       
#define PRINTR(w) puts("Result:"); \
                  printf(#w " = %f\n", (float)w)

#define Z 3

int main() {
    puts("Lab 9.2.1 Using macros and preprocessing directive");

    int x, y, z;
    float w;
    char ch;

    do {
        puts("Input x, y and z:");
        scanf_s("%d", &x);
        PRINTI(x); 
        scanf_s("%d", &y);
        PRINTI(y);
        scanf_s("%d", &z);
        PRINTI(z);

        #if Z == 3

        if (z > Z) {
            w = MAX(2 * x + y, SQR(2 * y - z));
            PRINTR(w);
        }
        else if (1 < z && z < Z) {
            w = MIN(ABS(x) + ABS(y) + ABS(z), CUBE(z));
            PRINTR(w);
        }
        #endif

        puts("Repeat? y / n");
        ch = _getch();
       
    } while (ch == y); 

    return 0;
}
