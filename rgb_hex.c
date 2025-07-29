#include <math.h>
#include <stdio.h>

/*
RGB to HEX
    and
HEX to RGB
*/

typedef struct {
    unsigned char red;
    unsigned char green;
    unsigned char blue;
} Color;

Color getColor();

unsigned long long convertToHTML(Color);

Color convertToRGB(unsigned long long);

void printRGB(Color);

void printHTML(Color);

int main() {
    Color z, z2;
    unsigned long long html;

    int mode;
    if (scanf("%d", &mode) != 1 && (mode != 1 || mode != 2)) {
        printf("error");
        return 1;
    }
    switch (mode) {
        case 1:
            z = getColor();
            // printRGB(z);

            // html = convertToHTML(z);
            // printf("%llu\n", html);
            printHTML(z);

            // z2 = convertToRGB(html);
            // printRGB(z2);
            break;

        case 2:
            scanf("%2hhX%2hhX%2hhX", &z.red, &z.green, &z.blue);
            printf("%d %d %d\n", z.red, z.green, z.blue);
            break;
    }
    return 0;
}

Color getColor() {
    Color input;
    scanf("%hhu%hhu%hhu", &input.red, &input.green, &input.blue);
    return input;
}

unsigned long long convertToHTML(Color a) { return a.red * 256 * 256 + a.green * 256 + a.blue; }

Color convertToRGB(unsigned long long a) {
    Color c;
    c.blue = a % 256;
    a -= a % 256;
    c.green = (a / 256) % 256;
    a -= (a / 256) % 256;
    c.red = ((a / 256) / 256) % 256;
    return c;
}

void printRGB(Color c) { printf("%d %d %d\n", c.red, c.green, c.blue); }

void printHTML(Color c) { printf("%02X%02X%02X\n", c.red, c.green, c.blue); }