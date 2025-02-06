
#include <iostream>
#include <string>
std::string initialsinput;
char cac1;
char cac2;
char cac3;
bool LeaveLoop = false;

int main()
{

    std::cout << "Hello!!!\nWelcome to to the Monogram Program!\n";

    do {
        std::cout << "\nPlease enter your initials! (first, middle and last): ";

        std::getline(std::cin, initialsinput);


        std::cout << "\n";
        if (initialsinput.size() == 3) {
            cac1 = initialsinput.at(0);
            cac2 = initialsinput.at(1);
            cac3 = initialsinput.at(2);
            cac1 = tolower(cac1);
            cac2 = toupper(cac2);
            cac3 = toupper(cac3);

            std::cout << "Your monogram will be ";
            std::cout << cac2 << "." << cac1 << "." << cac3 << ".\n";
            std::cout << "\nThanks for using the Monogram Program!\nProgram will now close...";
            return 0;
        }
        else if (initialsinput.size() == 5) {
            cac1 = initialsinput.at(0);
            cac2 = initialsinput.at(2);
            cac3 = initialsinput.at(4);
            cac1 = tolower(cac1);
            cac2 = toupper(cac2);
            cac3 = toupper(cac3);

            std::cout << "Your monogram will be ";
            std::cout << cac2 << "." << cac1 << "." << cac3 << ".\n";
            std::cout << "\nThanks for using the Monogram Program!\nProgram will now close...";
            return 0;
        }

        else {
            std::cout << "\nInvalid Input!!!";
            std::cout << "\nPlease enter your intials either as HGW, H G W, or H.G.W. and try again...\n";
        }
    } while (!(LeaveLoop == true));
    
  
}
