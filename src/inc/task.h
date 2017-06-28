#ifndef     SRC_INC_TASK_H
#define     SRC_INC_TASK_H

#include    <iostream>

class Task
{
public:
    virtual void execute () = 0;
    virtual ~Task () {};

};

#endif      //endif SRC_INC_TASK_H

