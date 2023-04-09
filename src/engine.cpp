#include "engine.h"

Engine *Engine::GetInstance()
{
    std::lock_guard<std::mutex> lock(m_mutex);

    if (m_instance == nullptr)
    {
        m_instance = new Engine();
    }

    return m_instance;
}
