project(bsq)

set(GCC_COMPILE_FLAGS "-Wall -Werror -Wextra")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_C_FLAGS  "${CMAKE_C_FLAGS} ${GCC_COMPILE_FLAGS}")

file(
  GLOB_RECURSE
  source_files
  src/*.c
  include/*.h
  )

add_subdirectory(
  ${ft_dir}
  ${ft_dir}
  )
include_directories(
  include
  ${ft_include_dir}
  )

link_directories(
  ${ft_lib_dir}
  )

add_executable(
  bsq
  ${source_files}
  )

target_link_libraries(
  bsq
  ${ft_lib_name}
  )
