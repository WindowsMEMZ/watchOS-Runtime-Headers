//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCoreFollowUpRemoveItemsOperation_h
#define HMDCoreFollowUpRemoveItemsOperation_h
@import Foundation;

#include "HMFOperation.h"

@class NSArray;
@protocol HMDFollowUpController;

@interface HMDCoreFollowUpRemoveItemsOperation : HMFOperation

@property (copy, nonatomic) NSArray *identifiersToRemove;
@property (retain, nonatomic) NSObject<HMDFollowUpController> *followUpController;

/* instance methods */
- (id)initWithIdentifiersToRemove:(id)remove followUpController:(id)controller;
- (void)main;
@end

#endif /* HMDCoreFollowUpRemoveItemsOperation_h */
