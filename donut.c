#include <stdio.h>
#include <math.h>
#include <string.h>
#include <unistd.h>

int main() {
    // Create floats
    float A = 0, B = 0;
    float i, j;
    int k;
    float z[1760];
    char b[1760];

    // Prints out the random characters
    printf("\x1b[2J");

    // Start infinite loop
    for (;;) {
        // Create memset for b and z
        memset(b, 32, 1760);
        memset(z, 0, 7040);

        // Start for loop for animation
        for (j = 0; j < 6.28; j += 0.07) {
            for (i = 0; i < 6.28; i += 0.02) {
                // Create floats in the loop
                float c = sin(i);
                float d = cos(j);
                float e = sin(A);
                float f = sin(j);
                float g = cos(A);
                float h = d + 2;
                float D = 1 / (c * h * e + f * g + 5);
                float l = cos(i);
                float m = cos(B);
                float n = sin(B);
                float t = c * h * g - f * e;

                // ints for pixel positions
                int x = 40 + 30 * D * (1 * h * m - t * n);
                int y = 12 + 15 * D * (1 * h * n + t * m);
                int o = x + 80 * y;
                int N = 8 * ((f * e - c * d * g) * m - c * d * e - f * g - l * d * n);

                // Store values in array
                if (22 > y && y > 0 && x > 0 && 80 > x && D > z[o]) {
                    z[o] = D;
                    b[o] = ",.-~#@$*)"[N > 0 ? N : 0]; // Proper assignment
                }
            }
        }

        // Print it out
        printf("\x1b[H");

        // Loop to manage speed of donut 
        for (k = 0; k < 1761; k++) {
            putchar(k % 80 ? b[k] : 10); // Print the characters
        }

        // Adjust rotation speeds
        A += 0.00004;
        B += 0.00002;

        // Sleep to control speed of animation
        usleep(30000);
    }

    return 0;
}
