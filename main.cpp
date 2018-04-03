#include <iostream>
#include "osm.h"

int main()
{

    std::cout << "osm_syscall_time, 100, " << osm_syscall_time(100) <<std::endl;
    std::cout << "osm_syscall_time, 1000, " << osm_syscall_time(1000) <<std::endl;
    std::cout << "osm_syscall_time, 10000, " << osm_syscall_time(10000) <<std::endl;
    std::cout << "osm_syscall_time, 100000, " << osm_syscall_time(100000) <<std::endl;
    std::cout << "osm_syscall_time, 100000, " << osm_syscall_time(1000000) <<std::endl;
    std::cout << "osm_syscall_time, 200000, " << osm_syscall_time(2000000) <<std::endl;

    std::cout << "osm_function_time, 100, " << osm_function_time(100) <<std::endl;
    std::cout << "osm_function_time, 1000, " << osm_function_time(1000) <<std::endl;
    std::cout << "osm_function_time, 10000, " << osm_function_time(10000) <<std::endl;
    std::cout << "osm_function_time, 100000, " << osm_function_time(100000) <<std::endl;
    std::cout << "osm_function_time, 100000, " << osm_function_time(1000000) <<std::endl;
    std::cout << "osm_function_time, 200000, " << osm_function_time(2000000) <<std::endl;

    std::cout << "osm_operation_time, 100, " << osm_operation_time(100) <<std::endl;
    std::cout << "osm_operation_time, 1000, " << osm_operation_time(1000) <<std::endl;
    std::cout << "osm_operation_time, 10000, " << osm_operation_time(10000) <<std::endl;
    std::cout << "osm_operation_time, 100000, " << osm_operation_time(100000) <<std::endl;
    std::cout << "osm_operation_time, 100000, " << osm_operation_time(1000000) <<std::endl;
    std::cout << "osm_operation_time, 200000, " << osm_operation_time(2000000) <<std::endl;

    return 0;
}