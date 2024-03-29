//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPMediaQuerySectionInfo_h
#define MPMediaQuerySectionInfo_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray;

@interface MPMediaQuerySectionInfo : NSObject<NSCopying, NSMutableCopying, NSSecureCoding>

@property (copy, nonatomic) NSArray *sectionIndexTitles;
@property (readonly, copy, nonatomic) NSArray *sections;
@property (nonatomic) BOOL hasUnknownSection;
@property (readonly, nonatomic) unsigned long long count;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (unsigned long long)indexOfSectionForSectionIndexTitleAtIndex:(unsigned long long)index;
@end

#endif /* MPMediaQuerySectionInfo_h */
