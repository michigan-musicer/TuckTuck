#include <Logger.h>

#include <spdlog/spdlog.h>

namespace TuckTuck
{
    void Logger::init()
    {
        // engineLogger = std::make_shared<spdlog::logger>("TUCKTUCK");
        // spdlog::register_logger(engineLogger);
        // engineLogger->set_pattern("%H:%M:%S %z [thread %t] %v");
        // engineLogger->set_level(spdlog::level::trace);

        // clientLogger = std::make_shared<spdlog::logger>("Client");
        // spdlog::register_logger(clientLogger);
        // // just including this as an example to myself that I can set different patterns
        // // for different loggers
        // clientLogger->set_pattern("%H:%M:%S %z [thread %t] [process %p] %v");
        // clientLogger->set_level(spdlog::level::trace);
    }       
}

