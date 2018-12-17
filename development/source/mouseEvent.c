#include "../include/header.h"


int getMousePosition(){
    POINT p;
    while(1)
    if (GetCursorPos(&p))
        printf("Position x  : %ld , Position y : %ld \n",p.x,p.y);
    return SUCCESS;
}