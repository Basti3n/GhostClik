#include "../include/header.h"

int getInputEvent(){
    int i;
    while (1){
        for( i = 0 ; i < 256 ; i++){
            if(GetKeyState(i) & 0x8000 && GetKeyState(i) != 0){
                printf("Appuie %c\n",i);
            }
        }
    }
    return SUCCESS;
}