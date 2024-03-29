//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKCacheScoreItem_h
#define PKCacheScoreItem_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSDate;

@interface PKCacheScoreItem : NSObject<NSSecureCoding> {
  /* instance variables */
  NSDate *_insertDate;
}

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (BOOL)hasExpired;
- (BOOL)isNewerThan:(id)than;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* PKCacheScoreItem_h */
