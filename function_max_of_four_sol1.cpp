//
// Created by Tiyao Li on 29.11.21.
//
// level easy
/***
#include <iostream>
#include <cstdio>
using namespace std;


int max_of_four(int a, int b, int c, int d){
    // use builtin function max
    int maxi = max(d,max(c,max(a, b)));
    return maxi;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
 ***/