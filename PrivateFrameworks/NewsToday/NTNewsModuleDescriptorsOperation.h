//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NTNewsModuleDescriptorsOperation_h
#define NTNewsModuleDescriptorsOperation_h
@import Foundation;

#include "NTTodayModuleDescriptorsOperation.h"
#include "NFCopying-Protocol.h"

@class NSArray;

@interface NTNewsModuleDescriptorsOperation : NTTodayModuleDescriptorsOperation

@property (copy, nonatomic) NSArray *resultTodayModuleDescriptors;
@property (copy, nonatomic) NSObject<NFCopying> *prefetchedContent;

/* instance methods */
- (BOOL)validateOperation;
- (void)performOperation;
- (void)_continueOperationWithTodayData:(id)data;
- (void)operationWillFinishWithError:(id)error;
@end

#endif /* NTNewsModuleDescriptorsOperation_h */
