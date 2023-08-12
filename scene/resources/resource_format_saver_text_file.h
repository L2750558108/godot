#ifndef file_resource_format_saver_text_file_h
#define file_resource_format_saver_text_file_h

#include "core/io/resource_saver.h"

class ResourceFormatSaverTextFile : public ResourceFormatSaver {
    GDCLASS(ResourceFormatSaverTextFile, ResourceFormatSaver);
	
	public:
    Error save(const Ref<Resource> &p_resource, const String &p_path, uint32_t p_flags = 0);
    bool recognize(const Ref<Resource> &p_resource) const;
    void get_recognized_extensions(const Ref<Resource> &p_resource, List<String> *p_extensions) const;
};

#endif