#ifndef LINTHESIA_MAIN_SCREEN_H
#define LINTHESIA_MAIN_SCREEN_H

#include "screens/abstract_screen.h"
#include "screens/screens.h"

#include "buttons/short_one_line_button.h"
#include "buttons/two_lines_button.h"

namespace linthesia {

/**
 * application main screen, the one which is displayed when game
 * is started
 */
class MainScreen : public AbstractScreen {

    public:
        MainScreen();
        const static ScreenIndex INDEX;

        /**
         * Event loop for this screen is runned inside this function
         * it returns the key corresponding to the next screen to load
         * or if the application needs to be quitted
         */
        ScreenIndex run(
            sf::RenderWindow &app,
            Context &context
        );

    protected:
        /**
         * Set the position of the exit button on main screen
         */
        void setExitButtonPosition(sf::RenderWindow &app);

        linthesia::ShortOneLineButton exitButton;

        /**
         *
         */
        void setChooseSongButtonPosition(sf::RenderWindow &app);
        linthesia::TwoLinesButton chooseSongButton;

        /**
         *
         */
        sf::Texture logoTexture;
        sf::Sprite logo;

        void setLogoPosition(sf::RenderWindow &app);

};


}
#endif

