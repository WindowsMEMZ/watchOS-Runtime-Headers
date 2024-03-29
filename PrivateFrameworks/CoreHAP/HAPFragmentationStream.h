//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HAPFragmentationStream_h
#define HAPFragmentationStream_h
@import Foundation;

#include "HMFObject.h"

@class NSMutableOrderedSet, NSNumber;
@protocol HAPFragmentationStreamDelegate, OS_dispatch_queue;

@interface HAPFragmentationStream : HMFObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, nonatomic) NSMutableOrderedSet *pendingPackets;
@property (retain, nonatomic) NSNumber *currentPacketTransactionIdentifier;
@property (weak) NSObject<HAPFragmentationStreamDelegate> *delegate;

/* class methods */
+ (id)fragmentationPacketsForData:(id)data maxLength:(unsigned long long)length transactionIdentifier:(unsigned short)identifier;

/* instance methods */
- (id)init;
- (void)open;
- (void)close;
- (void)receivedFragmentedPacket:(id)packet;
- (id)__transactionDataWithTransactionIdentifier:(unsigned short)identifier;
- (BOOL)__isTransactionCompleteWithTransactionIdentifier:(unsigned short)identifier;
- (id)__filteredPacketsWithTransactionIdentifier:(unsigned short)identifier;
- (void)__addFragmentationPacket:(id)packet;
- (void)__removeAllPendingPacketsWithTransactionIdentifier:(unsigned short)identifier;
@end

#endif /* HAPFragmentationStream_h */
