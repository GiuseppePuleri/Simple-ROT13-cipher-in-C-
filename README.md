# Simple-ROT13-cipher-in-C-
I have wrote a very simple function in c++ for ROT-13 cipher. No external library are included. The code adjusts the position by adding the base ASCII value to convert it back to the correct character for printing.
This program implements a basic **ROT13 cipher** for transforming lowercase alphabetic characters. ROT13 is a simple substitution cipher that shifts each letter by 13 positions in the alphabet. It works by swapping letters in pairs, so applying ROT13 twice will return the original text.

## Features
- Takes three lowercase characters as input from the user.
- Checks if the input characters are valid lowercase letters (`a` to `z`).
- Applies the ROT13 cipher to each valid character.
- Prints `?` for invalid characters (e.g., non-alphabetical input).
- Outputs the transformed characters or `?` for invalid input.

## How it Works
1. The program prompts the user to input three characters.
2. It checks if each character is a lowercase letter.
3. It calculates the 0-based alphabetical position of each character.
4. It applies the ROT13 transformation by adding 13 to the position, with modulo 26 to handle wrapping around the alphabet.
5. The program outputs the transformed characters, or `?` if an invalid character is entered.

## Requirements
- C++ compiler (e.g., g++, clang++)
- C++ standard library (for input/output)

## Example Usage

### Input:
```
Write first character: a
Write second character: b
Write third character: z
```

### Output:
```
n
o
m
```

In the example above:
- `'a'` becomes `'n'`
- `'b'` becomes `'o'`
- `'z'` becomes `'m'`

### Invalid Input Example:
```
Write first character: a
Write second character: #
Write third character: z
```

### Output:
```
n
?
m
```

In this case, since `#` is not a valid lowercase letter, the program outputs `?` for the second character.

## How to Compile and Run
1. **Save the code to a file**, e.g., `rot13_cipher.cpp`.
2. **Compile the program** using a C++ compiler:
   ```bash
   g++ -o rot13_cipher rot13_cipher.cpp
   ```
3. **Run the compiled program**:
   ```bash
   ./rot13_cipher
   ```

## Code Explanation
- The program uses `cin` and `cout` for user input and output.
- It calculates the ROT13 transformation using the formula:
  - `new_position = (original_position + 13) % 26`
  - This ensures that the result stays within the bounds of the alphabet.
- If the input is not a lowercase letter, the program returns `?` as an indication of invalid input.
