#include "obj-loader.h"

#include "utility.h"

#include <string>
#include <fstream>

std::vector<std::string> ObjLoader::ReadFile(const std::string &path)
{
    std::vector<std::string> lines = std::vector<std::string>();

    std::ifstream fileStream;

    debug << "Opening '" << path << "' as OBJ..." << debug.newline(); 
    fileStream.open(path);

    if(!fileStream.is_open())
    {
        debug << "ERROR: Could not open!" << debug.newline();
        return lines;
    }

    for (std::string line; std::getline(fileStream, line);)
    {
        lines.push_back(line);
    }

    return lines;
}

std::vector<std::shared_ptr<Model>> ObjLoader::LoadFromFile(const std::string &path)
{
    std::vector<std::shared_ptr<Model>> models = std::vector<std::shared_ptr<Model>>();

    auto lines = this->ReadFile(path);

    return models;
}
