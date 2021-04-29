# 
# 简介：cmakelists文件
# 作者：junlin.lai
# 更改：|日期|内容|作者|
# .................................
# |20210429|cmakelists|junlin.lai|
# 
# 
# 
#

# cmake最小编译版本
cmake_minimum_required(VERSION 3.10)

# 项目名字
project(TEST03)

# 头文件包含目录CMAKE_SOURCE_DIR:指向CMAKElISTS的绝对路径
include_directories(${CMAKE_SOURCE_DIR}/hdir)

# 生成可执行文件
add_executable(solider_cmake main.cpp src/Gun.cpp src/Solider.cpp)

# 增加调试信息：wall打印所有报错信息，编译标准，o2优化方案
# add_compile_options(-wall -std=c++11 -o2)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -o2 -Wall")  # 这两行一样的意思，CMAKE_CXX_FLAGS指的默认的系统编译选项 -g生成带调试信息的





