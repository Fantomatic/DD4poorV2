/*#include<SFML/Graphics.hpp>
#include<SFML/Audio.hpp>

#define APP_WIDTH 800
#define APP_HEIGHT 600

using namespace sf;

bool initialisation(){

    RenderWindow window(VideoMode(APP_WIDTH, APP_HEIGHT), "DD4poor");
    window.setVerticalSyncEnabled(true);
    RectangleShape bouton(Vector2f(100,100));
    bouton.setPosition(Vector2f(200,200));
    Image img1,img2,img3,img4,img5;
    img1.LoadFromFile("/img/redbutton.jpg");
    img2.LoadFromFile("/img/redbutton.jpg");
    img3.LoadFromFile("/img/redbutton.jpg");
    img4.LoadFromFile("/img/redbutton.jpg");
    img5.LoadFromFile("/img/redbutton.jpg");
    Sprite bouton1(img);
    bouton1.SetPosition(100.f, 100.f);
    Sprite bouton2(img);
    bouton2.SetPosition(200.f, 200.f);
    Sprite bouton3(img);
    bouton3.SetPosition(300.f, 300.f);
    Sprite bouton4(img);
    bouton4.SetPosition(400.f, 400.f);
    Sprite bouton5(img);
    bouton5.SetPosition(500.f, 500.f);
    while (window.isOpen()){
        sf::Event event;
        while (window.pollEvent(event)){
            if (event.type == sf::Event::Closed)
                window.close();
            if(Mouse::isButtonPressed(Mouse::Left)){
                if(((window.GetInput().GetMouseX())==100.f)&&((window.GetInput().GetMouseY())==100.f)){
                event.Play();
                }
                if(((window.GetInput().GetMouseX())==200.f)&&((window.GetInput().GetMouseY())==200.f)){
                event.Play();
                }
                if(((window.GetInput().GetMouseX())==300.f)&&((window.GetInput().GetMouseY())==300.f)){
                event.Play();
                }
                if(((window.GetInput().GetMouseX())==400.f)&&((window.GetInput().GetMouseY())==400.f)){
                event.Play();
                }
                if(((window.GetInput().GetMouseX())==500.f)&&((window.GetInput().GetMouseY())==500.f)){
                event.Play();
                }
            }
            }

            window.clear();
            window.draw(bouton1);
            window.draw(bouton2);
            window.draw(bouton3);
            window.draw(bouton4);
            window.draw(bouton5);
            window.display();
    }
     return true;
}
*/
