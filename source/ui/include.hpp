#ifndef __USER_INTERFACE_INCLUDE_HPP
#define __USER_INTERFACE_INCLUDE_HPP

#include <string>

namespace UserInterface {

#if defined(GNU_LINUX) || defined(LINUX) || defined(MAC_APPLE)
    #include "./gnu/ui.hpp"
    constexpr std::string LibraryFilePath = "./gnu/gui.so"

#elif defined(WIN32) || defined(WINAPI)
    #include "./win32/ui.hpp"
    constexpr std::string LibraryFilePath = "./win32/gui.dll"

#else
    #error "Including library fault"

#endif // cheaking operating system

} // user interface

#endif // user_interface_include_hpp