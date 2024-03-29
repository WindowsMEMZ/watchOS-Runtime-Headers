//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2890.4.12.2.3
//
#ifndef CMLogItem_h
#define CMLogItem_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@interface CMLogItem : NSObject<NSSecureCoding, NSCopying> {
  /* instance variables */
  id _internalLogItem;
}

@property (readonly, nonatomic) double timestamp;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithTimestamp:(double)timestamp;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CMLogItem_h */
