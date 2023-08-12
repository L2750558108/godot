#ifndef file_resource_format_loader_text_file_h
#define file_resource_format_loader_text_file_h

#include "core/io/resource_loader.h"

class ResourceFormatLoaderTextFile : public ResourceFormatLoader
{
	GDCLASS(ResourceFormatLoaderTextFile,ResourceFormatLoader);

	public:
	Ref<Resource> load(const String &p_path, const String &p_original_path = "", Error *r_error = nullptr, bool p_use_sub_threads = false, float *r_progress = nullptr, CacheMode p_cache_mode = CACHE_MODE_REUSE);
    void get_recognized_extensions(List<String> *r_extensions) const;
    bool handles_type(const String &p_type) const;
    String get_resource_type(const String &p_path) const;

};

#endif