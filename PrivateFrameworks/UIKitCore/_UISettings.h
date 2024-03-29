//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UISettings_h
#define _UISettings_h
@import Foundation;

#include "PTSettings.h"

@interface _UISettings : PTSettings
/* class methods */
+ (id)settingsFromArchiveFile:(id)file error:(id *)error;
+ (BOOL)_supportsArchivingCustomClass:(Class)class;
+ (BOOL)_supportsArchivingStructType:(id)type;
+ (id)_archiveDictionaryForObject:(id)object ofCustomClass:(Class)class;
+ (id)_archiveDictionaryForValue:(id)value ofStructType:(id)type;
+ (id)_objectOfCustomClass:(Class)class fromArchiveDictionary:(id)dictionary;
+ (id)_valueOfStructType:(id)type fromArchiveDictionary:(id)dictionary;
+ (id)_colorFromDictionary:(id)dictionary;
+ (id)_dictionaryForColor:(id)color;
+ (id)_fontFromDictionary:(id)dictionary;
+ (id)_dictionaryForFont:(id)font;

/* instance methods */
- (id)initWithDefaultValues;
- (BOOL)archiveToFile:(id)file error:(id *)error;
- (BOOL)restoreFromArchiveFile:(id)file error:(id *)error;
- (void)setValuesFromModel:(id)model;
@end

#endif /* _UISettings_h */
