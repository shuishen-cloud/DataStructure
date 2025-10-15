# cmake版本的需求，写上去就行
cmake_minimum_required(VERSION 3.22)

# 设置 c++ 版本为 17
set(CMAKE_CXX_STANDARD 17)

# 强制要求支持 CMake 项目指定的标准
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

# 必须，这句话是导出 compile_commands.json 文件的
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# ! 替换掉 ProjectName 来设置项目名称，设置 PROJECT_NAME 变量值
project(DataStructure)

# 设置编译源文件的目录为 src 下所有 cpp 文件，也可根据文件目录结构添加
file(GLOB_RECURSE SOURCES "src/*.cpp")


# 可执行文件，默认会在 /build 文件中生成一个项目同名的可执行文件
add_executable(${PROJECT_NAME} ${SOURCES})

# 设置头文件路径：include/ 是公共目录，对 DaatStructure 可见
target_include_directories(DataStructure
    PUBLIC  # 若其他目标依赖 my_app，也会继承该路径
    ${CMAKE_CURRENT_SOURCE_DIR}/include  # 绝对路径（推荐）
)
