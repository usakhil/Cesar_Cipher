
# Caesar Cipher File Processor

This program implements a Caesar Cipher for encrypting and decrypting text read from a file. The program reads from an input file, processes the text using a Caesar Cipher with a specified key, and writes the result to an output file.

## Files

- **main.cpp**: Contains the main program code.
- **message.txt**: A file containing the message to be encrypted.
- **encrypted.txt**: The output file containing the encrypted message.
- **decrypted.txt**: The output file containing the decrypted message.

## Prerequisites

- C++ compiler (e.g., g++)
- `message.txt` file with the text to be encrypted

## Compilation

To compile the program, use the following command:

```bash
g++ -o caesar_cipher main.cpp
```

## Usage

1. Ensure you have a `message.txt` file in the same directory as the compiled program. The `message.txt` file should contain the text you want to encrypt.

2. Run the program:

```bash
./caesar_cipher
```

3. The program will display the encrypted messages and write them to `encrypted.txt`. It will then decrypt the messages from `encrypted.txt` and write the result to `decrypted.txt`.

## Example

**message.txt**:
```
hello world
this is a test
```

**Program Execution**:
```bash
./caesar_cipher
```
```
Encrypted Messages:
rovvy gybvn
drsc sc k docd

Decrypted Messages:
hello world
this is a test
```

## Functions

### `string encrypt(const string& text, int key)`

Encrypts the given text using the specified key.

- **Parameters**:
  - `text`: The text to be encrypted.
  - `key`: The key for the Caesar Cipher.
  
- **Returns**:
  - The encrypted text.

### `string decrypt(const string& text, int key)`

Decrypts the given text using the specified key.

- **Parameters**:
  - `text`: The text to be decrypted.
  - `key`: The key for the Caesar Cipher.
  
- **Returns**:
  - The decrypted text.

### `void processFile(const string& inputFile, const string& outputFile, int key, bool isEncryption)`

Processes the input file and writes the processed text to the output file.

- **Parameters**:
  - `inputFile`: The name of the input file.
  - `outputFile`: The name of the output file.
  - `key`: The key for the Caesar Cipher.
  - `isEncryption`: A boolean indicating whether to encrypt or decrypt the text.
  
- **Returns**:
  - None.

## Notes

- The `message.txt` file must exist in the same directory as the executable.
- The key must be a positive integer.
- The program handles only lower case alphabetic characters and preserves non-alphabetic characters in the input text.

## Error Handling

If the input or output file cannot be opened, the program will display an error message and terminate.

```cpp
if (!inFile || !outFile) {
    cout << "Error opening file!" << endl;
}
```

## Author

Akhil Bhandari
