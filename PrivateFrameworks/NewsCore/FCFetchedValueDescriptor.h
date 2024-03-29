//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCFetchedValueDescriptor_h
#define FCFetchedValueDescriptor_h
@import Foundation;

#include "FCFetchedValueDescriptorObserving-Protocol.h"

@class NSArray;

@interface FCFetchedValueDescriptor : NSObject

@property (readonly, nonatomic) NSArray *inputManagers;
@property (weak) NSObject<FCFetchedValueDescriptorObserving> *observer;

/* instance methods */
- (id)valuePromiseWithCachePolicy:(unsigned long long)policy qualityOfService:(long long)service;
- (id)init;
- (void)fetchValueWithCachePolicy:(unsigned long long)policy qualityOfService:(long long)service completion:(id /* block */)completion;
- (id)fastCachedValue;
- (BOOL)isValue:(id)value equalToValue:(id)value;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* FCFetchedValueDescriptor_h */
