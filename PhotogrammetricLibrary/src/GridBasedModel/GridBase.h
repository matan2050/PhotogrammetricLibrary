#ifndef _GRIDBASE_H_
#define _GRIDBASE_H_

namespace GridBasedModels
{
    class Grid
    {
        public:
        Grid(float _start_x, float _start_y, float _step_x, float _step_y);

        private:
        float start_x;
        float start_y;
        float step_x;
        float step_y;
        
        protected:
    }
};

#endif