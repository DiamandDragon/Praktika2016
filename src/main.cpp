/**
 * The main class who manages the programm.
 * 
 * Everything here manages the behavior of the choosen operations.
 * 
 * @author Collin Weyel
 * @file
 */

#include <iostream>
#include "ui.h"
#include "student.h"
#include "save.h"

/**
 * Repeats the menu and all functions.
 * 
 * Runs indefinetely till the user chooses to end the programm.
 */
int main(){
    std::string name = "Studentenverwaltung",
        version = "V0.2",
        importfile = "import.csv",
        exportfile = "export.csv";
    int students_length = 10;
    student students[students_length];

    while (true){
        switch (printMenu(name, version)){
            case 1:
                std::cout << "Diese Studenten sind aktuell registriert:" << std::endl;
                printStudents(students, students_length);
                break;
            case 2:
                addStudent(students, students_length);
                break;
            case 5:
                importStudents(students, students_length, importfile);
                std::cout << "Die Studenten wurden importiert." << std::endl;
                break;
            case 6:
                exportStudents(students, students_length, exportfile);
                std::cout << "Die Studenten wurden exportiert." << std::endl;
                break;
            case 7:
                std::cout << "Das Programm wird beendet." << std::endl;
                return 0;
                break;
            default:
                std::cout << "Diese Funktion existiert noch nicht." << std::endl << std::endl;
                break;
        }
    }
}