
//
// Pour l'instant c'est un simple test de SMFL afin de vérifier que tout marche bien.
// Normalement ça affiche une fenêtre avec le texte "Hello SFML", une image de fond avec un arbre et un peu de musique
//

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

#define RESSOUCRES_PATH std::string("src/Ressources/")

int main(int, char const**)
{
    // Create the main window
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");

    // Set the Icon
    sf::Image icon;
    if (!icon.loadFromFile(RESSOUCRES_PATH + "icon.png")) {
        return EXIT_FAILURE;
    }
    window.setIcon(icon.getSize().x, icon.getSize().y, icon.getPixelsPtr());
    
    // Load a sprite to display
    sf::Texture texture;
    if (!texture.loadFromFile(RESSOUCRES_PATH + "cute_image.jpg")) {
        return EXIT_FAILURE;
    }
    sf::Sprite sprite(texture);

    // Create a graphical text to display
    sf::Font font;
    if (!font.loadFromFile(RESSOUCRES_PATH + "sansation.ttf")) {
        return EXIT_FAILURE;
    }
    sf::Text text("Hello SFML", font, 50);
    text.setColor(sf::Color::Black);

    // Load a music to play
    sf::Music music;
    if (!music.openFromFile(RESSOUCRES_PATH + "nice_music.ogg")) {
        return EXIT_FAILURE;
    }

    // Play the music
    music.play();

    // Start the game loop
    while (window.isOpen())
    {
        // Process events
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window : exit
            if (event.type == sf::Event::Closed) {
                window.close();
            }

            // Espace pressed : exit
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
                window.close();
            }
        }

        // Clear screen
        window.clear();

        // Draw the sprite
        window.draw(sprite);

        // Draw the string
        window.draw(text);

        // Update the window
        window.display();
    }
    
    return EXIT_SUCCESS;
}
