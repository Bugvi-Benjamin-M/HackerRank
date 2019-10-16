#include <iostream>
#include <stdio.h>

int main() {


    int i;
    long l;
    char c;
    float f;
    double d;
    // C Style
    scanf("%d %ld %c %f %lf", &i, &l, &c, &f, &d);
    // Using streams
    // std::cin >> i >> l >> c >> f >> d;

    printf("%d\n",i);
    printf("%ld\n",l);
    printf("%c\n",c);
    printf("%f\n",f);
    printf("%lf\n",d);
    return 0;
}

