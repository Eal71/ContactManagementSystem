//#include <iostream>
//using namespace std;
////������
//class CPU {
//public:
//	virtual void calculator() = 0;
//};
//class VideoCard {
//public:
//	virtual void display() = 0;
//};
//class Memory {
//public:
//	virtual void store() = 0;
//};
////�̳�
//class InterCPU : public CPU {
//	void calculator() {
//		cout << "InterCPU work..." << endl;
//	}
//};
//class InterVideoCard : public VideoCard {
//	void display() {
//		cout << "InterVideoCard work..." << endl;
//	}
//};
//class InterMemory : public Memory {
//	void store() {
//		cout << "InterMemory work..." << endl;
//	}
//};
//class AMDCPU : public CPU {
//	void calculator() {
//		cout << "AMDCPU work..." << endl;
//	}
//};
//class AMDVideoCard : public VideoCard {
//	void display() {
//		cout << "AMDVideoCard work..." << endl;
//	}
//};
//class AMDMemory : public Memory {
//	void store() {
//		cout << "AMDMemory work..." << endl;
//	}
//};
////��װ
//class Computer {
//public:
//	Computer(CPU* cpu, VideoCard* videoCard, Memory* memory) {
//		m_cpu = cpu;
//		m_videoCard = videoCard;
//		m_memory = memory;
//	}
//	//�����п����ڶ���,��Ҫ���������ͷ�
//	~Computer() {
//		if (m_cpu != nullptr) {
//			delete m_cpu;
//			m_cpu = nullptr;
//		}
//		if (m_videoCard != nullptr) {
//			delete m_videoCard;
//			m_videoCard = nullptr;
//		}
//		if (m_memory != nullptr) {
//			delete m_memory;
//			m_memory = nullptr;
//		}
//	}
//	void work() {
//		m_cpu->calculator();
//		m_videoCard->display();
//		m_memory->store();
//	}
//private:
//	CPU* m_cpu;
//	VideoCard* m_videoCard;
//	Memory* m_memory;
//};
//void test() {
//	//ʹ�ö�̬������������CPU* cpu = new InterCPU;
//	Computer c1(new InterCPU, new InterVideoCard, new InterMemory);
//	c1.work();
//	cout << "-------------------------------------------" << endl;
//	Computer c2(new AMDCPU, new AMDVideoCard, new AMDMemory);
//	c2.work();
//	cout << "-------------------------------------------" << endl;
//	Computer c3(new InterCPU, new AMDVideoCard, new InterMemory);
//	c3.work();
//	cout << "-------------------------------------------" << endl;
//}
//int main() {
//	test();
//}