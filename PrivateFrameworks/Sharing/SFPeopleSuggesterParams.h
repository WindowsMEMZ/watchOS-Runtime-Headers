//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SFPeopleSuggesterParams_h
#define SFPeopleSuggesterParams_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSArray;

@interface SFPeopleSuggesterParams : NSObject<NSSecureCoding>

@property (copy, nonatomic) NSArray *contactIDs;
@property (nonatomic) unsigned int flags;
@property (nonatomic) unsigned int maxPeople;
@property (nonatomic) BOOL excludeBackfills;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* SFPeopleSuggesterParams_h */
