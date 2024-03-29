//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef SGPaths_h
#define SGPaths_h
@import Foundation;

#include "HVPathsBase.h"

@interface SGPaths : HVPathsBase
/* class methods */
+ (id)topDirectoryCreateIfNeeded:(BOOL)needed;
+ (id)suggestionsDirectory;
+ (id)suggestionsDirectoryAfterCreatingIfNeeded:(BOOL)needed;
+ (id)suggestionsDirectoryFile:(id)file;
+ (id)suggestionsDirectoryFile:(id)file creatingSuggestionsDirectoryIfNeeded:(BOOL)needed;
+ (id)suggestionsSubdirectory:(id)subdirectory creatingDirectoriesIfNeeded:(BOOL)needed;
+ (id)suggestionsSubdirectory:(id)subdirectory;
@end

#endif /* SGPaths_h */
