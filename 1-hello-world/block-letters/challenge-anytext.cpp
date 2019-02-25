// Fun fact: I like blockchain and genetics

// Objective: respond the challenge with a code
// that lets you print any text in block letters.
// Original repo: https://github.com/fbitti/codecademy-cpp-challenge

// Instructions: Change this line with your text:
//   string input = "Yay C++"; // here is where you input the text to be printed out
// $ g++ challenge-anytext.cpp
// $ ./a.out
// Y   Y    A    Y   Y          CCC
//  Y Y    A A    Y Y          C   C
//   Y    A   A    Y           C        +      +
//   Y    AAAAA    Y           C      +++++  +++++
//   Y    A   A    Y           C        +      +
//   Y    A   A    Y           C   C
//   Y    A   A    Y            CCC

#include <iostream>
#include <string>

using namespace std; // to avoid repeating std:: in front of every string declaration

class BlockLetter { // this object will make a loop easier to implement and keep the main() code smaller
  public:
  string letter;
  string line1Pattern;
  string line2Pattern;
  string line3Pattern;
  string line4Pattern;
  string line5Pattern;
  string line6Pattern;
  string line7Pattern;

  string line(int num) { // it returns the corresponding line, so we don't introduce breaks before the end of the line
    string result;
    switch(num) {
      case 1:
        result = line1Pattern;
        break;
      case 2:
        result = line2Pattern;
        break;
      case 3:
        result = line3Pattern;
        break;
      case 4:
        result = line4Pattern;
        break;
      case 5:
        result = line5Pattern;
        break;
      case 6:
        result = line6Pattern;
        break;
      case 7:
        result = line7Pattern;
    }
    return result;
  }
};

BlockLetter convertChar2BlockLetter(char letter); // just declaring the function, the definition comes after main()

int main() {

  string input = "Yay C++"; // here is where you input the text to be printed out

  BlockLetter block[input.size()];

  for (int c=0; c < input.size(); c++) { // let's convert the text into an array of block letters
    block[c] = convertChar2BlockLetter(input[c]);
  }

  for (int l=1; l <= 7; l++) {
    for (int c = 0; c < input.size(); c++) {
	    std::cout << block[c].line(l) + "  ";
    }
    std::cout << "\n";
  }

}

BlockLetter convertChar2BlockLetter(char letter) { // this function defines all characters in the alphabet
  BlockLetter result;
  switch(letter) {
    case 'a': // both lowercase and uppercase letters are accepted :)
    case 'A':
  		result.letter = 'A';
      result.line1Pattern = "  A  ";
      result.line2Pattern = " A A ";
      result.line3Pattern = "A   A";
      result.line4Pattern = "AAAAA";
      result.line5Pattern = "A   A";
      result.line6Pattern = "A   A";
      result.line7Pattern = "A   A";
  		return result;
    case 'b':
    case 'B':
  		result.letter = 'B';
      result.line1Pattern = "BBBB ";
      result.line2Pattern = "B   B";
      result.line3Pattern = "B   B";
      result.line4Pattern = "BBBB ";
      result.line5Pattern = "B   B";
      result.line6Pattern = "B   B";
      result.line7Pattern = "BBBB ";
  		return result;
    case 'c':
    case 'C':
  		result.letter = 'C';
      result.line1Pattern = " CCC ";
      result.line2Pattern = "C   C";
      result.line3Pattern = "C    ";
      result.line4Pattern = "C    ";
      result.line5Pattern = "C    ";
      result.line6Pattern = "C   C";
      result.line7Pattern = " CCC ";
  		return result;
    case 'd':
    case 'D':
  		result.letter = 'D';
      result.line1Pattern = "DDDD ";
      result.line2Pattern = "D   D";
      result.line3Pattern = "D   D";
      result.line4Pattern = "D   D";
      result.line5Pattern = "D   D";
      result.line6Pattern = "D   D";
      result.line7Pattern = "DDDD";
  		return result;
    case 'e':
    case 'E':
  		result.letter = 'E';
      result.line1Pattern = "EEEEE";
      result.line2Pattern = "E    ";
      result.line3Pattern = "E    ";
      result.line4Pattern = "EEE  ";
      result.line5Pattern = "E    ";
      result.line6Pattern = "E    ";
      result.line7Pattern = "EEEEE";
  		return result;
    case 'f':
    case 'F':
  		result.letter = 'F';
      result.line1Pattern = "FFFFF";
      result.line2Pattern = "F    ";
      result.line3Pattern = "F    ";
      result.line4Pattern = "FFF  ";
      result.line5Pattern = "F    ";
      result.line6Pattern = "F    ";
      result.line7Pattern = "F    ";
  		return result;
    case 'g':
    case 'G':
  		result.letter = 'G';
      result.line1Pattern = " GGG ";
      result.line2Pattern = "G   G";
      result.line3Pattern = "G    ";
      result.line4Pattern = "G GGG";
      result.line5Pattern = "G   G";
      result.line6Pattern = "G   G";
      result.line7Pattern = " GGG ";
  		return result;
    case 'h':
    case 'H':
  		result.letter = 'H';
      result.line1Pattern = "H   H";
      result.line2Pattern = "H   H";
      result.line3Pattern = "H   H";
      result.line4Pattern = "HHHHH";
      result.line5Pattern = "H   H";
      result.line6Pattern = "H   H";
      result.line7Pattern = "H   H";
  		return result;
    case 'i':
    case 'I':
  		result.letter = 'I';
      result.line1Pattern = "IIIII";
      result.line2Pattern = "  I  ";
      result.line3Pattern = "  I  ";
      result.line4Pattern = "  I  ";
      result.line5Pattern = "  I  ";
      result.line6Pattern = "  I  ";
      result.line7Pattern = "IIIII";
  		return result;
    case 'j':
    case 'J':
  		result.letter = 'J';
      result.line1Pattern = "JJJJJ";
      result.line2Pattern = "  J  ";
      result.line3Pattern = "  J  ";
      result.line4Pattern = "  J  ";
      result.line5Pattern = "J J  ";
      result.line6Pattern = "J J  ";
      result.line7Pattern = " JJ  ";
  		return result;
    case 'k':
    case 'K':
  		result.letter = 'K';
      result.line1Pattern = "K   K";
      result.line2Pattern = "K  K ";
      result.line3Pattern = "K K  ";
      result.line4Pattern = "KK   ";
      result.line5Pattern = "K K  ";
      result.line6Pattern = "K  K ";
      result.line7Pattern = "K   K";
  		return result;
    case 'l':
    case 'L':
  		result.letter = 'L';
      result.line1Pattern = "L    ";
      result.line2Pattern = "L    ";
      result.line3Pattern = "L    ";
      result.line4Pattern = "L    ";
      result.line5Pattern = "L    ";
      result.line6Pattern = "L    ";
      result.line7Pattern = "LLLLL";
  		return result;
    case 'm':
    case 'M':
  		result.letter = 'M';
      result.line1Pattern = "M   M";
      result.line2Pattern = "MM MM";
      result.line3Pattern = "MM MM";
      result.line4Pattern = "M M M";
      result.line5Pattern = "M   M";
      result.line6Pattern = "M   M";
      result.line7Pattern = "M   M";
  		return result;
    case 'n':
    case 'N':
  		result.letter = 'N';
      result.line1Pattern = "N   N";
      result.line2Pattern = "NN  N";
      result.line3Pattern = "N N N";
      result.line4Pattern = "N  NN";
      result.line5Pattern = "N   N";
      result.line6Pattern = "N   N";
      result.line7Pattern = "N   N";
  		return result;
    case 'o':
    case 'O':
  		result.letter = 'O';
      result.line1Pattern = " OOO ";
      result.line2Pattern = "O   O";
      result.line3Pattern = "O   O";
      result.line4Pattern = "O   O";
      result.line5Pattern = "O   O";
      result.line6Pattern = "O   O";
      result.line7Pattern = " OOO ";
  		return result;
    case 'p':
    case 'P':
  		result.letter = 'P';
      result.line1Pattern = " PPP ";
      result.line2Pattern = "P   P";
      result.line3Pattern = "P   P";
      result.line4Pattern = "PPPP ";
      result.line5Pattern = "P    ";
      result.line6Pattern = "P    ";
      result.line7Pattern = "P    ";
  		return result;
    case 'q':
    case 'Q':
  		result.letter = 'Q';
      result.line1Pattern = " QQQ ";
      result.line2Pattern = "Q   Q";
      result.line3Pattern = "Q   Q";
      result.line4Pattern = "Q   Q";
      result.line5Pattern = "Q   Q";
      result.line6Pattern = "Q  Q ";
      result.line7Pattern = " QQ Q";
  		return result;
    case 'r':
    case 'R':
  		result.letter = 'R';
      result.line1Pattern = "RRRR ";
      result.line2Pattern = "R   R";
      result.line3Pattern = "R   R";
      result.line4Pattern = "RRRR ";
      result.line5Pattern = "R R  ";
      result.line6Pattern = "R  R ";
      result.line7Pattern = "R   R";
  		return result;
    case 's':
    case 'S':
  		result.letter = 'S';
      result.line1Pattern = " SSS ";
      result.line2Pattern = "S   S";
      result.line3Pattern = "S    ";
      result.line4Pattern = " SSS ";
      result.line5Pattern = "    S";
      result.line6Pattern = "S   S";
      result.line7Pattern = " SSS ";
  		return result;
    case 't':
    case 'T':
  		result.letter = 'T';
      result.line1Pattern = "TTTTT";
      result.line2Pattern = "  T  ";
      result.line3Pattern = "  T  ";
      result.line4Pattern = "  T  ";
      result.line5Pattern = "  T  ";
      result.line6Pattern = "  T  ";
      result.line7Pattern = "  T  ";
  		return result;
    case 'u':
    case 'U':
  		result.letter = 'U';
      result.line1Pattern = "U   U";
      result.line2Pattern = "U   U";
      result.line3Pattern = "U   U";
      result.line4Pattern = "U   U";
      result.line5Pattern = "U   U";
      result.line6Pattern = "U   U";
      result.line7Pattern = " UUU ";
  		return result;
    case 'v':
    case 'V':
  		result.letter = 'V';
      result.line1Pattern = "V   V";
      result.line2Pattern = "V   V";
      result.line3Pattern = "V   V";
      result.line4Pattern = "V   V";
      result.line5Pattern = "V   V";
      result.line6Pattern = " V V ";
      result.line7Pattern = "  V  ";
  		return result;
    case 'w':
    case 'W':
  		result.letter = 'W';
      result.line1Pattern = "W   W";
      result.line2Pattern = "W   W";
      result.line3Pattern = "W   W";
      result.line4Pattern = "W W W";
      result.line5Pattern = "WW WW";
      result.line6Pattern = "WW WW";
      result.line7Pattern = "W   W";
  		return result;
    case 'x':
    case 'X':
  		result.letter = 'X';
      result.line1Pattern = "X   X";
      result.line2Pattern = "X   X";
      result.line3Pattern = " X X ";
      result.line4Pattern = "  X  ";
      result.line5Pattern = " X X ";
      result.line6Pattern = "X   X";
      result.line7Pattern = "X   X";
  		return result;
    case 'y':
    case 'Y':
  		result.letter = 'Y';
      result.line1Pattern = "Y   Y";
      result.line2Pattern = " Y Y ";
      result.line3Pattern = "  Y  ";
      result.line4Pattern = "  Y  ";
      result.line5Pattern = "  Y  ";
      result.line6Pattern = "  Y  ";
      result.line7Pattern = "  Y  ";
  		return result;
    case 'z':
    case 'Z':
  		result.letter = 'Z';
      result.line1Pattern = "ZZZZZ";
      result.line2Pattern = "    Z";
      result.line3Pattern = "   Z ";
      result.line4Pattern = "  Z  ";
      result.line5Pattern = " Z   ";
      result.line6Pattern = "Z    ";
      result.line7Pattern = "ZZZZZ";
  		return result;
    case '+':
  		result.letter = '+';
      result.line1Pattern = "     ";
      result.line2Pattern = "     ";
      result.line3Pattern = "  +  ";
      result.line4Pattern = "+++++";
      result.line5Pattern = "  +  ";
      result.line6Pattern = "     ";
      result.line7Pattern = "     ";
  		return result;
    default: // returns a blank block if the char is not on the list.
      result.letter = ' ';
      result.line1Pattern = "     ";
      result.line2Pattern = "     ";
      result.line3Pattern = "     ";
      result.line4Pattern = "     ";
      result.line5Pattern = "     ";
      result.line6Pattern = "     ";
      result.line7Pattern = "     ";
  		return result;
  }
}
