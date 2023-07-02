//Create main
int main() {

    //Create floats
    float A = 0, B = 0;
    float i, j;
    int k;
    float z[1760];
    char b[1760];

    //prints out the random characters
    printf("\x1b[2J");
    
    //start for 
    for (;;) {
        //creates the memset for b and z
        memset(b, 32, 1760);
        memset(z, 0, 7040);

        //start for loop
        for( j = 0; j < 6.28; j += 0.07) {
            for( i = 0; i < 6.28; i += 0.02) {

                //creates floats in the loop
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

                //ints
                int x = 40 + 30 * D * (1 * h * m - t * n);
                int y = 12 + 15 * D * (1 * h * n + t * m);
                int o = x + 80 * y;
                int N = 8 * ((f * e - c * d * g) * m - c * d * e - f * g - l * d * n);

                //start if statement
                if(22 > y && y > 0 && x > 0 && 80 > x && D > z[o]) {

                    //store D into z of o
                    z[o] = D;
                    b[o] = ".,-~##@$*)"[N > 0 ? N : 0];
                }
            }
        }
        //print it out
        printf("\x1b[H");
        
        //start for to manage speed of donut 
        for(k = 0; k < 1761; k++) {
            putchar(k % 80 ? b[k] : 10);
            //A + B are equal to ?
            A += 0.00004;
            B += 0.00002;
        }
        //timer
        usleep(30000);
    }
    //return
    return 0;
}