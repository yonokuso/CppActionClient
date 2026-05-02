#pragma once

#include "../Game/Enemy.h"
#include "../Game/Player.h"

class GameScene
{
public:
    void Initialize();
    void Update(float deltaTime);
    void Render();
    void Shutdown();

private:
    Player player;
    Enemy enemy;
};
