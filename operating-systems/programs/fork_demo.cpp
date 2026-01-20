#include <iostream>
#include <unistd.h>
using namespace std;

int main() {
    // Note: fork() is a Unix/Linux system call. 
    // This code might not run on Windows without WSL or Cygwin.
    
    #ifdef _WIN32
        cout << "This runs on Linux/Unix only because of fork() call.\n";
    #else
        pid_t p = fork();
        if(p<0){
          cout<<"fork failed";
        }else if(p==0){
          cout<<"I am child process. ID: " << getpid() << endl;
        }else{
          cout<<"I am parent process. ID: " << getpid() << endl;
        }
    #endif
    return 0;
}
