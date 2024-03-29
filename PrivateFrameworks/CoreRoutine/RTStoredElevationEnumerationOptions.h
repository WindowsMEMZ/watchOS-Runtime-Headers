//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 895.0.11.0.2
//
#ifndef RTStoredElevationEnumerationOptions_h
#define RTStoredElevationEnumerationOptions_h
@import Foundation;

#include "RTEnumerationOptions.h"
#include "NSCopying-Protocol.h"

@class NSDateInterval;

@interface RTStoredElevationEnumerationOptions : RTEnumerationOptions<NSCopying> {
  /* instance variables */
  unsigned long long _batchSize;
}

@property (readonly, nonatomic) NSDateInterval *dateInterval;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithDateInterval:(id)interval batchSize:(unsigned long long)size;
- (unsigned long long)batchSize;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToOptions:(id)options;
- (unsigned long long)hash;
- (Class)enumeratedType;
- (id /* block */)processingBlock;
@end

#endif /* RTStoredElevationEnumerationOptions_h */
