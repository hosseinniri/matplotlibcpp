## plot using "matplotlibcpp.h" by g++ compiler in windows 10

# Install and usage  

1) Download "matplotlibcpp.h" from this ripo [https://github.com/lava/matplotlib-cpp]
2) Install python 3.10 and numpy and matplotlib python library using PIP tool
3) Install and configure mingw on windows using this link [https://code.visualstudio.com/docs/cpp/config-mingw]
4) Compile code using bellow command:
   
>> g++ simple_plot.cpp -o simple_plot -I C:\Python310\include -I C:\Python310\Lib\site-packages\numpy\core\include -L C:\Python310\libs -lpython310
##
>> g++ animation.cpp -o aniamtion -I C:\Python310\include -I C:\Python310\Lib\site-packages\numpy\core\include -L C:\Python310\libs -lpython310


# Acknowledgement
Thanks to @lava for the great repository [https://github.com/lava/matplotlib-cpp] 
