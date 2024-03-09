#pragma once 

#include <Common.h>
#include <Events/EventListener.h>

// performance-wise this feels like the wrong architecture. 
// virtual class methods like produceAndSendEvent require vtable lookup and are slower as a 
// result. Additionally, producing a class is potentially more baggage than what we need for
// some tasks (e.g. reading input).
// Keeping it like this because it's more idiomatic C++ and cleaner overall. In an
// actual engine, this might be replaced by non-member functions or at least non-inheritance-based.
// architecture.
// We will probably just create one-off event producer functions for special use cases like
// initializing our window, where it doesn't make sense to create a whole producer class.
namespace TuckTuck
{
    class EventProducer
    {
    public:
        virtual void init();
        // each produceEvent override should call enqueueEvent for each observer
        // in observers_
        virtual void produceAndSendEvent() = 0;

    private:
        static const unsigned int MAX_NUM_OBSERVERS = 4;

        std::shared_ptr<EventListener> observers_[MAX_NUM_OBSERVERS];
    };
}
