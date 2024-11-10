#ifndef GAME_HPP
#define GAME_HPP

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "trail.hpp"

class Game {
    private:
        sf::RenderWindow window;
        sf::ContextSettings settings;

        bool isPlaying;
        bool mousePressed;

        Trail *trail;
    public:
        Game();
        void execute();
        void update();
        void render();

        static const int SCREEN_WIDTH;
        static const int SCREEN_HEIGHT;
};

#endif
