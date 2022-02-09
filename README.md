# 学习 C ， C++ ，数据结构和算法的笔记

2021 的秋季自学+学校学习 C 程序设计，算法竞赛入门经典的笔记。

2022 的寒假，自学 C++ 和数据结构，开始刷 PAT 题。

# M1 芯片的Mac电脑对编译运行调试C/C++的环境配置
以下内容主要参考：https://www.cnblogs.com/BYGAO/p/15135609.html。

## 总结一下
你只需要：
1.安装 Xcode Command-line Tools:
`xcode-select --install`
文件比较大，可能需要安装很久，安装成功的话
输入
`clang -v`，会得到类似这样的回复
```
Apple clang version 13.0.0 (clang-1300.0.29.30)
Target: arm64-apple-darwin21.3.0
Thread model: posix
InstalledDir: /Library/Developer/CommandLineTools/usr/bin
```
目前你安装成功了 C++ 语言的编译器
2.安装Vscode
安装插件，下面四个是必备
```
C/C++
C++ Intellisense
Code Runner
CodeLLDB
```
3.新建一个文件夹并且把这个 Git 仓库的 .vscode 中的四个文件保存到你这个新建的文件夹中。

4.Enjoy

## 简单介绍下使用方法
.c/cpp 代码页右上角的运行（或者快捷键 command+option+n)的运行是主要是基于CodeRunner这个插件的，用来对所编写的程序进行快速的编译和输入输出，平常这个用得最多。

左侧边栏第四个中的（或快捷键 fn + F5/等）的运行、调试和断点是主要基于 CodeLLDB 这个插件。这个功能操作起来比较繁琐主要在查 Bug 或者学习他人优秀程序的时候使用，看看程序每一步是怎样运行的。

感谢你看到这里！