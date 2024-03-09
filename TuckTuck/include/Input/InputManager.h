#pragma once

#include <Input/InputEventListener.h>

namespace TuckTuck 
{
    class InputManager
    {
    public:
        InputManager();
        ~InputManager();

    private:
        std::unique_ptr<InputEventListener> input_listener_;
    };

}