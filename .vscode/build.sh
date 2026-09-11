#!/usr/bin/env bash
# Smart build script for VS Code C++ tasks.
# - If the active file's directory contains more than one file with a main(),
#   build ONLY the active file (standalone single-file exercises).
# - Otherwise, build ALL .cpp files in that directory together
#   (multi-file exercise: one main() + supporting files like io.cpp).

set -e

active_file="$1"
dir="$(dirname "$active_file")"
base="$(basename "$active_file" .cpp)"

FLAGS=(-fdiagnostics-color=always -g -pedantic-errors -Wall -Weffc++ -Wextra -Wconversion -Wsign-conversion -Werror -std=c++23)

main_files=()
for f in "$dir"/*.cpp; do
    if grep -qE '\bmain[[:space:]]*\(' "$f"; then
        main_files+=("$f")
    fi
done

if [ "${#main_files[@]}" -le 1 ]; then
    echo "Building all .cpp files in: $dir"
    g++ "${FLAGS[@]}" "$dir"/*.cpp -o "$dir/$base"
else
    echo "Multiple main() found in $dir — building only: $active_file"
    g++ "${FLAGS[@]}" "$active_file" -o "$dir/$base"
fi
