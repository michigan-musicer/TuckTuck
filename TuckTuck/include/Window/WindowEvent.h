#pragma once

#include <Events/Event.h>

namespace TuckTuck
{
    enum WindowEventType
    {
        WINDOW_NULL     = 0x00, // invalid
        WINDOW_RESIZE   = 0x01,
        WINDOW_CLOSE    = 0x02,
    };

    class WindowEvent : Event
    {
    public:
        constexpr virtual EventType getTopLevelEventType() const;
        constexpr virtual unsigned int getSubLevelEventType() const;       
    private: 
        const unsigned int windowEventType_;
    };
}
