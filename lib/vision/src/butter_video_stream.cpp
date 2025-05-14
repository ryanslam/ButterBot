/*
    TO DO:
        - Stream video from esp32-cam to host machine
          (Raspberry Pi Zero 2W) using a UDP socket.
            - Create UDP receiver to receive video data.
*/
#include "../include/butter_video_stream.hpp"

ButterVideoStream::ButterVideoStream(){
    std::cout << "Butter bot video stream begins\n";
    // Initiate video stream and zmq ipc sockets.
}

ButterVideoStream::~ButterVideoStream(){
    std::cout << "Butter bot video stream has ended!\n";
}
