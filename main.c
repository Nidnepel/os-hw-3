#include <unistd.h>
#include <stdio.h>

int fibo(int num) {
    if (num == 1) {
        return 0;
    } else if (num == 2) {
        return 1;
    } else {
        return fibo(num - 1) + fibo(num - 2);
    }
}

int factorial(int num) {
    if (num == 1) {
        return 1;
    } else {
        return factorial(num - 1) * num;
    }
}

int main(int argc, char *argv[]){
     pid_t chpid = 0;
     int num;
     sscanf(*(argv + 1), "%d", &num);
     chpid = fork();
     if (chpid == 0) {
             printf("i am son, this is factorial: %d \n", factorial(num));
     } else {
        printf("i am father, this is fibo: %d \n", fibo(num));
     }
     return 0;
}
