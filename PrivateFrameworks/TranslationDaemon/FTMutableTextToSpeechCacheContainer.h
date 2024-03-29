//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef FTMutableTextToSpeechCacheContainer_h
#define FTMutableTextToSpeechCacheContainer_h
@import Foundation;

#include "FTTextToSpeechCacheContainer.h"
#include "FTTextToSpeechCacheMetaInfo.h"

@class NSArray;

@interface FTMutableTextToSpeechCacheContainer : FTTextToSpeechCacheContainer

@property (copy, nonatomic) FTTextToSpeechCacheMetaInfo *cache_meta_info;
@property (copy, nonatomic) NSArray *cache_object;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* FTMutableTextToSpeechCacheContainer_h */
