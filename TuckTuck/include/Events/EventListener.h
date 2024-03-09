#pragma once 

#include <Common.h>
#include <Events/Event.h>

namespace TuckTuck
{
    class EventListener
    {
    public:
        virtual void init();
        virtual void enqueueEvent(std::shared_ptr<Event> producedEvent);
        virtual void update() = 0;

    private:
        static const unsigned int MAX_NUM_EVENTS = 512;

    protected:
        // this feels wrong for a larger engine...each class overriding EventListener
        // should decide how many events they expect to receive (so that it's not based on max
        // events possible for a given event listener)
        // but that would be too much engineering to start i think
        std::shared_ptr<Event> queue_[MAX_NUM_EVENTS];

        unsigned int queue_start_ = 0, queue_end_ = 1;
    };
}
