#include "trail.hpp"
#include "game.hpp"

Trail::Trail() : length(5000) {
    for(int i = 0; i < length; i++) {
        points[i].setRadius(2);
        points[i].setFillColor(sf::Color(i / (float)length * 255, (length - i) / (float)length * 255, (length - i) / (float)length * 150, (length - i) / (float)length * 255));
        points[i].setPosition(Game::SCREEN_WIDTH / 2, Game::SCREEN_HEIGHT / 2);
    }
}

void Trail::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    for(int i = length - 1; i >= 0; i--) {
        target.draw(points[i], states);
    }
}

void Trail::update() {
    for(int i = 1; i < length; i++) {
        float currentX = points[i].getPosition().x;
        float currentY = points[i].getPosition().y;

        float dX = (points[i - 1].getPosition().x - currentX) / 1.01;
        float dY = (points[i - 1].getPosition().y - currentY) / 1.01;
        points[i].move(dX, dY);
    }
}

void Trail::update(int x, int y) {
    float currentX = points[0].getPosition().x;
    float currentY = points[0].getPosition().y;

    float dX = (x - currentX) / 7.0;
    float dY = (y - currentY) / 7.0;
    points[0].move(dX, dY);

    update();
}
