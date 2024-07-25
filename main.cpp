#include <iostream>
#include <raylib.h>

int main () {
    const int screen_width = 1280;
    const int screen_height = 800;

    InitWindow(screen_width, screen_height, "My Pong Game");
    SetTargetFPS(60); // How fast the game should run (60 frames per sec)

    // Game Loop
    while (WindowShouldClose() == false) {
        BeginDrawing();
        // 1. Check for events
        // 2. Update positions of game objects
        // 3. Draw game objects in their new positions
        EndDrawing();
    }
    
    CloseWindow();
    return 0;
}