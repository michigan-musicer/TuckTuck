#include <Events/EventListener.h>

namespace TuckTuck
{
    void EventListener::init()
    {

    }

    void EventListener::enqueueEvent(std::shared_ptr<Event> producedEvent)
    {
        // if this condition returns true, then we are about to overwrite queue_start_ and are therefore
        // about to overfill the queue
        assert(queue_start_!= queue_end_);
        queue_[queue_end_] = producedEvent; 
        queue_end_ = (queue_end_ + 1) % MAX_NUM_EVENTS; 
    }
}

