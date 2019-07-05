#include <SFML/Graphics.hpp>
#include <iostream>


int main(int argc,char** argv) {

    sf::RenderWindow window(sf::VideoMode(512, 532), "zz", sf::Style::Close | sf::Style::Resize);
    sf::RectangleShape player(sf::Vector2f(100.2f, 100.2f));
    player.setPosition(206.0f, 206.0f );
    //player.setFillColor(sf::Color::Green);
    sf::Texture playerTexture;
    playerTexture.loadFromFile("tux_from_linux.png");
    player.setTexture(& playerTexture);

    while(window.isOpen()){
        sf::Event evnt;
        while (window.pollEvent(evnt)){
            switch(evnt.type){
                case sf::Event::Closed:
                    window.close();
                    break;
                case sf::Event::Resized:
                    //std::cout<<"New window width:"<<evnt.size.width<<"New size height:"<<evnt.size.height<<std::endl;
                    //printf("New window width: %i New window height %i",evnt.size.width, evnt.size.height);
                    break;
                case sf::Event::TextEntered:
                    if(evnt.text.unicode<128) {
                        printf("%c",evnt.text.unicode);
                    }
                    break;
            }
            if (evnt.type == evnt.Closed){
                window.close();
            }


        }

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A)){
            //player.move(0.1f, 0.0f);
        }

        window.clear();
       window.draw(player);
        window.display();
    }


return 0;
}

