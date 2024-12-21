#include <stdio.h>
#include <math.h>

double factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

double cosineSeries(double x, int terms) {
    double sum = 0.0;
    for (int i = 0; i < terms; i++) {
        double term = pow(-1, i) * pow(x, 2 * i) / factorial(2 * i);
        sum += term;
    }
    return sum;
}

int main() {
    double x;
    int terms;
    printf("Enter the value of x (in radians): ");
    scanf("%lf", &x);
    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    double result = cosineSeries(x, terms);
    printf("Cos(x) = %.6lf\n", result);

    return 0;
}
