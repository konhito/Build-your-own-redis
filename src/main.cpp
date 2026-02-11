#include<iostream>

int main(int argc,char* argv[]){
    int port = 6379;
    //argc is the number of command-line-arguments
    //argv array in c-style string
    //argc is always one because on the command line its always one because we run it like this ./name.cpp so its always one
    //Every thing in the argv is a string argv

    //tl;dr
    //argc is an int that tells you how many command-line arguments were passed to your program.
    //argv is an array of C-style strings (character pointers). It stores those arguments.

    if(argc >=2) port = std::stoi(argv[1]);

    return 0;

}