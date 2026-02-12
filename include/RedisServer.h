#ifndef REDIS_SERVER_H // this means load once - It prevents the file from being included multiple
//.h file is the globally present blue print we can call this file and create instance
//.h file = blueprint (what exists)
#define REDIS_SERVER_H
#include <string>
#include <atomic> // holy shit its actually crazy this prevent race condition because it cannnot be interupted before it complete its things.
//No thread can interrupt it midway.

class RedisServer{
    public:
    RedisServer(int port);
    void run();
    void shutdown();


    private:
    int port;
    int server_socket;
    std::atomic<bool>running;
};

#endif