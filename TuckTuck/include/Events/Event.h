#pragma once 

#include <Common.h>

namespace TuckTuck
{
    enum class EventType
    {
        // initial list just taken from Hazel
        None = 0,
        Window = 1,
        Input = 2,
        // WindowClose, WindowResize, WindowFocus, WindowLostFocus, WindowMoved,
        // AppTick, AppUpdate, AppRender, 
        // KeyPressed, KeyReleased,
        // MouseButotnPressed, MouseButtonReleased, MouseMoved, MouseScrolled 
    };

    struct Event
    {
    public:
        constexpr virtual EventType getTopLevelEventType() const = 0;
        constexpr virtual unsigned int getSubLevelEventType() const = 0;
    };
}
