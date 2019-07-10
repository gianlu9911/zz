cmake_minimum_required(VERSION 3.13)
project(melone)
set(CMAKE_CXX_STANDARD 14)
set(SFML_INCLUDE_DIR "/home/rewieer/Libraries/SFML-2.5.1/include")
set(SFML_LIBRARY_DIR "/home/rewieer/Libraries/SFML-2.5.1/lib")
set(SFML_DIR "/home/rewieer/Libraries/SFML-2.5.1/lib/cmake/SFML")
link_directories(SFML_LIBRARY_DIR)
include_directories(SFML_INCLUDE_DIR)
find_package(SFML 2.5.1 COMPONENTS system window graphics network audio)
if(SFML_FOUND)
    message(STATUS "SFML_INCLUDE_DIR: ${SFML_INCLUDE_DIR}")
    message(STATUS "SFML_LIBRARIES: ${SFML_LIBRARIES}")
    message(STATUS "SFML_VERSION: ${SFML_VERSION}")
endif()
add_executable(melone main.cpp Character.cpp Character.h Dice.cpp Dice.h inventory.h inventory.cpp item.cpp item.h
        Hero.cpp Hero.h minion.cpp minion.h Boss.h Boss.cpp spell.cpp spell.h Warrior.cpp Warrior.h)
target_link_libraries (melone sfml-graphics sfml-window sfml-system)






add_subdirectory(test)

set(SOURCE_FILES Character.cpp Character.h)
add_executable(unit_testing_example main.cpp)
add_library(core ${SOURCE_FILES})
target_link_libraries(unit_testing_example core)
