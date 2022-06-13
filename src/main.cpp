#include <opencv2/opencv.hpp>
#include <Eigen/Dense>
#include <iostream>

using namespace std;
using namespace cv;

int main() {
  VideoCapture cap(0);
  if (!cap.isOpened()) {
    cout << "error opening video stream or file" << endl;
    return -1;
  }

  Rect rect(1,1,100,200);

  while (1) {
    Mat frame;
    cap >> frame;
    frame = frame(rect)
    // Break immediately for empty frame
    if (frame.empty()) {
      break;
    }

    // Display reslts
    imshow( "Frame", frame );
    moveWindow("Frame", 500, 100);

    // Press  ESC on keyboard to exit
    char c=(char)waitKey(25);
    if(c==27) {
      break;
    }

  }
  cap.release();
  destroyAllWindows;
  return 0;
}