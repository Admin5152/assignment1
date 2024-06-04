//Lets Begin//

#include <iostream>

int main() {
    char choice;

    do {
        int score;

        std::cout << "Enter your score: ";
        std::cin >> score;

        if (score >= 70) {
            std::cout << "A First class (well done)" << std::endl;
        }
        else if (score >= 60) {
            std::cout << "B Second class (pass)" << std::endl;
        }
        else if (score >= 50) {
            std::cout << "C Average score" << std::endl;
        }
        else {
            std::cout << "You fail the exam" << std::endl;
        }

        std::cout << "Do you want to enter another score? (Y/N): ";
        std::cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    std::cout << "Exiting the program. Goodbye!" << std::endl;

    return 0;
}



// you can olso use switch cases instead of if statment//

// #include <iostream>



// int main(){

//     std::cout<<"Enter your score" << std::endl;

//     char grade;

//     switch (grade)
//     {
//     case "A":
//         std::cout<<"First class"<<std::endl;
//         break;
    
//     default:
//         break;
//     }

//     case "B":
//         std::cout<< "bLAH BLAH"<< std::endl;
//         break;



//     return 0;
// }


//in this format