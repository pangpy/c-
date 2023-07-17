# cpp这是一个vs studio 写的控制台程序空项目代码：班级45名同学随机点名程序。
询问chatgpt：c++写一个随机点名的桌面程序，里面写班上45名同学？
下面是一个简单的C++随机点名程序的示例：

```cpp
#include <iostream>
#include <string>
#include <vector>
#include <ctime>

int main()
{
    // 存储班上的同学名字
    std::vector<std::string> classmates = {
        "同学1", "同学2", "同学3", "同学4", "同学5", "同学6", "同学7", "同学8", "同学9", "同学10",
        "同学11", "同学12", "同学13", "同学14", "同学15", "同学16", "同学17", "同学18", "同学19", "同学20",
        "同学21", "同学22", "同学23", "同学24", "同学25", "同学26", "同学27", "同学28", "同学29", "同学30",
        "同学31", "同学32", "同学33", "同学34", "同学35", "同学36", "同学37", "同学38", "同学39", "同学40",
        "同学41", "同学42", "同学43", "同学44", "同学45"
    };

    // 设置随机种子
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // 随机点名
    int randomIndex = std::rand() % classmates.size();
    std::string selectedStudent = classmates[randomIndex];

    // 输出结果
    std::cout << "随机点名结果：" << selectedStudent << std::endl;

    return 0;
}
```

请将班上的同学名字替换为实际的同学名字，保存为.cpp文件，然后进行编译和运行。每次运行程序，它将随机选择一个同学进行点名，并将结果输出到控制台。
