//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSPurchaseReceipt_h
#define SSPurchaseReceipt_h
@import Foundation;

#include "ISPurchaseReceipt.h"

@class NSDate;

@interface SSPurchaseReceipt : NSObject {
  /* instance variables */
  ISPurchaseReceipt *_purchaseReceipt;
}

@property (readonly) BOOL isValid;
@property (readonly) BOOL isVPPLicensed;
@property (readonly) BOOL isRevoked;
@property (readonly) NSDate *expirationDate;

/* class methods */
+ (void)getReceiptPathWithCompletionBlock:(id /* block */)block;
+ (id)receiptPathForProxy:(id)proxy;
+ (int)vppStateFlagsWithProxy:(id)proxy;

/* instance methods */
- (id)initWithContentsOfFile:(id)file;
- (id)initWithContainerPath:(id)path;
- (BOOL)receiptExpired;
@end

#endif /* SSPurchaseReceipt_h */
