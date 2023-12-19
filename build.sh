#!/bin/bash
# Get the directory of the script
SCRIPT_DIR=$(dirname "$(readlink -f "$0")")

# Specify the build directory
BUILD_DIR="$SCRIPT_DIR/build"

# Create the build directory if it doesn't exist
mkdir -p "$BUILD_DIR" || exit 1

# Navigate to the build directory
cd "$BUILD_DIR" || exit 1

# Run CMake to configure the project
cmake "$SCRIPT_DIR" -DCMAKE_CXX_COMPILER=clang++

# Run Make to build the project
make


# Run the executable in the root/bin directory
"$SCRIPT_DIR/bin/my_executable"