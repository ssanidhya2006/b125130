#include <iostream>
using namespace std;

class Compressor
{
public:
    virtual void compress(double fileSize)
    {
        cout << "Compressing file" << endl;
    }
};

class TextCompressor : public Compressor
{
public:
    void compress(double fileSize)
    {
        double compressedSize = fileSize * 0.40;

        cout << "Original Text Size: " << fileSize << " MB" << endl;
        cout << "Compressed Text Size: " << compressedSize << " MB" << endl;
    }
};

class ImageCompressor : public Compressor
{
public:
    void compress(double fileSize)
    {
        double compressedSize = fileSize * 0.70;

        cout << "Original Image Size: " << fileSize << " MB" << endl;
        cout << "Compressed Image Size: " << compressedSize << " MB" << endl;
    }
};

int main()
{
    TextCompressor t;
    ImageCompressor i;

    t.compress(100);
    i.compress(100);

    return 0;
}