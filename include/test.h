/*
 * Filename:  test.h
 * Project:   include
 * Author:    lwy
 * ***
 * Created:   2025/10/15 Wednesday 20:20:34
 * Modified:  2025/10/15 Wednesday 20:25:14
 * ***
 * Description: 测试 CMake 的头文件检测是否正常
 */

#include <iostream>

namespace test {
    // 测试用函数 test_func()
    inline int test_func(void){
        std::cout << "hello from test" << std::endl;
        return 0;
    }

    class test_class{
        public:

    };
}
