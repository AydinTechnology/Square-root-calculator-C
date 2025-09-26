#include <stdio.h>
#include <stdlib.h>

int terms = 0;

float square_root(float x) {
        float n0 = 1, n1 = 1;
        while(1) {
                terms++;

                n0 = n1;
                n1 = x/n0 + n0;
                n1 = n1 / 2;

                if(n1 - n0 == 0) break; //we can check for convergence by checking if there's a difference between n and n-1
        }
        return n1;
}

int main(int argc, char *argv[]) {
        float input = atof(argv[1]);
        printf("Calculating the square root of %f...\n\n", input);
        printf("The square root of %f is %f\n", input, square_root(input));
        printf("Converged after %i terms.\n", terms);
        return 0;
}
