//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 148.0.0.0.0
//
#ifndef PTTestRecipeInfo_h
#define PTTestRecipeInfo_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSIndexSet, NSString;

@interface PTTestRecipeInfo : NSObject<NSSecureCoding>

@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) NSString *domainIdentifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSIndexSet *events;
@property (readonly, nonatomic) NSString *recipeDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithTestRecipe:(id)recipe domainInfo:(id)info;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* PTTestRecipeInfo_h */
