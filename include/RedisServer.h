#ifndef REDIS_SERVER_H // this means load once - It prevents the file from being included multiple
//.h file is the globally present blue print we can call this file and create instance
//.h file = blueprint (what exists)
#define REDIS_SERVER_H

class RedisServer{
    public:
    RedisServer(int port);


    private:
    int port;
};

#endif