#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <cstdlib>
#include <iostream>.


#define APP_WIDTH 800
#define APP_HEIGHT 600

using namespace sf;
using namespace std;

int main()
{
    RenderWindow app(sf::VideoMode(APP_WIDTH, APP_HEIGHT), "Ninja - Initialisation");
    app.setFramerateLimit(60);

    RectangleShape bouton(Vector2f(100,100));
    bouton.setPosition(Vector2f(200,200));

    while (app.isOpen())
    {
        sf::Event event;
        while (app.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                app.close();
        }

        if(Mouse::isButtonPressed(Mouse::Right))
        {
            if(Mouse::getPosition().x >= bouton.getPosition().x && Mouse::getPosition().x <= bouton.getPosition().x + bouton.getGlobalBounds().width && Mouse::getPosition().y >= bouton.getPosition().y && Mouse::getPosition().y <= bouton.getPosition().y + bouton.getGlobalBounds().height)
            {
                cout << "clic bouton" << endl;
            }
        }

        app.clear();

        app.draw(bouton);

        app.display();
    /*
    archetypes = bdd();
    while (continuer)
    {
        SDL_WaitEvent(&event);
        switch(event.type)
        {
            case SDL_QUIT:
                continuer = 0;
                break;
            case SDL_MOUSEMOTION:
                positionZozor.x = event.motion.x;
                positionZozor.y = event.motion.y;
                break;
        }

        SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));
        SDL_BlitSurface(zozor, NULL, ecran, &positionZozor); /* On place Zozor à sa nouvelle position
        SDL_Flip(ecran); */
    }
    return 0;
}
