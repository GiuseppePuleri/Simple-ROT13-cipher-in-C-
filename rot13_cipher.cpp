#include <iostream>
using namespace std;

int main()
{
    // Variable declarations
    char character_1, character_2, character_3;

    // I assign a negative position which I will need to control the character at the end
    int position_character_1 = -1, position_character_2 = -1, position_character_3 = -1;

    // three different input
    cout << "Write first character: ";
    cin >> character_1;

    cout << "Write second character: ";
    cin >> character_2;

    cout << "Write third character: ";
    cin >> character_3;

    // I declare the variables that I will need to calculate the position of the letter with ROT13
    char rot13_position_character_1, rot13_position_character_2, rot13_position_character_3;

    // Check that the letters entered are lowercase
    // The -1 is replaced if the character is correct
    // Subtract the - 'a' character to get the ASCII position
    // From the ASCII position I add 13 for the ROT13 and use Modulo to restart the calculation if it exceeds the number 26
    if (character_1 >= 'a' && character_1 <= 'z')
    {
        position_character_1 = character_1 - 'a';
        rot13_position_character_1 = (position_character_1 + 13) % 26;
    }

    // repeat operations
    if (character_2 >= 'a' && character_2 <= 'z')
    {
        position_character_2 = character_2 - 'a';
        rot13_position_character_2 = (position_character_2 + 13) % 26;
    }

    // repeat operations
    if (character_3 >= 'a' && character_3 <= 'z')
    {
        position_character_3 = character_3 - 'a';
        rot13_position_character_3 = (position_character_3 + 13) % 26;
    }

    // Finally print the result.
    // If the value remained -1 it means that the character inserted did not pass the checks
    // Otherwise add 'a' or 97 in ASCII to the original position, this way the compiler prints the exact character
    cout << (position_character_1 == -1 ? '?' : char(rot13_position_character_1 + 'a')) << endl;
    cout << (position_character_2 == -1 ? '?' : char(rot13_position_character_2 + 'a')) << endl;
    cout << (position_character_3 == -1 ? '?' : char(rot13_position_character_3 + 'a')) << endl;

    return 0;
}
