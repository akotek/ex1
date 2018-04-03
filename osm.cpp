//
// Created by kotek on 4/3/18.
//


#include <evdns.h>

timeval timeStruct = timeval();

/* Initialization function that the user must call
* before running any other library function.
* The function may, for example, allocate memory or
* create/open files.
* Pay attention: this function may be empty for some desings. It's fine.
* Returns 0 uppon success and -1 on failure
*/
int osm_init(){

    gettimeofday(&timeStruct, nullptr);
    double t1=timeStruct.tv_usec;

    gettimeofday(&timeStruct, nullptr);
    double t2=timeStruct.tv_usec;

    printf("%.6lf micro_seconds elapsed\n", t2-t1);
    return 0;
}
/* finalizer function that the user must call
 * after running any other library function.
 * The function may, for example, free memory or
 * close/delete files.
 * Returns 0 uppon success and -1 on failure
 */
int osm_finalizer(){}


/* Time measurement function for a simple arithmetic operation.
   returns time in nano-seconds upon success,
   and -1 upon failure.
   */
double osm_operation_time(unsigned int iterations){}


/* Time measurement function for an empty function call.
   returns time in nano-seconds upon success,
   and -1 upon failure.
   */
double osm_function_time(unsigned int iterations){}


/* Time measurement function for an empty trap into the operating system.
   returns time in nano-seconds upon success,
   and -1 upon failure.
   */
double osm_syscall_time(unsigned int iterations){}

