#include <iostream>

int main(void) {
    std::cout << "Hello and welcome to my text adventure.\n";
    std::string choice;
    char valid;
    
    std::cout << "It's 3am. You're hungry but you need to go to work tomorrow.\n";
    std::cout << "Go back to sleep?\n";
    do {
        std::cout << "1) Go back to sleep.\n";
        std::cout << "2) Go downstairs.\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        valid = (choice == "1" || choice == "2");
        if (!valid)
            std::cout << "Error: invalid choice\n";
    } while (!valid);
    if (choice == "1") {
        std::cout << "You go back to sleep.\n";
        std::cout << "Sleep Ending\n";
        return 0;
    }
    std::cout << "You go downstairs.\n";
    std::cout << "You're about to open the fridge when you hear a strange noise.\n";
    std::cout << "Suddenly, Freddy Fazbear appears. He's approaching you rather rapidly.\n";
    std::cout << "You have 2 weapons at your disposal.\n";
    do {
        std::cout << "1) Knife\n";
        std::cout << "2) Gun\n";
        std::cout << "Which will you use? ";
        std::cin >> choice;
        valid = (choice == "1" || choice == "2");
        if (!valid)
            std::cout << "Error: invalid choice\n";
    } while (!valid);
    if (choice == "1") {
        std::cout << "You try and get the knife but Freddy shoots you.\n";
        std::cout << "Game Over\n";
        return 1;
    }
    std::cout << "You get a gun and shoot Freddy.\n";
    std::cout << "He falls to the ground.\n";
    std::cout << "You think perhaps you should forget about all this and go back to sleep.\n";
    std::cout << "Go back to sleep?\n";
    do {
        std::cout << "1) Yes\n";
        std::cout << "2) No\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        valid = (choice == "1" || choice == "2");
        if (!valid)
            std::cout << "Error: invalid choice\n";
    } while (!valid);
    if (choice == "1") {
        std::cout << "You go back to sleep.\n";
        std::cout << "Sleep Ending\n";
        return 0;
    }
    std::cout << "You open the fridge.\n";
    std::cout << "To your surprise, there's a portal.\n";
    std::cout << "Go into the portal or ignore it and eat?\n";
    do {
        std::cout << "1) Go inside.\n";
        std::cout << "2) Eat.\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        valid = (choice == "1" || choice == "2");
        if (!valid)
            std::cout << "Error: invalid choice\n";
    } while (!valid);
    if (choice == "2") {
        std::cout << "You ignore the portal and eat cereal.\n";
        std::cout << "You're no longer hungry.\n";
        std::cout << "Well Fed Ending\n";
        return 0;
    }
    std::cout << "You go inside the portal.\n";
    std::cout << "You emerge on a race track.\n";
    std::cout << "You're told you have to race and you have to pick a car.\n";
    std::cout << "You have 2 choices: \n";
    do {
        std::cout << "1) Rusty Car\n";
        std::cout << "2) Bugatti\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        valid = (choice == "1" || choice == "2");
        if (!valid)
            std::cout << "Error: invalid choice\n";
    } while (!valid);
    if (choice == "2") {
        std::cout << "You choose the slick bugatti.\n";
        std::cout << "Unfortunately, it's too fast and you crash.\n";
        std::cout << "You lose the race.\n";
        std::cout << "Game Over\n";
        return 1;
    }
    std::cout << "You choose the rusty car.\n";
    std::cout << "Somehow, you win the race.\n";
    std::cout << "You're then teleported back home.\n";
    std::cout << "You decide to go back to bed and forget any of this ever happened.\n";
    std::cout << "The End\n";
    return 0;
}