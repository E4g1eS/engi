#ifndef OBJ_LOADER_H
#define OBJ_LOADER_H

#include "file-loader.h"
#include "model.h"

#include <vector>
#include <memory>
#include <string>

class ObjLoader : FileLoader {
    std::vector<std::string> ReadFile(const std::string &path);

public:
    std::vector<std::shared_ptr<Model>> LoadFromFile(const std::string &path);
};

#endif