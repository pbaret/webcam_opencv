cmake_minimum_required(VERSION 2.8)

project( webcam )

find_package( OpenCV REQUIRED )

add_executable( webcam main.cpp )

target_link_libraries( webcam ${OpenCV_LIBS} )
