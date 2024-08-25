#ifndef DelvePLUGIN_H
#define DelvePLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include "Tool.h"
#include <string>

class DelvePlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "Delve";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;
};

#endif
