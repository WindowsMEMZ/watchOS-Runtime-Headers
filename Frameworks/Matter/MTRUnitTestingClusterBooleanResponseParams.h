//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 125.3.4.0.0
//
#ifndef MTRUnitTestingClusterBooleanResponseParams_h
#define MTRUnitTestingClusterBooleanResponseParams_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSNumber;

@interface MTRUnitTestingClusterBooleanResponseParams : NSObject<NSCopying>

@property (copy, nonatomic) NSNumber *value;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

/* instance methods */
- (struct ChipError { unsigned int x0; char * x1; unsigned int x2; })_setFieldsFromDecodableStruct:(const struct DecodableType { BOOL x0; } *)struct;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (id)initWithResponseValue:(id)value error:(id *)error;
@end

#endif /* MTRUnitTestingClusterBooleanResponseParams_h */
