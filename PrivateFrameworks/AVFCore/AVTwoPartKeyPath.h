//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVTwoPartKeyPath_h
#define AVTwoPartKeyPath_h
@import Foundation;

#include "AVKeyPath-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface AVTwoPartKeyPath : NSObject<AVKeyPath, NSCopying> {
  /* instance variables */
  NSString *_topLevelKey;
  NSString *_secondLevelKey;
}

@property (readonly, nonatomic) NSString *topLevelPropertyKey;
@property (readonly, nonatomic) NSString *secondLevelPropertyKey;
@property (readonly, nonatomic) NSString *keyPathString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTopLevelPropertyKey:(id)key secondLevelPropertyKey:(id)key;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* AVTwoPartKeyPath_h */
