#pragma once

#include <spdlog/spdlog.h>
// #include "spdlog/fmt/ostr.h"

namespace TuckTuck
{
    class Logger
    {
    public:
        void init();
        
        // inline static std::shared_ptr<spdlog::logger> getEngineLogger() { return engineLogger; } 
        // inline static std::shared_ptr<spdlog::logger> getClientLogger() { return clientLogger; } 

    private:
        // static std::shared_ptr<spdlog::logger> engineLogger;
        // static std::shared_ptr<spdlog::logger> clientLogger;
    };

}


// #define TUCKTUCK_ENGINE_TRACE(...) TuckTuck::Logger::getEngineLogger()->trace(__VA_ARGS__)
// #define TUCKTUCK_ENGINE_INFO(...) TuckTuck::Logger::getEngineLogger()->info(__VA_ARGS__)
// #define TUCKTUCK_ENGINE_WARN(...) TuckTuck::Logger::getEngineLogger()->warn(__VA_ARGS__)
// #define TUCKTUCK_ENGINE_ERROR(...) TuckTuck::Logger::getEngineLogger()->error(__VA_ARGS__)
// #define TUCKTUCK_ENGINE_CRITICAL(...) TuckTuck::Logger::getEngineLogger()->critical(__VA_ARGS__)

// #define TUCKTUCK_CLIENT_TRACE(...) TuckTuck::Logger::getClientLogger()->trace(__VA_ARGS__)
// #define TUCKTUCK_CLIENT_INFO(...) TuckTuck::Logger::getClientLogger()->info(__VA_ARGS__)
// #define TUCKTUCK_CLIENT_WARN(...) TuckTuck::Logger::getClientLogger()->warn(__VA_ARGS__)
// #define TUCKTUCK_CLIENT_ERROR(...) TuckTuck::Logger::getClientLogger()->error(__VA_ARGS__)
// #define TUCKTUCK_CLIENT_CRITICAL(...) TuckTuck::Logger::getClientLogger()->critical(__VA_ARGS__)
