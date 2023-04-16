
project(pattern2 CXX)

set(MAIN_SRC
  billcoin.cpp
  billcoin.h
  billcoinfactory.cpp
  billcoinfactory.h
  main.cpp
  wallet.cpp
  wallet.h
  walletitem.cpp
  walletitem.h
)

add_executable(
  ${PROJECT_NAME}
  ${MAIN_SRC}
)

