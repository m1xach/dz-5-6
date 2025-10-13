#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, c;
    printf("Введите первую цифру: ");
    scanf("%d", &a);
    printf("Введите вторую цифру: ");
    scanf("%d", &b);
    printf("Введите третью цифру: ");
    scanf("%d", &c);
    int fir, sec, th;
    if (a >= b && a >= c) {
        fir = a;
        if (b >= c) {
            sec = b;
            th = c;
        }
        else {
            sec = c;
            th = b;
        }
    }
    else if (b >= a && b >= c) {
        fir = b;
        if (a >= c) {
            sec = a;
            th = c;
        }
        else {
            sec = c;
            th = a;
        }
    }
    else {
        fir = c;
        if (a >= b) {
            sec = a;
            th = b;
        }
        else {
            sec = b;
            th = a;
        }
    }

    int num = fir * 100 + sec * 10 + th;

    printf("Наибольшее число: %d\n", num);

    return 0;
}