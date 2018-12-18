#include "../include/header.h"

int listAllWindows(){
    Sleep(5000);
    HWND handle;
    int i = 0;
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
            printf( "Process %lu : %s \n", GetWindowThreadProcessId( handle, NULL ), buff );
            i++;
            if( GetWindowThreadProcessId( handle, NULL ) == (long unsigned int)70264){               
                //handle = FindWindowEx(handle, 0, "Edit", 0);
                printf( "Process %lu : %s \n", GetWindowThreadProcessId( handle, NULL ), buff );
                Sleep(100);
                /*if(!PostMessage(handle, WM_KEYDOWN, VK_NUMPAD4, 1))
                    printf("%lu\n",GetLastError());*/
                if(!PostMessage(handle, WM_LBUTTONDOWN, 1, MAKELPARAM(261,320)))
                    printf("%lu\n",GetLastError()); 
                if(!PostMessage(handle, WM_LBUTTONUP, 1, MAKELPARAM(1577,340)))
                    printf("%lu\n",GetLastError());
                //Sleep(100);
                printf("Je passe\n");
                break;
            }
        } 
    }
    printf("Je fini\n");
    return SUCCESS;
}

int printAllWindows(HWND handle){
    return SUCCESS;
}