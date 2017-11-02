#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
    char permissions[4];
    int i;
    if(argc!=3){
        print(2,"Usage: chmod permissions file\n");
        exit();
    }

    for(i=0;i<3;i++)
        permissions[0] = argv[1][0] - '0';
    permissions[3]=0;    
    if(chmod(argv[1],argv[2])<0)
        print(2,"chmod %s %s: failed\n" , argv[1], argv[2]);
    exit();
}
