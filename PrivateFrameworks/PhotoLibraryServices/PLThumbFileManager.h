//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLThumbFileManager_h
#define PLThumbFileManager_h
@import Foundation;

#include "PLThumbFileManagerCore.h"

@interface PLThumbFileManager : PLThumbFileManagerCore
/* instance methods */
- (BOOL)setImageForEntry:(id)entry withIdentifier:(id)identifier orIndex:(unsigned long long)index photoUUID:(id)uuid options:(id)options;
- (BOOL)_writeImage:(id)image forThumbIdentifier:(id)identifier;
- (struct CGImage *)createImageWithIdentifier:(id)identifier orIndex:(unsigned long long)index;
@end

#endif /* PLThumbFileManager_h */
