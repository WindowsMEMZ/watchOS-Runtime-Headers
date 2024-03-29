//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 75.3.6.0.1
//
#ifndef GDFeatureKey_h
#define GDFeatureKey_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface GDFeatureKey : NSObject<NSSecureCoding>

@property (readonly, nonatomic) NSString *viewName;
@property (readonly, nonatomic) NSString *featureName;
@property (readonly, nonatomic) NSString *subidentifierName;
@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) NSString *diagnosticDataString;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithViewName:(id)name featureName:(id)name subidentifierName:(id)name;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)description;
@end

#endif /* GDFeatureKey_h */
