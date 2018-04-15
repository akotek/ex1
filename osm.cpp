
#include "osm.h"
#include <sys/time.h>

#define ITERATION_DEFAULT 1000
#define TIME_FACTOR 1000000.0
#define ITERATION_FACTOR 5
#define MICRO_TO_NANO_FACTOR 1000.0

timeval timeStruct = timeval();
void func(){};
double t1, t2;

/* Initialization function that the user must call
* before running any other library function.
* The function may, for example, allocate memory or
* create/open files.
* Pay attention: this function may be empty for some desings. It's fine.
* Returns 0 uppon success and -1 on failure
*/
int osm_init()
{

    int time = gettimeofday(&timeStruct, nullptr);
    t1=timeStruct.tv_usec + (timeStruct.tv_usec/TIME_FACTOR);
    if (time == -1) return -1;
    return 0;
}

/* finalizer function that the user must call
 * after running any other library function.
 * The function may, for example, free memory or
 * close/delete files.
 * Returns 0 uppon success and -1 on failure
 */
int osm_finalizer()
{
    int time = gettimeofday(&timeStruct, nullptr);
    t2=timeStruct.tv_usec + (timeStruct.tv_usec/TIME_FACTOR);
    if (time == -1) return -1;
    return 0;
}


/* Time measurement function for a simple arithmetic operation.
   returns time in nano-seconds upon success,
   and -1 upon failure.
   */
double osm_operation_time(unsigned int iterations)
{
    osm_init();

    iterations = iterations == 0 ? ITERATION_DEFAULT : iterations;
    int mod = iterations % 10;
    if (mod != 0) iterations = iterations + (10-mod);
    unsigned int x1,x2,x3,x4,x5;
    for(unsigned int i = 0; i < iterations; i += ITERATION_FACTOR)
    {
        x1 += i+1;
        x2 += i+2;
        x3 += i+3;
        x4 += i+4;
        x5 += i+5;

    }
    osm_finalizer();
    return (t2-t1)*MICRO_TO_NANO_FACTOR;
}


/* Time measurement function for an empty function call.
   returns time in nano-seconds upon success,
   and -1 upon failure.
   */
double osm_function_time(unsigned int iterations)
{
    osm_init();
    iterations = iterations == 0 ? ITERATION_DEFAULT : iterations;
    int mod = iterations % 10;
    if (mod != 0) iterations = iterations + (10-mod);
    for(unsigned int i = 0; i < iterations; i += ITERATION_FACTOR)
    {
        func();
        func();
        func();
        func();
        func();
    }

    osm_finalizer();
    return (t2-t1)*MICRO_TO_NANO_FACTOR;

}


/* Time measurement function for an empty trap into the operating system.
   returns time in nano-seconds upon success,
   and -1 upon failure.
   */
double osm_syscall_time(unsigned int iterations)
{
    osm_init();
    iterations = iterations == 0 ? ITERATION_DEFAULT : iterations;
    int mod = iterations % 10;
    if (mod != 0) iterations = iterations + (10-mod);
    for(unsigned int i = 0; i < iterations; i += ITERATION_FACTOR)
    {
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;

    }
    osm_finalizer();
    return (t2-t1)*MICRO_TO_NANO_FACTOR;
}

