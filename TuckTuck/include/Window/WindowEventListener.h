#pragma once

#include <Events/EventListener.h>
#include <Window/Window.h>
#include <Window/WindowEvent.h>

namespace TuckTuck
{
    class WindowEventListener final : EventListener
    {
    public:
        void init();
        virtual void update();


    }; 


}