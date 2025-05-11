#include "../include/butter_video_stream.hpp"

ButterVideoStream::ButterVideoStream(){
    std::cout << "Butter bot video stream begins\n";
    // Initiate video stream and zmq ipc sockets.
}

ButterVideoStream::~ButterVideoStream(){
    std::cout << "Butter bot video stream has ended!\n";
}