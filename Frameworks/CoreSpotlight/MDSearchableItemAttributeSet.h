//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2274.8.0.0.0
//
#ifndef MDSearchableItemAttributeSet_h
#define MDSearchableItemAttributeSet_h
@import Foundation;

#include "CSSearchableItemAttributeSet.h"

@class NSArray;

@interface MDSearchableItemAttributeSet : CSSearchableItemAttributeSet

@property (copy) NSArray *authorPersons;
@property (copy) NSArray *primaryRecipientPersons;
@property (copy) NSArray *recipients;

/* class methods */
+ (BOOL)supportsSecureCoding;
@end

#endif /* MDSearchableItemAttributeSet_h */
