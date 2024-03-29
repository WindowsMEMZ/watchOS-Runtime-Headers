//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPExtractionSet_h
#define PPExtractionSet_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray;

@interface PPExtractionSet : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) NSArray *namedEntityRecords;
@property (readonly, nonatomic) NSArray *topicRecords;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithNamedEntityRecords:(id)records topicRecords:(id)records;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)merge:(id)merge;
- (BOOL)isEmpty;
@end

#endif /* PPExtractionSet_h */
