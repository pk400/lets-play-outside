
#ifndef MENUSTATE_HPP
#define MENUSTATE_HPP

#include "../handlers/State.hpp"

class MenuState : public State {
public:
    MenuState();
    int handleInput();
    void update(float deltatime);
    void render(sf::RenderWindow& gamewindow);
};

#endif /* MENUSTATE_HPP */
