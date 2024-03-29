//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 379.2.3.0.0
//
#ifndef BLTSettingAndCompletion_h
#define BLTSettingAndCompletion_h
@import Foundation;

#include "BLTPBSectionInfo.h"

@interface BLTSettingAndCompletion : NSObject

@property (retain, nonatomic) BLTPBSectionInfo *sectionInfo;
@property (copy, nonatomic) id /* block */ completion;

/* class methods */
+ (id)settingAndCompletionWithSectionInfo:(id)info completion:(id /* block */)completion;

/* instance methods */
@end

#endif /* BLTSettingAndCompletion_h */
