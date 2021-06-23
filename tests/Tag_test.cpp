/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Informationand Computing Sciences)
*/

#include "pch.h"
#include "Tag.h"



// GetTag function
TEST(TagMap_getTag, unknownTag) {
	Tag t = TagMap::getTag("");
	EXPECT_EQ(t, Tag::unknown_tag);
}

TEST(TagMap_getTag, knownTag) {
	Tag t = TagMap::getTag("decl");
	EXPECT_EQ(t, Tag::decl_tag);
}



// GetMap function
TEST(TagMap_getMap, notEmpty) {
	std::map<std::string, Tag> m = TagMap::getMap();
	EXPECT_NE(m.size(), 0);
}

TEST(TagMap_getMap, containsTag) {
	std::map<std::string, Tag> m = TagMap::getMap();
	EXPECT_EQ(m["decl"], decl_tag);
}

TEST(TagMap_getMap, doesNotContainTag) {
	std::map<std::string, Tag> m = TagMap::getMap();
	EXPECT_EQ(m.find(""), m.end());
}
