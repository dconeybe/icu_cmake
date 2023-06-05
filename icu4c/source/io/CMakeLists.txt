add_library(
  third_party.icu.io
  ustream.cpp
)

target_include_directories(
  third_party.icu.io
  PUBLIC
    "${CMAKE_CURRENT_LIST_DIR}"
)

target_link_libraries(
  third_party.icu.io
  PUBLIC
    third_party.icu.common
)
