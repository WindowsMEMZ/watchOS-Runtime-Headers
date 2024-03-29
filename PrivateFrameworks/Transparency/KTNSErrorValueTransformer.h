//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1033.64.3.0.0
//
#ifndef KTNSErrorValueTransformer_h
#define KTNSErrorValueTransformer_h
@import Foundation;

#include "NSSecureUnarchiveFromDataTransformer.h"

@interface KTNSErrorValueTransformer : NSSecureUnarchiveFromDataTransformer
/* class methods */
+ (id)name;
+ (void)registerTransformer;
+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;

/* instance methods */
- (id)allowedTopLevelClasses;
- (id)transformedValue:(id)value;
- (id)reverseTransformedValue:(id)value;
@end

#endif /* KTNSErrorValueTransformer_h */
