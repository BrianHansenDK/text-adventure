# include <iostream>
# include <string>

int main() {
  int current_steps = 0;
  int first_step, second_step;
  for (int i = 0; i < 3; i++) {
    int user_step;
    switch (i) {
      case (0):
        std::cout << "You are in front of 3 gates." << std::endl;
        std::cout << "One to your left.\nOne to your right.\nAnd one directly in front of you." << std::endl;
        std::cout << "1) -> Go left\n2) -> Go straight\n3) -> Go right" << std::endl;
        std::cin >> first_step;
        break;
      case (1):
        switch (first_step) {
          default:
            std::cout << "You chose the left gate." << std::endl;
            std::cout << "You are in front of 3 gates." << std::endl;
            std::cout << "One to your left.\nOne to your right.\nAnd one directly in front of you." << std::endl;
            std::cout << "1) -> Go left\n2) -> Go straight\n3) -> Go right" << std::endl;
            break;
          case (2):
            std::cout << "You chose the middle gate." << std::endl;
            std::cout << "You are in front of a magic pig." << std::endl;
            std::cout << "It asks you to hop on and take a flight but actually you are quite hungry..." << std::endl;
            std::cout << "1) -> Fly the pig\n2) -> Roast the pig" << std::endl;
            break;
          case (3):
            std::cout << "You chose the right gate." << std::endl;
            std::cout << "In front of you stands a big, beasty werewolf!?" << std::endl;
            std::cout << "On the ground you see a silver blade on your left, a gun to your right." << std::endl;
            std::cout << "1) -> Pick up the blade and cut the werewolf\n" << std::endl;
            std::cout << "2) -> Pick up the gun and shoot the werewolf" << std::endl;
            break;
        }
        std::cin >> second_step;
        break;
      case (2):
        switch (first_step) {
          default:
            std::cout << "You chose the left gate." << std::endl;
            std::cout << "You are in front of 3 gates." << std::endl;
            std::cout << "One to your left.\nOne to your right.\nAnd one directly in front of you." << std::endl;
            std::cout << "1) -> Go left\n2) -> Go straight\n3) -> Go right" << std::endl;
            std::cout << "You are stuck in an endless loop..." << std::endl;
            break;
          case (2):
            switch (second_step) {
              case (1):
                std::cout << "You hop on the pig and fly across a huge castle!" << std::endl;
                std::cout << "You land on top of a huge mountain in the sky." << std::endl;
                std::cout << "Upon the mountain you find the biggest treasure on the Grand line!" << std::endl;
                std::cout << "You found the one piece!" << std::endl;
                break;
              case (2):
                std::cout << "You roast the pig, eat it and die of pig influenza..." << std::endl;
                break;
            }
            break;
          case (3):
            switch (second_step) {
              case (1):
                std::cout << "You defeated the werewolf!" << std::endl;
                break;
              default:
                std::cout << "You picked up the gun, but no bullets was inside.." << std::endl;
                std::cout << "The werewolf ate you!" << std::endl;
                break;
            }
            break;
        }
        }

  }
}
