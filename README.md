# 2022_ComputerVision_Lec
컴퓨터비전 예제 풀이.

### 프로젝트 설정

#### 1) Open CV Download

#### 2) Open CV (opencv\build\x64\vc15\bin\opencv_world455d.dll & opencv_world455.dll) ->  Project Folder

#### 3) Project 속성 설정

##### 3-1) 구성 속성 -> C/C++ -> 일반 : 추가 포함 디렉터리 => opencv\build\include
##### 3-2) 구성 속성 -> 링커 -> 일반 : 추가 라이브러리 디렉터리 => opencv\build\x64\vc15\lib  // 64 비트 PC
##### 3-3) 구성 속성 -> 링커 -> 입력 : 추가 종속성 += opencv_world455d.lib
##### 3-4) 플랫폼 : x64 // 64 비트 PC
##### 4) Complete
