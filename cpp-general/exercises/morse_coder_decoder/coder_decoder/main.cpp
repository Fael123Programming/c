#include <string>
#include <cstdlib>

using std::string;

typedef struct morseConversor {

    string code(string toCode) {
        string res;
        for (int i = 0; i < toCode.length(); i++) {
            switch(toCode.at(i)) {
                case ' ':
                    res.append("       "); //Space between words have to be 7 units.
                    break;
                case 'A':
                case 'a':
                    res.append(". ---");
                    break;
                case 'B':
                case 'b':
                    res.append("--- . . .");   
                    break;
                case 'C':
                case 'c':
                    res.append("--- . --- .");
                    break;    
                case 'D':
                case 'd':
                    res.append("--- . .");
                    break;  
                case 'E':
                case 'e':
                    res.append(".");
                    break;
                case 'F':
                case 'f':
                    res.append(". . --- .");   
                    break;
                case 'G':
                case 'g':
                    res.append("--- --- .");
                    break; 
                case 'H':
                case 'h':
                    res.append(". . . .");    
                    break;
                case 'I':
                case 'i':
                    res.append(". .");
                    break;
                case 'J':
                case 'j':
                    res.append(". --- --- ---");
                    break;
                case 'K':
                case 'k':
                    res.append("--- . ---");    
                    break;
                case 'L':
                case 'l':
                    res.append(". --- . .");
                    break;
                case 'M':
                case 'm':
                    res.append("--- ---");
                    break;
                case 'N':
                case 'n':
                    res.append("--- .");
                    break;           
                case 'O':
                case 'o':
                    res.append("--- --- ---");
                    break;
                case 'P':
                case 'p':
                    res.append(". --- --- .");
                    break;
                case 'Q':
                case 'q':
                    res.append("--- --- . ---");
                    break;                      
                case 'R':
                case 'r':
                    res.append(". --- .");
                    break;
                case 'S':
                case 's':
                    res.append(". . .");
                    break;
                case 'T':
                case 't':
                    res.append("---");
                    break;
                case 'U':
                case 'u':
                    res.append(". . ---");
                    break;
                case 'V':
                case 'v':
                    res.append(". . . ---");
                    break;
                case 'W':
                case 'w':
                    res.append(". --- ---");
                    break;
                case 'X':
                case 'x':
                    res.append("--- . . ---");
                    break;
                case 'Y':
                case 'y':
                    res.append("--- . --- ---");
                    break;
                case 'Z':
                case 'z':  
                    res.append("--- --- . .");
                    break;
                case '1':
                    res.append(". --- --- --- ---");
                    break;
                case '2':
                    res.append(". . --- --- ---");
                    break;
                case '3':
                    res.append(". . . --- ---");                            
                    break;
                case '4':
                    res.append(". . . . ---");
                    break;
                case '5':
                    res.append(". . . . .");
                    break;
                case '6':
                    res.append("--- . . . .");
                    break;
                case '7':
                    res.append("--- --- . . .");
                    break;
                case '8':
                    res.append("--- --- --- . .");
                    break;
                case '9':
                    res.append("--- --- --- --- .");
                    break;
                case '0':
                    res.append("--- --- --- --- ---");
                    break;
                default: return NULL;                            
            }
            if (i < toCode.length() - 1) res.append("   ");
        }
        return res;
    }

    string decode(string toDecode) {
        string res, letter;
        short spaces = 0;
        for (int i = 0; i < toDecode.length() - 1; i++) {
            if (toDecode.at(i) != ' ' && toDecode.at(i + 1) != ' ') letter += toDecode.at(i);
            spaces = toDecode.at(i) == ' '? spaces + 1 : 0;
            if (spaces == 3 && toDecode.at(i + 1) != ' ') { //A letter has been record.
                if (letter == ". ---") {
                    res.append("a");
                } else if (letter == "--- . . .") {
                    res.append("b");
                } else if(letter == "--- . --- .") {
                    res.append("c");
                }
            } else if (spaces == 7 && toDecode.at(i + 1) != ' ') {
                res.append(" ");
            }
        }
        return res;
    }
}morseConversor;