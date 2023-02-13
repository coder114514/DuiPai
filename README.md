# DuiPai
一个简单的对拍程序

### 用法
checker.exe <datagen.cpp> <ansgen.cpp> <solver.cpp> <ans.out> <solver.out>

<datagen.cpp>: 数据生成器，c++文件

<ansgen.cpp>: 答案生成器，c++文件

<solver.cpp>: 待测试程序, c++文件

<ans.out>: 答案生成器的输出文件名

<solver.out>: 待测程序的输出文件名

### 需要自己把输入输出文件设置好

例子：

<datagen.cpp>中：freopen("input.txt", "w", stdout);

<ansgen.cpp>中：freopen("input.txt", "r", stdin); freopen("ans.txt", "w", stdout);

<solver.cpp>中：freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);

然后调用 checker.exe <datagen.cpp> <ansgen.cpp> <solver.cpp> ans.txt output.txt