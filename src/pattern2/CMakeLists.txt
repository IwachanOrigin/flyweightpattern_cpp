
project(pattern2 CXX)

set(MAIN_SRC
  main.cpp
  billcoin.h
  billcoin.cpp
  wallet.h
  wallet.cpp
)

add_executable(
  ${PROJECT_NAME}
  ${MAIN_SRC}
)

