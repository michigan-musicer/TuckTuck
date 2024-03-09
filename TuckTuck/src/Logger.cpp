#include <Logger.h>
#include <spdlog/sinks/stdout_color_sinks.h>

namespace TuckTuck
{
    Logger::Logger()
    {
        // engineLogger = std::make_shared<spdlog::logger>("TUCKTUCK");
        engineLogger = spdlog::stderr_color_mt("TUCKTUCK");
        // spdlog::register_logger(engineLogger);
        engineLogger->set_pattern("TUCKTUCK: %H:%M:%S %z [thread %t] %v");
        engineLogger->set_level(spdlog::level::trace);

        // clientLogger = std::make_shared<spdlog::logger>("Client");
        clientLogger = spdlog::stderr_color_mt("CLIENT");
        // spdlog::register_logger(clientLogger);

        // just including this as an example to myself that I can set different patterns
        // for different loggers
        clientLogger->set_pattern("TUCKTUCKCLIENT: %H:%M:%S %z [thread %t] [process %p] %v");
        clientLogger->set_level(spdlog::level::trace);
    }       
}

