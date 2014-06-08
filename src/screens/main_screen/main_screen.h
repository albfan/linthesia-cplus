#ifndef LINTHESIA_MAIN_SCREEN_H
#define LINTHESIA_MAIN_SCREEN_H

#include "screens/abstract_screen.h"
#include "screens/screens.h"

namespace linthesia {

class MainScreen : public AbstractScreen {

    public:
        const static ScreenIndex INDEX;
        ScreenIndex run(sf::RenderWindow &app);

};


}
#endif
