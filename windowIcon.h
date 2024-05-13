HWND g_hwnd = NULL;
std::string g_windowTitle = "Window with Icon"; // Change this to match your window title

BOOL CALLBACK EnumWindowsProc(HWND hwnd, LPARAM lParam) {
    char windowTitle[256];
    GetWindowText(hwnd, windowTitle, sizeof(windowTitle));

    if (std::string(windowTitle) == g_windowTitle) {
        g_hwnd = hwnd;
        return FALSE; // Stop enumeration
    }

    return TRUE; // Continue enumeration
}

void setWindowIcon(const char* filename) {
    HICON icon = (HICON)LoadImage(NULL, filename, IMAGE_ICON, 0, 0, LR_LOADFROMFILE);
    if (icon == NULL) {
        std::cerr << "Failed to load icon" << std::endl;
        return;
    }

    // Enumerate windows to find the GLUT window
    EnumWindows(EnumWindowsProc, 0);

    if (g_hwnd == NULL) {
        std::cerr << "Failed to find window" << std::endl;
        return;
    }

    if (!SendMessage(g_hwnd, WM_SETICON, ICON_BIG, (LPARAM)icon)) {
        DWORD error = GetLastError();
        std::cerr << "Failed to set window icon. Error code: " << error << std::endl;
        return;
    }
}
