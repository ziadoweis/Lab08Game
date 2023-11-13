project(Lab08Game)
cmake_minimum_required(VERSION 3.10)
 
# Locate GTest
find_package(GTest REQUIRED)
find_package(Threads REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
add_compile_options(-std=c++17)  

<<<<<<< HEAD
add_library (applibrary SHARED IRace.cpp ICharacter.cpp CharacterCreator.cpp Races/DarkElf.cpp Races/Khajit.cpp Races/Nord.cpp Races/Orc.cpp Professions/Archer.cpp Professions/Assassin.cpp Professions/Mage.cpp Professions/Warrior.cpp)
=======
add_library (applibrary SHARED Races/DarkElf.cpp Races/Khajit.cpp Races/Nord.cpp Races/Orc.cpp Professions/Archer.cpp Professions/Assassin.cpp Professions/Mage.cpp Professions/Warrior.cpp)
>>>>>>> 4d95fb2dd12e3b5817f25212437b8938f939afa8
 
# Link runTests with what we want to test and the GTest and pthread library
add_executable(runTests tests.cpp)
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread applibrary) 

add_executable(runMain main.cpp)
target_link_libraries(runMain applibrary)

