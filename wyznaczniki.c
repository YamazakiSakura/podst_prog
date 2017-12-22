#include <stdio.h>

void wczytaj(double *a1, double *b1, double *c1, double *a2, double *b2, double *c2) {


    puts("Podaj wspolczynnik a1");
    scanf("%lf", a1);
    puts("Podaj współczynnik b1");
    scanf("%lf", b1);
    puts("Podaj współczynnik c1");
    scanf("%lf", c1);
    puts("Podaj współczynnik a2");
    scanf("%lf", a2);
    puts("Podaj współczynnik b2");
    scanf("%lf", b2);
    puts("Podaj współczynnik c2");
    scanf("%lf", c2);


}

double wyznacznik_glowny(double a1, double a2, double b1, double b2) {
    return a1 * b2 - a2 * b1;
}


double wyznacznik_x(double c1, double c2, double b1, double b2) {
    return c1 * b2 - c2 * b1;
}


double wyznacznik_y(double a1, double a2, double c1, double c2) {
    return a1 * c2 - a2 * c1;
}


int main() {

    double a1, b1, c1, a2, b2, c2;
    double W, Wx, Wy;
    double x, y;

    wczytaj(&a1, &b1, &c1, &a2, &b2, &c2);
    W = wyznacznik_glowny(a1, a2, b1, b2);
    Wx = wyznacznik_x(b1, b2, c1, c2);
    Wy = wyznacznik_y(a1, a2, c1, c2);
    x = Wx / W;  //nie trzeba spacji po znaku rownosci ale zwieksza czytelnosc
    y = Wy / W; //komenda ctrl-alt-L formatuje kod (CLion)


    printf("x = %lf\n y=%lf", x, y);
    return 0;

}
