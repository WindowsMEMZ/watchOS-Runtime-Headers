//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPSuggestedEventQuery_h
#define PPSuggestedEventQuery_h
@import Foundation;

#include "PPEventQuery.h"

@class NSSet;

@interface PPSuggestedEventQuery : PPEventQuery

@property (retain, nonatomic) NSSet *matchingCategories;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)description;
@end

#endif /* PPSuggestedEventQuery_h */
