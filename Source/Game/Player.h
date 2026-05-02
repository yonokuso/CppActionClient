#pragma once

#include "raylib.h"

class Player
{
public:
    void Initialize(Vector2 startPosition);
    void Update(float deltaTime);
    void Render();

    Vector2 GetPosition() const;

private:
    Vector2 position{};
    float speed = 300.0f;
    float radius = 20.0f;
};
