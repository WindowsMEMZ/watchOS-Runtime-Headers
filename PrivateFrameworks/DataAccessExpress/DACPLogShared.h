//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2653.2.1.0.0
//
#ifndef DACPLogShared_h
#define DACPLogShared_h
@import Foundation;

@class BOOL *, NSMutableDictionary;

@interface DACPLogShared : NSObject {
  /* instance variables */
  NSMutableDictionary *_UUIDToFileMap;
}

/* class methods */
+ (id)shared;

/* instance methods */
- (id)init;
- (BOOL)_array:(id)_array beginsWithArray:(id)array outRemainingArray:(id *)array;
- (id)_getUUIDForFolder:(id)folder baseName:(id)name;
- (BOOL)_logData:(id)data UUID:(id)uuid startNewFile:(BOOL)file sizeCheck:(long long)check wantsCompressed:(BOOL)compressed maxFileCount:(long long)count outDidCreateNewFile:(BOOL *)file outNewFilePath:(id *)path;
- (BOOL)_slurpToFileUUID:(id)uuid slurpeeFileDescriptor:(int)descriptor prefix:(id)prefix suffix:(id)suffix startNewFile:(BOOL)file sizeCheck:(long long)check wantsCompressed:(BOOL)compressed maxLogFileCount:(int)count outDidCreateNewFile:(BOOL *)file outNewFilePath:(id *)path;
@end

#endif /* DACPLogShared_h */
