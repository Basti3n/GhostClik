#include "../include/header.h"

int listAllWindows(){
    HWND handle;
    const int nChars = 256;
    char buff [256];
    handle = GetForegroundWindow();
    if ( GetWindowText( handle, buff, nChars ) > 0){
        printf("Process : %s \n",buff);
    }
    while( ( handle = GetNextWindow( handle, GW_HWNDNEXT ) ) != 0){
        if ( GetWindowText( handle, buff, nChars ) > 0 
            && strstr( buff, "Default IME" ) == NULL 
            && strstr( buff, "Progression" ) == NULL 
            && strstr( buff, "MSCTFIME UI" ) == NULL ){
            printf( "Process : %s \n", buff );
        }
        
    }
    return SUCCESS;
}

int printAllWindows(HWND handle){
    return SUCCESS;
}