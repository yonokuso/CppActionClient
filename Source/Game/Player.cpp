#include "Player.h"

#include <cmath>

void Player::Initialize(Vector2 startPosition)
{
    position = startPosition;
}

void Player::Update(float deltaTime)
{
    Vector2 direction{ 0.0f, 0.0f };

    if (IsKeyDown(KEY_W)) direction.y -= 1.0f;
    if (IsKeyDown(KEY_S)) direction.y += 1.0f;
    if (IsKeyDown(KEY_A)) direction.x -= 1.0f;
    if (IsKeyDown(KEY_D)) direction.x += 1.0f;

    // Normalize diagonal movement so speed stays consistent.
    if (direction.x != 0.0f || direction.y != 0.0f)
    {
        float length = std::sqrt(direction.x * direction.x + direction.y * direction.y);
        direction.x /= length;
        direction.y /= length;
    }

    position.x += direction.x * speed * deltaTime;
    position.y += direction.y * speed * deltaTime;
}

void Player::Render()
{
    DrawCircleV(position, radius, BLUE);
}

Vector2 Player::GetPosition() const
{
    return position;
}
