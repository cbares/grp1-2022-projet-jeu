#include "NetMessageHandler.h"
#include "../../client/client/Macro.hpp"
#include "../state.h"
#include <algorithm>
#include <string.h>


std::string engine::NetMessageHandler::Fill(std::string format,int* args)
{
    char output[256];
    strcpy(output,format.c_str());
    int n = std::count(format.begin(), format.end(), '$');
    for(int i = 0; i < n; i++)
    {
        char buffer[256];
        ReplaceFirstOccurence(output,'$','%');
        sprintf(buffer,(const char*)output,args[i]);
        strcpy(output,buffer);
    }
    free(args);
    return std::string(output);
}
std::string engine::NetMessageHandler::PushNetParam(std::string packet,int param)
{
    char output[256];
    char buffer[256];
    strcpy(output,packet.c_str());
    ReplaceFirstOccurence(output,'$','%');
    sprintf(buffer,(const char*)output,param);
    return std::string(buffer);
}
void engine::NetMessageHandler::ReplaceFirstOccurence(char* str,char before,char after)
{
    int i = -1;
    while(str[++i])
    {
        if(str[i] == before)
        {
            str[i] = after;
            return;
        }
    }
}