//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSVRefreshStoreQueueDownloadOperation_h
#define SSVRefreshStoreQueueDownloadOperation_h
@import Foundation;

#include "SSVLoadDownloadQueueOperation.h"

@class NSNumber, NSString;

@interface SSVRefreshStoreQueueDownloadOperation : SSVLoadDownloadQueueOperation {
  /* instance variables */
  NSString *_downloadTrasactionID;
}

@property (readonly) NSNumber *accountID;
@property (readonly) NSString *downloadTransactionID;

/* instance methods */
- (id)initWithDownloadTransactionIdentifier:(id)identifier accountID:(id)id;
- (id)isDownloadTransactionID;
- (void)main;
- (BOOL)_refreshDownloadWithTransactionID:(id)id accountID:(id)id bagKey:(id)key error:(id *)error;
@end

#endif /* SSVRefreshStoreQueueDownloadOperation_h */
