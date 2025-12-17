#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// (a)
// struct color make_color(int red, int green, int blue);
// Returns a color structure containing the specified red, 
// green, and blue values. If any argument is less than zero, 
// the corresponding member of the structure will contain zero 
// instead. If any argument is greater than 255, the corresponding 
// member of the structure will contain 255.

// (b)
// int getRed(struct color c);
// Returns the value of c's red member.

// (c)
// bool equal_color(struct color color1, struct color color2);
// Returns true if the corresponding members of color1 and color2 are equal.

// (d)
// struct color brighter(struct color c);
// Returns a color structure that represents a brighter version of the color c. 
// The structure is identical to c, except that each member has been divided by 
// 0.7 (with the result truncated to an integer). However, there are three special cases:
// (1) If all members of c are zero, the function returns a color whose members all have the value 3.
// (2) If any member of c is greater than 0 but less than 3, it is replaced by 3 before the division by 0.7.
// (3) If dividing by 0.7 causes a member to exceed 255, it is reduced to 255.

// (e)
// struct color darker(struct color c);
// Returns a color structure that represents a darker version of the color c. 
// The structure is identical to c, except that each member has been multiplied 
// by 0.7 (with the result truncated to an integer).

struct color {
    int red;
    int green;
    int blue;
};

// (a)
struct color make_color(int red, int green, int blue) {
    struct color c;
    
    c.red = (red < 0) ? 0 : (red > 255) ? 255 : red;
    c.green = (green < 0) ? 0 : (green > 255) ? 255 : green;
    c.blue = (blue < 0) ? 0 : (blue > 255) ? 255 : blue;
    
    return c;
}

// (b)
int getRed(struct color c) {
    return c.red;
}

// (c)
bool equal_color(struct color color1, struct color color2) {
    return color1.red == color2.red &&
           color1.green == color2.green &&
           color1.blue == color2.blue;
}

// (d)
struct color brighter(struct color c) {
    struct color result;
    
    // Special case: all members are zero
    if (c.red == 0 && c.green == 0 && c.blue == 0) {
        result.red = 3;
        result.green = 3;
        result.blue = 3;
        return result;
    }
    
    // Replace values less than 3 with 3
    int r = (c.red > 0 && c.red < 3) ? 3 : c.red;
    int g = (c.green > 0 && c.green < 3) ? 3 : c.green;
    int b = (c.blue > 0 && c.blue < 3) ? 3 : c.blue;
    
    // Divide by 0.7 and truncate
    r = (int)(r / 0.7);
    g = (int)(g / 0.7);
    b = (int)(b / 0.7);
    
    // Cap at 255
    result.red = (r > 255) ? 255 : r;
    result.green = (g > 255) ? 255 : g;
    result.blue = (b > 255) ? 255 : b;
    
    return result;
}

// (e)
struct color darker(struct color c) {
    struct color result;
    
    result.red = (int)(c.red * 0.7);
    result.green = (int)(c.green * 0.7);
    result.blue = (int)(c.blue * 0.7);
    
    return result;
}

void main() {
    struct color c1 = make_color(100, 150, 200);
    struct color c2 = make_color(100, 150, 200);
    struct color c3 = brighter(c1);
    struct color c4 = darker(c1);
    
    printf("Color 1: R=%d, G=%d, B=%d\n", c1.red, c1.green, c1.blue);
    printf("getRed(c1) = %d\n", getRed(c1));
    printf("equal_color(c1, c2) = %s\n", equal_color(c1, c2) ? "true" : "false");
    printf("Brighter: R=%d, G=%d, B=%d\n", c3.red, c3.green, c3.blue);
    printf("Darker: R=%d, G=%d, B=%d\n", c4.red, c4.green, c4.blue);
}

