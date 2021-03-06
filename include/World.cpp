
#include "world/World.hpp"

World::World(int levelid) {
    switch(levelid) {
        case 0: {
            background.setGameObject("assets/backgrounds/bg_mountains.png");
            background.setScale(sf::Vector2f(2.f, 2.f));
            background.setPosition(sf::Vector2f(0.f, 240.f - 30.f));

            // TODO: create stack of platforms aligned horizonatally underneath background
            platform.setGameObject("assets/sprites/grass-dirt.png");
            platform.setPosition(sf::Vector2f(0.f, 450.f));

            break;
        }
        default: break;
    }
}

void World::render(sf::RenderWindow& gamewindow) {
    gamewindow.clear(sf::Color(254, 189, 104));
    gamewindow.draw(background.getSprite());
    gamewindow.draw(platform.getSprite());
}
