#include "Application.h"
#include "raylib.h"

void Application::Run()
{
    InitWindow(1280, 720, "C++ Action Client Portfolio");
    SetTargetFPS(60);

    gameScene.Initialize();

    while (!WindowShouldClose())
    {
        float deltaTime = GetFrameTime();

        gameScene.Update(deltaTime);

        BeginDrawing();
        ClearBackground(BLACK);

        gameScene.Render();

        EndDrawing();
    }

    gameScene.Shutdown();
    CloseWindow();
}