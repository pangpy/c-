#include <iostream>
#include <string>
#include <vector>
#include <ctime>
int main()
{
    // �洢���ϵ�ͬѧ����
    std::vector<std::string> classmates = {
        "ͬѧ1", "ͬѧ2", "ͬѧ3", "ͬѧ4", "ͬѧ5", "ͬѧ6", "ͬѧ7", "ͬѧ8", "ͬѧ9", "ͬѧ10",
        "ͬѧ11", "ͬѧ12", "ͬѧ13", "ͬѧ14", "ͬѧ15", "ͬѧ16", "ͬѧ17", "ͬѧ18", "ͬѧ19", "ͬѧ20",
        "ͬѧ21", "ͬѧ22", "ͬѧ23", "ͬѧ24", "ͬѧ25", "ͬѧ26", "ͬѧ27", "ͬѧ28", "ͬѧ29", "ͬѧ30",
        "ͬѧ31", "ͬѧ32", "ͬѧ33", "ͬѧ34", "ͬѧ35", "ͬѧ36", "ͬѧ37", "ͬѧ38", "ͬѧ39", "ͬѧ40",
        "ͬѧ41", "ͬѧ42", "ͬѧ43", "ͬѧ44", "ͬѧ45"
    };

    // �����������
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // �������
    int randomIndex = std::rand() % classmates.size();
    std::string selectedStudent = classmates[randomIndex];

    // ������
    std::cout << "������������" << selectedStudent << std::endl;

    return 0;
}
