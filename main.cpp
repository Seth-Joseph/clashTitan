#include "Oceania.h"
#include "Gaia.h"
#include "Prometheus.h"
#include "Atlas.h"
#include "Battle.h"
#include "Player.h"
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
#include <iostream>

using namespace std;

int main() {
    srand(static_cast<unsigned>(time(0)));  // Seed random number generator

    string playerName;
    int playerChoice;

    // Get player name
    cout << "Enter your name: ";
    getline(cin, playerName);

    // Display Titan choices
    cout << "Choose your Titan:" << endl;
    cout << "1. Oceania (Water)" << endl;
    cout << "2. Gaia (Ice)" << endl;
    cout << "3. Atlas (Earth)" << endl;  
    cout << "4. Prometheus (Fire)" << endl;  

    // Get player choice
    cout << "Enter the number of your chosen Titan: ";
    cin >> playerChoice;

    // Create Player object
    Player player(playerName, playerChoice);

    // Create Titan objects based on player choice
    Titan* playerTitan = nullptr;
    Titan* opponent1 = nullptr;
    Titan* opponent2 = nullptr;
    Titan* opponent3 = nullptr;

    switch (playerChoice) {
        case 1:
            playerTitan = new Oceania("Oceania", "Water", 65, 45, 49, 49);
            opponent1 = new Gaia("Gaia", "Ice", 86, 45, 49, 49);
            opponent2 = new Atlas("Atlas", "Earth", 50, 35, 55, 40);  
            opponent3 = new Prometheus("Prometheus", "Fire", 60, 39, 52, 43);   
            break;
        case 2:
            playerTitan = new Gaia("Gaia", "Ice", 86, 45, 49, 49);
            opponent1 = new Oceania("Oceania", "Water", 65, 45, 49, 49);
            opponent2 = new Atlas("Atlas", "Earth", 50, 35, 55, 40);  
            opponent3 = new Prometheus("Prometheus", "Fire", 60, 39, 52, 43);   
            break;
        case 3:
            playerTitan = new Atlas("Atlas", "Earth", 50, 35, 55, 40);  
            opponent1 = new Oceania("Oceania", "Water", 65, 45, 49, 49);
            opponent2 = new Gaia("Gaia", "Ice", 86, 45, 49, 49);
            opponent3 = new Prometheus("Prometheus", "Fire", 60, 39, 52, 43);     
            break;
        case 4:
            playerTitan = new Prometheus("Prometheus", "Fire", 60, 39, 52, 43);   
            opponent1 = new Oceania("Oceania", "Water", 65, 45, 49, 49);
            opponent2 = new Gaia("Gaia", "Ice", 86, 45, 49, 49);
            opponent3 = new Atlas("Atlas", "Earth", 50, 35, 55, 40);    
            break;
        default:
            cout << "Invalid choice!" << endl;
            return 1;
    }

    // Start battles
    Battle battle;
    battle.startBattle(playerTitan, opponent1);
    if (playerTitan->getHp() > 0) battle.startBattle(playerTitan, opponent2);
    if (playerTitan->getHp() > 0) battle.startBattle(playerTitan, opponent3);

    // Clean up
    delete playerTitan;
    delete opponent1;
    delete opponent2;
    delete opponent3;

    return 0;
}



// #include <SFML/Graphics.hpp>
// #include <iostream>
// int main()
// {
//     sf::RenderWindow window(sf::VideoMode(512, 512),"Clash Titan V1.0",sf::Style::Close | sf::Style::Resize );
//     sf::RectangleShape player(sf::Vector2f(100.0f,100.0f));

//     player.setFillColor(sf::Color::Cyan);
//     player.setOrigin(50.0f, 50.0f); 

//     sf::Texture playerTexture;
//     playerTexture.loadFromFile("textures/pkmn-01.jpg");
//     player.setTexture(&playerTexture);
    
//     sf::Vector2u textureSize = playerTexture.getSize();

//     while (window.isOpen())
//     {
//         sf::Event evnt;
//         while (window.pollEvent(evnt)){

//             switch (evnt.type)
//             {
//             case sf::Event::Closed:
//                 window.close();
//                 break;
//             // case sf::Event::Resized:
//             //     std::cout << evnt.size.width  << "x" << evnt.size.height << std::endl;
//             //     break;

//             // case sf::Event::TextEntered:
//             // if (evnt.text.unicode < 182){
//             //     printf("%c",evnt.text.unicode);

//             // }
            
            
//             }
        
//         }
//         if (sf::Mouse::isButtonPressed(sf::Mouse::Left)){
//             sf::Vector2i mousePos = sf::Mouse::getPosition(window);
//             player.setPosition((float)mousePos.x, static_cast<float>(mousePos.y));
//         }
//         window.clear();
//         window.draw(player);
//         window.display();
//     }
    

//     return 0;
// }
