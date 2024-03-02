module;

#include "spdlog/spdlog.h"
// #include "MACROS.h"

export module TuckTuck:Logger;

import <memory>;

namespace TuckTuck
{
    
    export class Logger
    {
    public:
        void init();
        
        // inline static std::shared_ptr<spdlog::logger> getEngineLogger() { return engineLogger; } 
        // inline static std::shared_ptr<spdlog::logger> getClientLogger() { return clientLogger; } 

    private:
        std::shared_ptr<spdlog::logger> engineLogger;
        std::shared_ptr<spdlog::logger> clientLogger;
    };

    void Logger::init()
    {
        engineLogger = std::make_shared<spdlog::logger>("TUCKTUCK");
        spdlog::register_logger(engineLogger);
        engineLogger->set_pattern("%H:%M:%S %z [thread %t] %v");
        engineLogger->set_level(spdlog::level::trace);

        clientLogger = std::make_shared<spdlog::logger>("Client");
        spdlog::register_logger(clientLogger);
        // just including this as an example to myself that I can set different patterns
        // for different loggers
        clientLogger->set_pattern("%H:%M:%S %z [thread %t] [process %p] %v");
        clientLogger->set_level(spdlog::level::trace);
    }       

    // I really wish I could write this with macro syntax because I think it would be 
    // a lot cleaner. For now, variadic templates will have to do.

    // Since modules do not export macros or any preprocessor definitions, the
    // best way to mimic a #define TUCKTUCK_ENGINE_ERROR(...) macro is to use and 
    // export global functions.
    // 
    // There is also a question of "why are you using macros in the first place?"
    // Maybe this is an improvement, maybe it's not? We'd need a larger codebase
    // to tell and it likely wouldn't be worth anyone's time.
    // In this case, however, a macro would've been a bit cleaner than 10 templates.
    // Putting these inside the class is also a bit annoying now because then you'd 
    // have to type the Logger class.

    // Nevermind, this stuff HAS to be in a header. It is not possible to build a cstdarg
    // module in g++, templates cannot be exported, and so there's no feasible way to do
    // variadic args in a module (if you want a variadic-arg function to be exported). 
    // Well, here's an example of modules making my code worse - at least if we have an
    // aim of sticking to the format suggested by the Cherno's tutorials.

    // template<typename T, typename... Args> 
    // export inline void logEngineTrace(T str, Args... args);
    // template<typename T, typename... Args> 
    // export inline void logEngineInfo(T str, Args... args);
    // template<typename T, typename... Args> 
    // export inline void logEngineWarn(T str, Args... args);
    // template<typename T, typename... Args> 
    // export inline void logEngineError(T str, Args... args);
    // template<typename T, typename... Args> 
    // export inline void logEngineCritical(T str, Args... args);

    // template<typename T, typename... Args> 
    // export inline void logTrace(T str, Args... args);
    // template<typename T, typename... Args> 
    // export inline void logInfo(T str, Args... args);
    // template<typename T, typename... Args> 
    // export inline void logWarn(T str, Args... args);
    // template<typename T, typename... Args> 
    // export inline void logError(T str, Args... args);
    // template<typename T, typename... Args> 
    // export inline void logCritical(T str, Args... args);

    // template<typename T, typename... Args> 
    // inline void logEngineTrace(T str, Args... args) { TuckTuck::Logger::getEngineLogger()->trace(str, args...); }
    // template<typename T, typename... Args> 
    // inline void logEngineInfo(T str, Args... args) { TuckTuck::Logger::getEngineLogger()->info(str, args...); }
    // template<typename T, typename... Args> 
    // inline void logEngineWarn(T str, Args... args) { TuckTuck::Logger::getEngineLogger()->warn(str, args...); }
    // template<typename T, typename... Args> 
    // inline void logEngineError(T str, Args... args) { TuckTuck::Logger::getEngineLogger()->error(str, args...); }
    // template<typename T, typename... Args> 
    // inline void logEngineCritical(T str, Args... args) { TuckTuck::Logger::getEngineLogger()->critical(str, args...); }

    // template<typename T, typename... Args> 
    // inline void logTrace(T str, Args... args) { TuckTuck::Logger::getClientLogger()->trace(str, args...); }
    // template<typename T, typename... Args> 
    // inline void logInfo(T str, Args... args) { TuckTuck::Logger::getClientLogger()->info(str, args...); }
    // template<typename T, typename... Args> 
    // inline void logWarn(T str, Args... args) { TuckTuck::Logger::getClientLogger()->warn(str, args...); }
    // template<typename T, typename... Args> 
    // export inline void logError(T str, Args... args) { TuckTuck::Logger::getClientLogger()->error(str, args...); }
    // template<typename T, typename... Args> 
    // export inline void logCritical(T str, Args... args) { TuckTuck::Logger::getClientLogger()->critical(str, args...); }

}

