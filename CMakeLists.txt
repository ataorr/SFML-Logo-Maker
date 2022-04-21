cmake_minimum_required(VERSION 3.17)
project(FinalProj)

set(CMAKE_CXX_STANDARD 14)

add_executable(FinalProj main.cpp Image.cpp Image.h FileTree.cpp FileTree.h
        staticFont.cpp staticFont.h Item.cpp Item.h FileNode.cpp FileNode.h
        GuiComponent.cpp GuiComponent.h MenuBar.cpp MenuBar.h ItemList.cpp
        ItemList.h Menu.cpp Menu.h textbox.cpp textbox.h
        EventHandler.h type.cpp type.h snapshot.cpp snapshot.h History.h
        Logo.cpp Logo.h TextInput.cpp TextInput.h SlideBar.cpp SlideBar.h BarSets.cpp
        BarSets.h SwitchMenu.cpp SwitchMenu.h FontList.cpp FontList.h
        mouseCursor.cpp mouseCursor.h gardientBox.cpp gardientBox.h ColorPicker.cpp
        ColorPicker.h staticColor.cpp staticColor.h ColorList.cpp ColorList.h MenuFunctionalities.cpp MenuFunctionalities.h)
target_link_libraries(FinalProj sfml-graphics sfml-audio)
find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)