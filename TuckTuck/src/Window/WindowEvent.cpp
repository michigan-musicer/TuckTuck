#include <Window/WindowEvent.h>

namespace TuckTuck
{

    constexpr EventType WindowEvent::getTopLevelEventType() const
    {
        return EventType::Window;
    }

    constexpr unsigned int WindowEvent::getSubLevelEventType() const
    {
        return windowEventType_;
    }

}
