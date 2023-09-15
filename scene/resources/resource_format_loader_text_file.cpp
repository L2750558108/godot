#include "resource_format_loader_text_file.h"

#include "scene/resources/text_file.h"

#include "core/io/file_access.h"
#include "core/io/resource_saver.h"

Ref<Resource> ResourceFormatLoaderTextFile::load(const String &p_path, const String &p_original_path, Error *r_error, bool p_use_sub_threads, float *r_progress, CacheMode p_cache_mode) {
	Ref<TextFile> textfile = memnew(TextFile);
	Error err = textfile->load_text(p_path);
	ERR_FAIL_COND_V(err != OK,Ref<TextFile>());
    return textfile;
}

void ResourceFormatLoaderTextFile::get_recognized_extensions(List<String> *r_extensions) const {
    if (!r_extensions->find("txt")) {
	    r_extensions->push_back("txt");
    }
}

String ResourceFormatLoaderTextFile::get_resource_type(const String &p_path) const {
    String el = p_path.get_extension().to_lower();
	if (el == "txt") {
		return "TextFile";
	}
	return "";
}

bool ResourceFormatLoaderTextFile::handles_type(const String &p_type) const {
    return ClassDB::is_parent_class(p_type, "Resource");
}