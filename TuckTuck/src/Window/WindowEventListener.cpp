#include <Window/WindowEventListener.h>

namespace TuckTuck
{
    void WindowEventListener::init()
    {
        // this function should create a windowinit event and pass that event to itself to process.
    }

    void WindowEventListener::update()
    {
        for (auto current_event : queue_)
        {
            switch (current_event->getTopLevelEventType())
            {
            case EventType::Window:
                switch (current_event->getSubLevelEventType())
                {
                    case WindowEventType::WINDOW_CLOSE:
                        break;
                    case WindowEventType::WINDOW_RESIZE:
                        break;
                    default:
                        assert(false);
                        break;
                }
                // 
            case EventType::Input:
                continue;
                // 
            default:
                assert(false);
                break;
            }
        }
    }

}