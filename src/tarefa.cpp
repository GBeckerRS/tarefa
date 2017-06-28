#include    <iostream>

#include    "task.h"
#include    "t_task.h"

int main ()
{
    Task* t = new T_task ();
    t->execute ();

    return 0;
}

