#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
//Єлисеєв Микола
int main()
{
    int variant;
    printf("Please enter variant 1 or 2 \n");
    scanf("%d", &variant);

    if (variant == 1) {
        int N;
        N = 0;
        int d;
        float delta;
        float x1;
        float y;
        printf("Numder of iterations\n");
        scanf("%d", &N);
        printf("First number x\n");
        scanf("%f", &x1);
        printf("Enter end x\n");
        scanf("%f", &y);
        delta = (double) ((y- x1) / (N-1));//відстань між точками
        printf("\n+---x---|---N---|----F(x)----+\n");
        for (int d = 0; d != N;) {
            d = d + 1;
            y = (double)(pow(x1, 2) / 1000 - 0.5*x1 -1000);

            printf("|- %.2f-", x1);
            printf("-|--%d-", d);
            printf("--|-%.2f---|\n", y);
               x1 = x1 + delta;
            if (d % 10 == 0) {
                printf("Please press button for continue\n");
                getch();
                printf("|---------|------|------------|\n");
            }
        }
    }
    if (variant == 2) {
        int N = 0;
        float delta;
        float x1;
        float y;
        float x2;
        printf("First number x (start x1): ");
        scanf("%f", &x1);

        printf("end x (x2): ");
        scanf("%f", &x2);

        printf("Enter delta x (delta): ");
        scanf("%f", &delta);

        printf("+-----x-----|---N---|----F(x)----+\n");
        for (int d = 1; x1 <= x2;) {
            y = (double)(pow(x1, 2) / 1000 - 0.5 * x1 - 1000);
                printf("|- %.2f-", x1);
                printf("--|--%d-", d);
                printf("--|-%.2f--|\n", y);

                x1 = x1 + delta;
                d = d + 1;
            if (d % 10 == 0)
            {
                printf("Please press button for continue\n");
                getch();
                printf("|---------|------|------------|\n");
            }
        }

        printf("|---------|------|------------|\n");
        }
          return 0;
}
