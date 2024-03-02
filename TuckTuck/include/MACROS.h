// This file is necessary because of how modules handle (or don't handle)
// preprocessor definitions. The best way to integrate preprocessor definitions 
// seems to be to define them in an appropriate header and #include that header.

// include and use spdlogs in this project at this point.

#pragma once // still need to check the difference between this and a 
// ifndef-define-endif block

#include "spdlog/spdlog.h"


