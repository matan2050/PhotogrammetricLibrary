#ifndef _ORTHOPHOTO_H_
#define _ORTHOPHOTO_H_

#include "../GridBasedModel/GridBase.h"

namespace OrthophotoModels
{
    class Orthophoto : public GridBasedModels::Grid
    {
        public:
        Orthophoto(float _start_x, float _start_y, float _step_x, float _step_y);

        private:


        protected:        
    };
}

#endif