#include <stdio.h>

typedef struct {
    int num;
    int denom;
} Fraction;

void printFraction(Fraction a);

Fraction addFraction(Fraction a, Fraction b);

Fraction subFraction(Fraction a, Fraction b);

Fraction mulFraction(Fraction a, Fraction b);

Fraction divFraction(Fraction a, Fraction b);

int main() {
    Fraction x;
    Fraction y;
    Fraction z;
    printf("Enter the first fraction (numerator,denominator): ");
    scanf("%d,%d", &x.num, &x.denom);
    printf("\nEnter the second fraction (numerator,denominator): ");
    scanf("%d,%d", &y.num, &y.denom);
    printf("\nEnter the third fraction (numerator,denominator): ");
    scanf("%d,%d", &z.num, &z.denom);
    Fraction sum = addFraction(y, z);
    Fraction result = mulFraction(x, sum);
    printFraction(result);
}

Fraction addFraction(Fraction a, Fraction b) {
    Fraction result;
    result.denom = a.denom * b.denom;
    result.num = (a.num * b.denom) + (a.denom * b.num);
    return result;
}

Fraction subFraction(Fraction a, Fraction b) {
    Fraction result;
    result.denom = a.denom * b.denom;
    result.num = (a.num * b.denom) - (a.denom * b.num);
    return result;
}

Fraction mulFraction(Fraction a, Fraction b) {
    Fraction result;
    result.num = a.num * b.num;
    result.denom = a.denom * b.denom;
    return result;
}

Fraction divFraction(Fraction a, Fraction b) {
    Fraction result;
    result.num = a.num * b.denom;
    result.denom = a.denom * b.num;
    return result;
}

void printFraction(Fraction a) {
    printf("\nThe fraction is %d/%d\n", a.num, a.denom);
}