#include <iostream>
#include "osm.h"

int main()
{

    std::cout << "time: " << osm_syscall_time(1000000) <<std::endl;
    return 0;
}