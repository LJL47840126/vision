# 
# 简介：cmakelists文件
# 作者：junlin.lai
# 更改：|日期|内容|作者|
# .................................
# |20210428|cmakelists|junlin.lai|
# 
# 
# 
#

# cmake最小编译版本
cmake_minimum_required(VERSION 3.10)

# 项目名字
project(SWAP)

# 头文件目录
include_directories(./hdir)

# 生成可执行文件
add_executable(main_cmake main.cpp src/swap.cpp)