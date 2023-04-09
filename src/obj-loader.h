#ifndef OBJ_LOADER_H
#define OBJ_LOADER_H

#include "file-loader.h"
#include "model.h"

#include <vector>
#include <memory>
#include <string>

class ObjLoader : FileLoader {

public:
    std::vector<std::shared_ptr<Model>> LoadFromFile(std::string path);
};

#endif