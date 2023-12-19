#!/bin/bash
SCRIPT_DIR=$(dirname "$(readlink -f "$0")")

BUILD_DIR="$SCRIPT_DIR/build"

mkdir -p "$BUILD_DIR" || exit 1

cd "$BUILD_DIR" || exit 1

cmake "$SCRIPT_DIR" -DCMAKE_CXX_COMPILER=clang++

make


"$SCRIPT_DIR/bin/my_executable"