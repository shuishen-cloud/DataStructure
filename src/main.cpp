/*
 * Filename:  main.cpp
 * Project:   src
 * Author:    lwy
 * ***
 * Created:   2025/08/16 Saturday 15:40:49
 * Modified:  2025/08/16 Saturday 16:05:44
 * ***
 * Description: 测试 CMake 项目构建运行
 */

#include <iostream>
#include "test.h"

int main(void){
    
    std::cout << "Hello from CMakeProject!" << std::endl;

    test::test_func();    // test.h 头文件测试

    return 0;
}
