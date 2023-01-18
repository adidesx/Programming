cmake_minimum_required( VERSION 2.8.12 )
project( sbox )
file( GLOB SRCS *.cpp *.h )

set(SANDBOXING_SOURCE
    src/main.cpp
    )


include_directories(
        include/
)

add_executable( sbox ${SANDBOXING_SOURCE} ${SRCS} )
