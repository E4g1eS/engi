#include "engine.h"

Engine * Engine::m_instance = nullptr;
std::mutex Engine::m_mutex;

Engine::Engine()
{
}

Engine::~Engine()
{
}

Engine *Engine::GetInstance()
{
    std::lock_guard<std::mutex> lock(m_mutex);

    if (m_instance == nullptr)
    {
        m_instance = new Engine();
    }

    return m_instance;
}
