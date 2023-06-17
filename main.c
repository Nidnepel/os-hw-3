#include <unistd.h>
#include <stdio.h>

int Fib(int num) {
    if (num == 1) {
        return 0;
    } else if (num == 2) {
        return 1;
    } else {
        return Fib(num - 1) + Fib(num - 2);
    }
}

int Fact(int num) {
    if (num == 1) {
        return 1;
    } else {
        return Fact(num - 1) * num;
    }
}

int main(int argc, char *argv[]){
     pid_t chpid = 0;
     int num;
     sscanf(argv[1], "%d", &num);
     chpid = fork();
     if (chpid == 0) {
             printf("child - Fact: %d \n", Fact(num));
     } else {
        printf("parent - Fib: %d \n", Fib(num));
     }
     return 0;
}
