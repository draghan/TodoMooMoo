#linux
cmake_minimum_required(VERSION 3.13)
project(wxWTest)

set(CMAKE_CXX_STANDARD 17)

set(wxWidgets_ROOT_DIR /home/draghan/programming/wxW/wxWidgets-3.1.2/)
set(wxWidgets_CONFIGURATION gtk)
find_package(wxWidgets COMPONENTS core base REQUIRED)
include(${wxWidgets_USE_FILE})

set(SOURCE_FILES main.cpp
        Frames/generated.cpp
        Frames/generated.h
        Frames/TodoMooMooMainFrame.cpp
        Frames/TodoMooMooMainFrame.h)

add_executable(FirstC ${SOURCE_FILES})

target_link_libraries(FirstC ${wxWidgets_LIBRARIES})

# windows
#cmake_minimum_required(VERSION 3.9)
#project(wxWTest)

#set(CMAKE_CXX_STANDARD 17)

#set(wxWidgets_ROOT_DIR C:/wxWidgets-3.1.2)
#set(wxWidgets_CONFIGURATION msw)
#find_package(wxWidgets COMPONENTS advanced core base REQUIRED)
#include(${wxWidgets_USE_FILE})

#add_executable(FirstC ${SOURCE_FILES})

#target_link_libraries(FirstC ${wxWidgets_LIBRARIES} uxtheme winspool oleacc)