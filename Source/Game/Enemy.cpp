#include "Enemy.h"

#include <cmath>

void Enemy::Initialize(Vector2 startPosition)
{
    position = startPosition;
}

void Enemy::Update(float deltaTime, Vector2 targetPosition)
{
    Vector2 direction{
        targetPosition.x - position.x,
        targetPosition.y - position.y
    };

    float distance = std::sqrt(direction.x * direction.x + direction.y * direction.y);
    if (distance <= 0.001f)
    {
        return;
    }

    direction.x /= distance;
    direction.y /= distance;

    position.x += direction.x * speed * deltaTime;
    position.y += direction.y * speed * deltaTime;
}

void Enemy::Render()
{
    DrawCircleV(position, radius, RED);
}
