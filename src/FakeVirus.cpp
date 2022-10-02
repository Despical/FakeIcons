#include <Windows.h>

#define SCREEN_WIDTH 1920
#define SCREEN_HEIGHT 1080

HICON icons[] = {
    LoadIcon(NULL, IDI_ERROR),
    LoadIcon(NULL, IDI_WARNING),
    LoadIcon(NULL, IDI_INFORMATION),
    LoadIcon(NULL, IDI_QUESTION)
};

size_t s_icons = sizeof(icons);

void DrawIcons() {
    HWND hWnd = GetDesktopWindow();
    HDC hdc = GetWindowDC(hWnd);

    DrawIcon(hdc, rand() % SCREEN_WIDTH, rand() % SCREEN_HEIGHT, icons[rand() % s_icons]);

    ReleaseDC(hWnd, hdc);
}

int main() {
    while (1) {

        SetCursorPos(rand() % SCREEN_WIDTH, rand() % SCREEN_HEIGHT);
    }

    return 0;
}