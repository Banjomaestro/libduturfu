<<<<<<< HEAD
# Install script for directory: /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu
=======
# Install script for directory: /Users/keziahapaloo-kingslove/Documents/IMAC/Semestre_3/Projet_info_maths/libduturfu
>>>>>>> 6be7a9cff41a467bc0dd97e4d1ece20e73925fe7

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
<<<<<<< HEAD
  include("/Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/build/INTERFACE/cmake_install.cmake")
  include("/Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/build/my_examples/cmake_install.cmake")
=======
  include("/Users/keziahapaloo-kingslove/Documents/IMAC/Semestre_3/Projet_info_maths/libduturfu/build/INTERFACE/cmake_install.cmake")
  include("/Users/keziahapaloo-kingslove/Documents/IMAC/Semestre_3/Projet_info_maths/libduturfu/build/my_examples/cmake_install.cmake")
>>>>>>> 6be7a9cff41a467bc0dd97e4d1ece20e73925fe7

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
<<<<<<< HEAD
file(WRITE "/Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/build/${CMAKE_INSTALL_MANIFEST}"
=======
file(WRITE "/Users/keziahapaloo-kingslove/Documents/IMAC/Semestre_3/Projet_info_maths/libduturfu/build/${CMAKE_INSTALL_MANIFEST}"
>>>>>>> 6be7a9cff41a467bc0dd97e4d1ece20e73925fe7
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
