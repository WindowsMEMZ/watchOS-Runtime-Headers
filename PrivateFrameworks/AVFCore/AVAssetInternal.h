//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVAssetInternal_h
#define AVAssetInternal_h
@import Foundation;

#include "AVDispatchOnce.h"
#include "AVLoggingIdentifier-Protocol.h"
#include "AVWeakReference.h"

@class NSArray, NSString;

@interface AVAssetInternal : NSObject {
  /* instance variables */
  AVWeakReference *weakReference;
  AVDispatchOnce *loadChapterInfoOnce;
  NSArray *chapterGroupInfo;
  NSString *anchorChapterType;
  NSArray *availableChapterLanguages;
  NSArray *availableCanonicalizedChapterLanguages;
  NSArray *availableChapterLocales;
  NSObject<AVLoggingIdentifier> *loggingIdentifier;
}

@end

#endif /* AVAssetInternal_h */
