#pragma once

#include <Input/InputEvent.h>
#include <Events/EventListener.h>

namespace TuckTuck 
{
    class InputEventListener final : EventListener
    {
    public:
        virtual void init(); 
        virtual void produceAndSendEvent();
    };
}