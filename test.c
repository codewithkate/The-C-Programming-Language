// C program to demonstrate the use of conditional directives.
 #include <stdio.h>
#include <string.h>

#define SWITCH "on"
 
#if SWITCH == "on"
#undef SWITCH
#define SWITCH "off"
#elif SWITCH == "off"
#undef SWITCH
#define SWITCH "on"
#else
#undef SWITCH
#define SWITCH "fix me"
#endif
 

int main()
{
    printf("%s", switch); // switch = off
    return 0;
}