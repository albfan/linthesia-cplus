#ifndef LINTHESIA_TWO_LINES_BUTTON_H
#define LINTHESIA_TWO_LINES_BUTTON_H

#include "abstract_button.h"

namespace linthesia {


/**
 * represent a button with some text hover it
 */
class TwoLinesButton: public AbstractButton {

    public :

        /**
         * @param title text to put hover the button
         *              to act as "title"
         */
        TwoLinesButton(
            const std::string& title,
            const std::string& text
        );

        /**
         * @see AbstractButton::actionTriggered
         */
        bool actionTriggered(const sf::Window &app);

        /**
         *
         */
        sf::FloatRect getGlobalBounds() const;

    private:

        /**
         *
         */
        virtual void draw(
            sf::RenderTarget& target,
            sf::RenderStates states
        ) const;

        /**
         *
         */
        void setHovered();
        void setUnhovered();


        /**
         *
         */
        sf::Sprite sprite;

        /**
         *
         */
        sf::Texture texture;

        /**
         *
         */
        sf::Text titleLabel;

        /**
         *
         */
        sf::Text textLabel;

        /**
         *
         */
        sf::Font font;

};

}

#endif
