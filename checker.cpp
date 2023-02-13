#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
    if (argc != 6) {
        printf("usage: checker <datagen.cpp> <ansgen.cpp> <solver.cpp> <ans.out> <solver.out>");
        return 1;
    }
    char cmd[114];
    sprintf(cmd, "g++ %s -o gen.exe -std=c++11", argv[1]);
    if (system(cmd)) {
        return 1;
    }
    sprintf(cmd, "g++ %s -o ansgen.exe -std=c++11", argv[2]);
    if (system(cmd)) {
        return 1;
    }
    sprintf(cmd, "g++ %s -o solver.exe -std=c++11", argv[3]);
    if (system(cmd)) {
        return 1;
    }
    int n = 1;
    while (true) {
        printf("#%d:\n", n++);
        system(".\\gen.exe");
        system(".\\ansgen.exe");
        system(".\\solver.exe");
        sprintf(cmd, "fc %s %s", argv[4], argv[5]);
        if (system(cmd)) {
            break;
        }
    }
    return 0;
}
