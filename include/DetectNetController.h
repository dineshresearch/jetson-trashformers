#ifndef DETECTNETCONTROLLER_H_
#define DETECTNETCONTROLLER_H_

#include <stdio.h>
#include <iostream>
#include <thread>
#include "../util/detectnet-camera.h"

class DetectNetController {
    public:
        DetectNetController(int argc, char** argv);
        virtual ~DetectNetController();
        
        int m_argc;
        char** m_argv;
        void runThread();
        std::thread detectNetThread;
    private:
        float *boxes;
        
};

#endif

