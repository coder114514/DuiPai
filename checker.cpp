#include<bits/stdc++.h>
using namespace std;

int main(int argc,char* argv[]){
    if(argc!=6){
        printf("usage: checker <datagen.cpp> <bf.cpp> <solver.cpp> <bf.out> <solver.out>");
        return 1;
    }
    char cmd[114];
    sprintf(cmd, "g++ %s -o gen.exe -std=c++11", argv[1]);
    system(cmd);
    sprintf(cmd, "g++ %s -o bf.exe -std=c++11", argv[2]);
    system(cmd);
    sprintf(cmd, "g++ %s -o solver.exe -std=c++11", argv[3]);
    system(cmd);
    int n=1;
    while(true){
        printf("#%d:\n",n++);
        system(".\\gen.exe");
        system(".\\bf.exe");
        system(".\\solver.exe");
        sprintf(cmd, "fc %s %s", argv[4], argv[5]);
        if(system(cmd)){
            break;
        }
    }
    return 0;
}
