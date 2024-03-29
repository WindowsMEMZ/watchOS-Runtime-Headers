//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFBiomeUsageCountsFetchRequest_h
#define HFBiomeUsageCountsFetchRequest_h
@import Foundation;

#include "HFBiomeAbstractFetchRequest.h"

@class NSMapTable;

@interface HFBiomeUsageCountsFetchRequest : HFBiomeAbstractFetchRequest

@property (retain) NSMapTable *usageCountByAccessoryRepresentable;
@property (retain) NSMapTable *accessoryRepresentablesByUniqueIdentifier;
@property (copy, nonatomic) id /* block */ filter;

/* instance methods */
- (id)initWithHome:(id)home;
- (id)successHandler;
- (void)eventHandler:(id)handler;
- (void)_incrementUsageCountForAccessoryRepresentable:(id)representable;
- (id)_accessoryRepresentableWithUniqueIdentifierString:(id)string uniqueIdentifierToAccessoryRepesentableBlock:(id /* block */)block;
@end

#endif /* HFBiomeUsageCountsFetchRequest_h */
