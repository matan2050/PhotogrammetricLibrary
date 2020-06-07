#ifndef _DTM_H_
#define _DTM_H_

#include "../GridBasedModel/GridBase.h"

namespace TerrainModels
{
    class DTM : public GridBasedModels::Grid
    {
        public:
        DTM(float _start_x, float _start_y, float _step_x, float _step_y);

        private:


        protected:
    };
}

#endif
