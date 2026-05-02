#pragma once

#include "raylib.h"

class Enemy
{
public:
    void Initialize(Vector2 startPosition);
    void Update(float deltaTime, Vector2 targetPosition);
    void Render();

private:
    Vector2 position{};
    float speed = 120.0f;
    float radius = 18.0f;
};
