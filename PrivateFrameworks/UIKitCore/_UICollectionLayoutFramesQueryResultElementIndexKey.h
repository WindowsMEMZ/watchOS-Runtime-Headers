//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UICollectionLayoutFramesQueryResultElementIndexKey_h
#define _UICollectionLayoutFramesQueryResultElementIndexKey_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSString;

@interface _UICollectionLayoutFramesQueryResultElementIndexKey : NSObject<NSCopying> {
  /* instance variables */
  NSString *_element;
  long long _index;
}

/* instance methods */
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* _UICollectionLayoutFramesQueryResultElementIndexKey_h */
