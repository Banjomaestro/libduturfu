if(EXISTS "/Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/build/INTERFACE/UnitTest/UnitTest[1]_tests.cmake")
  include("/Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/build/INTERFACE/UnitTest/UnitTest[1]_tests.cmake")
else()
  add_test(UnitTest_NOT_BUILT UnitTest_NOT_BUILT)
endif()
