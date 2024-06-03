# Проект с использованием CMAKE
Проект с использованием CMake и vcpkg.

# Требования
1. Скачать и установить vcpkg:</br>
git clone https://github.com/microsoft/vcpkg.git </br>
cd vcpkg </br>
bootstrap-vcpkg.bat </br>
vcpkg integrate install</br>
2. Скачать и установить CMake</br>
3. Скачать boost</br>
vcpkg install boost:x64-windows</br>
4. Создать папку с проектом</br>
mkdir build</br>
cd build</br>
5. Собрать проект</br>
cmake .. -DCMAKE_TOOLCHAIN_FILE=C:/path/to/vcpkg/scripts/buildsystems/vcpkg.cmake</br>
Заменить C:/path/to/vcpkg на путь к vcpkg
cmake --build
