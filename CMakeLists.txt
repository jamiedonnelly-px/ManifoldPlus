cmake_minimum_required(VERSION 3.1)
project(manifold)

# minimal config 
set(TargetName Manifold)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

add_subdirectory(3rd_party/pybind11)

# includes
include_directories(src)
include_directories(3rd_party/eigen/)
include_directories(3rd_party/libigl/include)

set(
    manifold_SRC
    src/GridIndex.h
    src/Intersection.h
    src/Intersection.cc
    src/IO.h
    src/IO.cc
    src/main.cc
    src/Manifold.h
    src/Manifold.cc
    src/MeshProjector.cc
    src/MeshProjector.h
    src/Octree.h
    src/Octree.cc
    src/Parser.h
    src/Parser.cc
    src/types.h
)

# Define the module
#pybind11_add_module(manifold src/main.cc src/Manifold.cc src/Intersection.cc src/IO.cc src/MeshProjector.cc src/Octree.cc src/Parser.cc)
# Include directories
#target_include_directories(manifold PRIVATE src)

pybind11_add_module(manifold ${manifold_SRC})

target_link_libraries(manifold PRIVATE pybind11::module)