#include <iostream>
#include "profile.hpp"

int main(void) {
    Profile sam("Sam", 30, "New York", "USA", "Male");
    sam.add_hobby("listening to audiobooks and podcasts");
    sam.add_hobby("playing rec sports like bowling and kickball");
    sam.add_hobby("writing a speculative fiction novel");
    sam.add_hobby("reading advice columns");
    std::cout << sam.view_profile();
}