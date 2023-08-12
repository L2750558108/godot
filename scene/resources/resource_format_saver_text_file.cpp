#include "resource_format_saver_text_file.h"

#include "scene/resources/text_file.h"

Error ResourceFormatSaverTextFile::save(const Ref<Resource> &p_resource, const String &p_path, uint32_t p_flags) {
	Ref<TextFile> textfile = (Ref<TextFile>)p_resource;
	Error err = textfile->save_text(p_path);
	ERR_FAIL_COND_V(err != OK,err);
    return OK;
}

bool ResourceFormatSaverTextFile::recognize(const Ref<Resource> &p_resource) const {
    return Object::cast_to<TextFile>(*p_resource) != NULL;
}

void ResourceFormatSaverTextFile::get_recognized_extensions(const Ref<Resource> &p_resource, List<String> *p_extensions) const {
    if (Object::cast_to<TextFile>(*p_resource)) {
            p_extensions->push_back("txt");
    }
}