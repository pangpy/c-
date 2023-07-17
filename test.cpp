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
