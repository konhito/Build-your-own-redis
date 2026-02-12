#include "include/RedisServer.h"

static RedisServer* globalServer = nullptr; //file-scope static pointer to a RedisServer.

RedisServer::RedisServer(int port):port(port),server_socket(-1),running(true){
    globalServer = this;
}