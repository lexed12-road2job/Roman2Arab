# CMakeList.txt: проект CMake для Roman2Arab; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required(VERSION 3.12)

project(Roman2Arab)
# Добавьте источник в исполняемый файл этого проекта.


# TODO: Добавьте тесты и целевые объекты, если это необходимо.


add_executable (Roman2Arab "Roman2Arab.cpp" "Roman2Arab.h" "Func.h")

