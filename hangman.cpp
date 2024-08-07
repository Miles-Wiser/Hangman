
#include <iostream>
#include <string>


void draw_man(int wrong_ans) {
    
    std::string l_head = " ";
    std::string r_head = l_head;
    std::string body = l_head;
    std::string l_arm = l_head;
    std::string r_arm = l_head;
    std::string l_leg = l_head;
    std::string r_leg = l_head;
    
    int i = 0;
    
    while(i < wrong_ans) {
        i++;
        switch(i) {
            case 1:
                l_head = "(";
                break;
            case 2:
                r_head = ")";
                break;
            case 3:
                body = "l";
                break;
            case 4:
                l_arm = "/";
                break;
            case 5:
                r_arm = "\\";
                break;
            case 6:
                l_leg = "/";
                break;
            case 7:
                r_leg = "\\";
                break;
        }
    }
    
    std::cout << "         _____\n";
    std::cout << "        |     |\n";
    std::cout << "        " << l_head << r_head <<"    |\n";
    std::cout << "       " << l_arm << body << r_arm << "    |\n";
    std::cout << "        " << l_leg << r_leg << "    |\n";
    std::cout << "        ______|______\n\n";
}

int fun_display_word(std::string user_guess, int wrong_ans) {
    std::string letter_1 = "_ ";
    std::string letter_2 = "_ ";
    std::string letter_3 = "_ ";
    std::string letter_4 = "_ ";
    std::string letter_5 = "_ ";
    
    std::string display_word = letter_1 + letter_2 + letter_3 + letter_4 + letter_5;
    
    std::cout << "          " << display_word << "\n\n";
    
    if(user_guess != display_word) {
        wrong_ans++;
        std::cout << "Your guess is incorrect.\n";
    }
    else {
        std::cout << "Your guess is correct.\n";
    }
    
    return wrong_ans;
}

int main() {
    int wrong_ans = 0;
    draw_man(wrong_ans);
    fun_display_word("_ _ _ _ _ ", wrong_ans);
    
    return 0;
}
