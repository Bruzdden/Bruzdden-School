
def _cipher(text, file):
    alphabet = ["A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"]
    oddAlphabet = ['W', 'C', 'R', 'L', 'A', 'U', 'E', 'S', 'V', 'I', 'M', 'K', 'P', 'J', 'D', 'Z', 'G', 'Q', 'O', 'H', 'B', 'F', 'Y', 'T', 'N', 'X']
    evenAlphabet = ['Q', 'G', 'Z', 'O', 'F', 'W', 'Y', 'N', 'H', 'X', 'S', 'U', 'I', 'V', 'R', 'E', 'L', 'A', 'B', 'J', 'P', 'M', 'T', 'C', 'D', 'K']

    encrypt = ""
    for letter in text:
        if letter.upper() in alphabet:
            index = (alphabet.index(letter.upper()))
            if (index+1) % 2 == 0 and index < len(evenAlphabet):
                encrypt += evenAlphabet[index]
            elif index < len(oddAlphabet):
                encrypt += oddAlphabet[index]
        else:
            encrypt += letter

    with open(file, "w") as f:
        f.write(encrypt)
    print("Encrypted Text with Even Letters:", encrypt)


with open("file.txt", "r") as f:
    text = f.read()

_cipher(text, "file.txt")
