//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMTelevisionProfile_h
#define HMTelevisionProfile_h
@import Foundation;

#include "HMAccessoryProfile.h"
#include "_HMTelevisionProfileDelegate-Protocol.h"

@class NSArray, NSString;
@protocol HMTelevisionProfileDelegate;

@interface HMTelevisionProfile : HMAccessoryProfile<_HMTelevisionProfileDelegate>

@property (readonly) NSArray *mediaSourceDisplayOrder;
@property (readonly) BOOL mediaSourceDisplayOrderModifiable;
@property (weak) NSObject<HMTelevisionProfileDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTelevisionService:(id)service linkedServices:(id)services;
- (void)updateMediaSourceDisplayOrder:(id)order completionHandler:(id /* block */)handler;
- (void)televisionProfileDidUpdateSourceDisplayOrder:(id)order;
- (BOOL)mergeFromNewObject:(id)object;
@end

#endif /* HMTelevisionProfile_h */
