#ifndef ENGINE_H
#define ENGINE_H

#include "window.h"

#include <memory>
#include <mutex>

class Engine {
    static Engine * m_instance;
    static std::mutex m_mutex;

    Engine();
    ~Engine();

public:

    Engine(Engine &other) = delete;
    void operator=(const Engine &other) = delete;

    static Engine* GetInstance();

};

#endif