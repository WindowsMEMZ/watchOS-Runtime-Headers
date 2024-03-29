//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef FLTMutableSSUExample_h
#define FLTMutableSSUExample_h
@import Foundation;

#include "FLTSSUExample.h"
#include "FLTSSUExampleEncodedVector.h"
#include "FLTSSUExampleUtterance.h"

@protocol FLTBFBufferAccessor><NSCopying;

@interface FLTMutableSSUExample : FLTSSUExample

@property (nonatomic) long long data_type;
@property (copy, nonatomic) FLTSSUExampleUtterance *dataAsFLTSSUExampleUtterance;
@property (copy, nonatomic) FLTSSUExampleEncodedVector *dataAsFLTSSUExampleEncodedVector;
@property (copy, @dynamic, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *data;

/* class methods */
+ (Class)data_mutableClassForType:(long long)type;
+ (long long)data_typeForMutableObject:(id)object;
+ (long long)data_typeForObject:(id)object;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* FLTMutableSSUExample_h */
