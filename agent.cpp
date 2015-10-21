#include <stdio.h>
#include <iostream>
#include <string>

class Agent { public: void reply(char const *wurds); };
void Agent::reply(char const *wurds) {
    printf("I hear ya %s\n", wurds);
}
    
int main()
{

    printf("Boom, shake tha' room!\n");
    Agent albert;

    std::string input_line;
    albert.reply("blah");
    while (1) 
    {
        std::getline(std::cin, input_line);
        //printf("Ooft! %s\n", input_line);
    }


}
