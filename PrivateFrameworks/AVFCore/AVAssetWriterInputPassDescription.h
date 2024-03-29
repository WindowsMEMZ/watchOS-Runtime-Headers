//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVAssetWriterInputPassDescription_h
#define AVAssetWriterInputPassDescription_h
@import Foundation;

#include "AVAssetWriterInputPassDescriptionInternal.h"

@class NSArray;

@interface AVAssetWriterInputPassDescription : NSObject {
  /* instance variables */
  AVAssetWriterInputPassDescriptionInternal *_internal;
}

@property (readonly, nonatomic) NSArray *sourceTimeRanges;

/* instance methods */
- (id)init;
- (id)initWithTimeRanges:(id)ranges;
- (void)dealloc;
- (id)description;
@end

#endif /* AVAssetWriterInputPassDescription_h */
