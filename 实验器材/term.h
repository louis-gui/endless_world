#include<stdio.h>
#include<unistd.h>
#include<termios.h>
void noecho(){
    struct termios t;
    tcgetattr(STDIN_FILENO,&t);
    t.c_lflag&=~(ECHO|ICANON);
    tcsetattr(STDIN_FILENO,TCSANOW,&t);
}