#ifndef TRAIL_HPP
#define TRAIL_HPP

#include <SFML/Graphics.hpp>

class Trail : public sf::Drawable {
    private:
        const int length;

        sf::CircleShape points[5000];
    public:
        Trail();
        virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;
        void update();
        void update(int x, int y);
};


#endif
