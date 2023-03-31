#include <opencv2/opencv.hpp>

using namespace cv;

int main()
{
    int width = 500;
    int height = 500;

    Mat vectorField(height, width, CV_32FC2);

    float scale = 0.01;

    for(int y = 0; y < height; y++)
    {
        for(int x = 0; x < width; x++)
        {
            float dx = sin(x*scale);
            float dy = sin(y*scale);

            vectorField.at<Vec2f>(y,x) = Vec2f(dx, dy);
        }
    }

    imshow("Vector Field", vectorField);
    waitKey(0);

    return 0;
}
