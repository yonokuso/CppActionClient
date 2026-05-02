#include "GameScene.h"

void GameScene::Initialize()
{
    player.Initialize({ 640.0f, 360.0f });
    enemy.Initialize({ 200.0f, 200.0f });
}

void GameScene::Update(float deltaTime)
{
    player.Update(deltaTime);
    enemy.Update(deltaTime, player.GetPosition());
}

void GameScene::Render()
{
    player.Render();
    enemy.Render();
}

void GameScene::Shutdown()
{
    // Texture and sound cleanup will live here when resources are added.
}
