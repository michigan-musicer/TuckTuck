#pragma once

#include <Input/InputEvent.h>
#include <Events/EventProducer.h>

namespace TuckTuck 
{
    class InputEventProducer final : EventProducer
    {
    public:
        virtual void init(); 
        virtual void produceAndSendEvent();
    };
}