[![en](https://img.shields.io/badge/lang-en-red.svg)](README.md)  
[![kr](https://img.shields.io/badge/lang-kr-green.svg)](README.kr.md)

---

# Introduction  
![01](imgs/01.png)

This template is designed for [010 Editor](https://www.sweetscape.com/010editor/) to easily visualize the structure of *.apk files and *.idx files.

The apk and idx files are formats commonly found in some console games.

* An apk file is an archive format that contains various files.  
* An idx file exists alongside the apk file and only contains index information for the files included in the apk.

For a more detailed analysis of the file format, please refer to the [ymtools](https://github.com/akio7624/ymtools) repository.

Additionally, you can use ymtools to edit apk and idx files in a limited capacity.

# How to Use  
1. Download the *.bt files and save them in a suitable location.  
    * APK.bt is a template specifically for *.apk files.  
    * IDX.bt is a template specifically for *.idx files.  
    * APK-nolib.bt is a template for *.apk files that can be run without a DLL library.  
2. (Windows only) Please place the `LibApkIdxTemplate.dll` file in the same folder as the template files.  
3. Open the file you want to analyze in **010 Editor**.  
4. Select the appropriate template file by navigating to `Templates > Open Template...`.  
5. When the template file window opens, press F5 to execute the template.  
6. You can easily view the structure of the analyzed file in the `Variables` tab.

# Errors  
## Check the file is a valid ??-bit library.  
The error `Check the file is a valid ??-bit library.` may occur if the dll file does not match the architecture of Windows.  
If your computer is 32-bit, use the file from the x86 folder; if it is 64-bit, use the dll file from the x64 folder.

## Could not locate file to link.  
If the error `Could not locate file to link.` occurs, please check if the dll file is correctly named `LibApkIdxTemplate.dll`.

Currently, the library only supports Windows, so if you are running it on Linux or other systems, please use the `APK-nolib.bt` file instead of `APK.bt`.  
This is just a difference in the existence of a function that additionally displays the file name, and it does not affect file analysis.  
* The IDX.bt template does not require any additional files to run.