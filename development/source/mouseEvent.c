#include "../include/header.h"


int getMousePosition(){
    POINT p;
    POINT tmp;
    while(1){
        if (GetCursorPos(&p)){
            if(tmp.x != p.x && tmp.y != p.y ){
                tmp.x = p.x;
                tmp.y = p.y;
                printf("Position x  : %ld , Position y : %ld \n",p.x,p.y);
            }
        }
    }  
    return SUCCESS;
}

int createCursor(){
    
    return 1;
}