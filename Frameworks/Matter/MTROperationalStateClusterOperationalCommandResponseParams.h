//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 125.3.4.0.0
//
#ifndef MTROperationalStateClusterOperationalCommandResponseParams_h
#define MTROperationalStateClusterOperationalCommandResponseParams_h
@import Foundation;

#include "MTROperationalStateClusterErrorStateStruct.h"
#include "NSCopying-Protocol.h"

@interface MTROperationalStateClusterOperationalCommandResponseParams : NSObject<NSCopying>

@property (copy, nonatomic) MTROperationalStateClusterErrorStateStruct *commandResponseState;

/* instance methods */
- (struct ChipError { unsigned int x0; char * x1; unsigned int x2; })_setFieldsFromDecodableStruct:(const void *)struct;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (id)initWithResponseValue:(id)value error:(id *)error;
@end

#endif /* MTROperationalStateClusterOperationalCommandResponseParams_h */
