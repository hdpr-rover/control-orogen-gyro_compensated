#ifndef GYRO_COMPENSATED_TASK_TASK_HPP
#define GYRO_COMPENSATED_TASK_TASK_HPP

#include "gyro_compensated/TaskBase.hpp"

namespace gyro_compensated
{
    class Task : public TaskBase
    {
	friend class TaskBase;
    protected:
        double pitch;
        double roll;

        base::
    public:
        Task(std::string const& name = "gyro_compensated::Task");
        Task(std::string const& name, RTT::ExecutionEngine* engine);
	~Task();
        bool configureHook();
        bool startHook();
        void updateHook();
        void errorHook();
        void stopHook();
        void cleanupHook();
    };
}

#endif

