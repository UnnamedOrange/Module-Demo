cmake_minimum_required(VERSION 3.22.1)

project(libnative)

add_library(${CMAKE_PROJECT_NAME} SHARED)
target_compile_features(${CMAKE_PROJECT_NAME} PUBLIC cxx_std_20)
target_sources(${CMAKE_PROJECT_NAME} PRIVATE
  "libnative.cpp"
  )
target_link_libraries(${CMAKE_PROJECT_NAME}
  android
  log
  )
