#include <iostream>
#include "HashSet.h"

/*
 * Simple CLI menu for interacting with HashSet.
 * Keeps UI separate from core logic (good design practice).
 */
void Menu() {
    HashSet hs;
    int option, key;

    while (true) {
        std::cout << "\n--- Robin Hood HashSet ---\n";
        std::cout << "1. Add\n2. Remove\n3. Contains\n4. Clear\n5. Display\n0. Exit\n";
        std::cout << "Choice: ";
        std::cin >> option;

        switch (option) {
            case 1: // Add a key to the HashSet
                std::cout << "Enter key: ";
                std::cin >> key;
                if (hs.Add(key))
                    std::cout << "Inserted.\n";
                else
                    std::cout << "Already exists.\n";
                break;

            case 2: // Remove a key from the HashSet
                std::cout << "Enter key: ";
                std::cin >> key;
                if (hs.Remove(key))
                    std::cout << "Removed.\n";
                else
                    std::cout << "Not found.\n";
                break;

            case 3: // Contains
                std::cout << "Enter key: ";
                std::cin >> key;
                std::cout << (hs.Contains(key) ? "True\n" : "False\n");
                break;

            case 4: // Clear
                hs.Clear();
                std::cout << "Cleared.\n";
                break;

            case 5: // Display
                hs.Display();
                break;

            case 0:
                std::cout << "Goodbye.\n";
                return;

            default:
                std::cout << "Invalid option.\n";
        }
    }
}

int main() {
    Menu();
    return 0;
}
