# Find all source files
file(GLOB SOURCES "*.c")

# Add the static library
add_library(math STATIC ${SOURCES})