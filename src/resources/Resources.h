#ifndef RECOURCES_H_
#define RECOURCES_H_


#include <map>

//! forward declaration
class GuiImageData;

class Resources
{
public:
    static void Clear();
    static bool LoadFiles(const char * path);
    static const u8 * GetFile(const char * filename);
    static u32 GetFileSize(const char * filename);

    static GuiImageData * GetImageData(const char * filename);
    static void RemoveImageData(GuiImageData * image);

private:
    static Resources *instance;

    Resources() {}
    ~Resources() {}

    std::map<std::string, std::pair<unsigned int, GuiImageData *> > imageDataMap;
};

#endif
