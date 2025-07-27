#include <stdio.h>
/*
a⋅b=НОД(a,b)⋅НОК(a,b)
(НОД, наибольший общий делитель, greatest common divisor)
(НОК, наименьшее общее кратное, least common multiple)

Алгоритм Евклида нахождения НОД:
    Для чисел a и b ищем a%b
    На следующем шаге берем вместо a и b числа b и a%b.
    Повторяем до тех пор, пока a%b не станет 0. Тогда b - НОД.

*/

int main(){
    int a,b;
    int nod, nok;
    scanf("%d%d", &a, &b);
    int p = a * b;
    while (a%b !=0){
        int t = a%b;
        a = b;
        b = t;
    }
    nod = b;
    nok = p/b;
    printf("НОД: %d\nНОК: %d\n", nod, nok);
    return 0;
}
