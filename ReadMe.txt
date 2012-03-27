Information
===========

This is a very initial implementation of background subtraction and movement tracking modified from an OpenCV example code in \emph{Learning OPENCV}.

The distribution contains backgroud substraction codes including average value and codebook methods, and tracking codes of detecting the range of human areas.

The system is implemented with C/C++. The software was tested on Windows XP using CodeBLocks ( because my PC with Linux cannot be accessed on weekends)

Future work:
1. background subtraction
	more powerful algorithms for bg_model training should be used to improve both the efficiency and accuracy.
	eg, the blocks on the door in \emph{dancer_forground} are labeled as forground mainly for the shadow of the dancer. Those blocks should be elliminated.

2. 	movement tracking
	The implementation is a initial one using simple pixel compariation method and have some false alarms in tracking the body. Tracking methods like Optical-Flow and human body detecting systems like HOG-LBP should be used in the future .

If you have any problem about the software, codes, license etc., please contact me as soon as possible

Dependent software
===========
1. OpenCV: http://www.opencv.org.cn/index.php/Download

2. CodeBlocks:
http://www.codeblocks.org/

Basic Usage
===========
1. Unpack the code.
2. Compile the c/c++ code with codeblocks
3. Run "./HumanAction.exe begin end dancer.mp4"
4. output: dancer.avi


Best,
Jiwei Zhang


=================
Zhang Jiwei
School of Information and Communications Engineering @ BUPT
Student ID: 105414
Mobile: 86-134-2607-6732
E-mail: buptjiwei@gmail.com
