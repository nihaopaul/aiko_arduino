#include "WProgram.h"

#include "AikoCommands.h"

namespace Aiko {
  namespace Command {
    SExpression parameter;

#include "aiko_commands/AikoCommandNode.cpp"
  }
}