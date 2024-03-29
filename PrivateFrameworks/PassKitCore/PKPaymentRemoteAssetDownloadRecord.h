//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentRemoteAssetDownloadRecord_h
#define PKPaymentRemoteAssetDownloadRecord_h
@import Foundation;

#include "PKPaymentBackgroundDownloadRecord.h"
#include "NSSecureCoding-Protocol.h"

@class NSDictionary, NSURL;

@interface PKPaymentRemoteAssetDownloadRecord : PKPaymentBackgroundDownloadRecord<NSSecureCoding>

@property (retain, nonatomic) NSURL *passURL;
@property (retain, nonatomic) NSDictionary *remoteAssetsByTaskIdentifier;
@property (retain, nonatomic) NSDictionary *remoteAssetsByRecordName;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)hasOutstandingRemoteAssetTasks;
- (void)setRemoteURLAsset:(id)urlasset forTaskIdentifier:(id)identifier;
- (void)setRemoteCloudStoreAsset:(id)asset forRecordName:(id)name;
- (void)removeRemoteURLAssetForTaskIdentifier:(id)identifier;
- (void)removeRemoteCloudStoreAssetForRecordName:(id)name;
@end

#endif /* PKPaymentRemoteAssetDownloadRecord_h */
