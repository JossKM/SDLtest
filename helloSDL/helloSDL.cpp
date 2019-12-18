// helloSDL.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <SDL.h>

int main(int argc, char* argv[])
{
    std::cout << "Hello puppy!\n";
    
    int errCode = SDL_Init(SDL_INIT_VIDEO);

    if (errCode != 0)
    {
        std::cout << "SDL failed to initialize" << SDL_GetError() << std::endl;
        std::getchar();
        return errCode;
    }

    std::cout << "SDL initialized correctly!" << std::endl;


    SDL_Window* window  = SDL_CreateWindow("Hello SDL", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 512, 512, SDL_WINDOW_SHOWN);
    std::getchar();
    SDL_Quit();
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
