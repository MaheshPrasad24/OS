\\(ii) exec()
\\file 1 name: execv_demo.c
#include<stdio.h>
#include<unistd.h>
int main()
{
printf("I am in exec_Demo.c\n");
printf("PID of exec_Demo.c is %d\n", getpid());
char *args[] = {"./hello",NULL};
execv(args[0], args);
printf("Coming back to execv_Demo.c"); //This will not be executed
return 0;
}
