#include <stdbool.h>
#include <stdint.h>


typedef enum
{
    ARG_TYPE_SINT,
    ARG_TYPE_UINT,
    ARG_TYPE_FLOAT,
    ARG_TYPE_STR,
} ARG_TYPE;

typedef enum 
{
    ARG_LIMIT_RANGE,
    ARG_LIMIT_LIST
} ARG_LIMIT_TYPE;

typedef union 
{
    int32_t sinteger;
    uint32_t uinteger;
    float floating;
    const char* string;
} ArgValue;

typedef struct 
{
    ARG_TYPE type;
    ARG_LIMIT_TYPE limitType;
    ArgValue* limits;
    ArgValue value;
} Arg;


typedef bool (*Action)(Arg* argv, unsigned int argc, char* response);

typedef struct 
{
    const char* name;
    Arg args[2];
    int argCount;
    Action action;
} Command;

bool Cmd1(Arg* argv, unsigned int argc, char* response)
{
    return true;
}

Command commands[1] =
{
    {.name = "cmd1", {}, 2, Cmd1}   
};




bool HandleCommand(const char* command, const char* response)
{
 
    return true;
}

