[![en](https://img.shields.io/badge/lang-en-red.svg)](README.md)
[![kr](https://img.shields.io/badge/lang-kr-green.svg)](README.kr.md)

---

# 소개
![01](imgs/01.png)

[010 Editor](https://www.sweetscape.com/010editor/) 전용 *.apk 파일 및 *.idx 파일을 구조를 쉽게 볼 수 있게 해주는 템플릿입니다.

apk 파일과 idx 파일은 일부 콘솔 게임 등에서 발견되는 포맷입니다.

* apk 파일은 각종 파일들을 포함하고 있는 아카이브 형식의 파일입니다.
* idx 파일은 apk 파일과 같이 존재하며 apk 파일에 포함된 파일의 인덱스 정보만 포함합니다.

파일 포맷에 대한 보다 자세한 분석은 [ymtools](https://github.com/akio7624/ymtools) 레포지토리를 참고해주세요. 

또한, 이 ymtools를 이용하여 apk 파일 및 idx 파일을 제한적으로 편집할 수 있습니다.

# 사용 방법
1. *.bt 파일을 다운로드 받은 후 적당한 곳에 저장합니다.
    * `APK.bt` 파일은 *.apk 파일 전용 템플릿입니다
    * `IDX.bt` 파일은 *.idx 파일 전용 템플릿입니다
    * `APK-nolib.bt` 파일은 DLL 라이브러리 없이 실행 가능한 *.apk 파일 전용 템플릿입니다
2. (Windows만 해당) `LibApkIdxTemplate.dll` 파일을 템플릿 파일과 같은 폴더에 위치해주세요.
3. 010 Editor로 분석을 원하는 파일을 엽니다.
4. `Templates > Open Template...`으로 파일에 맞는 템플릿 파일을 선택합니다.
5. 템플릿 파일 창이 열리면 F5를 눌러 템플릿을 실행합니다.
6. `Variables` 탭에서 분석된 파일의 구조를 쉽게 볼 수 있습니다.

# 오류
## Check the file is a valid ??-bit library.
`Check the file is a valid ??-bit library.` 오류가 발생하는 경우 dll 파일과 Windows의 아키텍처가 일치하지 않아 발생할 수 있습니다.
자신의 컴퓨터가 32비트라면 x86 폴더의 파일을, 64비트라면 x64 폴더의 dll 파일을 사용하세요.

##  Could not locate file to link.
`Could not locate file to link.` 오류가 발생하는 경우 dll 파일의 이름이 `LibApkIdxTemdplate.dll`가 맞는지 확인해주세요.

현재 라이브러리는 Windows만 지원하므로 리눅스 등에서 실행하는 경우 `APK.bt` 대신 `APK-nolib.bt` 파일을 사용해주세요.
파일명을 추가적으로 표시해주는 기능의 존재 여부의 차이일 뿐, 파일 분석에는 지장없습니다.
* IDX.bt 템플릿 실행에는 추가적인 파일이 필요 없습니다.
