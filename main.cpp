#include <iostream>
#include <string>

int printMenu(int x){
    x = 999;
    std::cout << "Welcome Message designed by your group\n";
    std::cout << "*** SMS Main Menu ***\n";
    std::cout << "[1] Load Starting Data\n";
    std::cout << "[2] Show Student Records\n";
    std::cout << "[3] Add/Delete Students\n";
    std::cout << "[4] Edit Students\n";
    std::cout << "[5] Generate Transcript\n";
    std::cout << "[6] Credits and Exit\n";
    std::cout << "*************";
    std::cin >> x; //get user input
    return x; // return user input
}

main(){
    int response = 999; // set variable x to get user input;
    do{
        printMenu(response);

        switch (response)
        {
        case 1:
            std::cout << response << std::endl;
            break;
        case 2:
            std::cout << response << std::endl;
            break;
        case 3:
            std::cout << response << std::endl;
            break;
        case 4:
            std::cout << response << std::endl;
            break;
        case 5:
            std::cout << response << std::endl;
            break;
        case 6:
            std::cout << response << std::endl;
            break;


        default:
            break;
        }
    }while(response != 6);
}