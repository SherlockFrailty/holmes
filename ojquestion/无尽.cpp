#include <Windows.h>
int main()
{
 keybd_event(VK_LWIN,0,0,0);
 while(1) 
 {
     keybd_event('E',0,0,0);
     keybd_event('E',0,2,0);
     Sleep(2);
} 
 return -1;
}

