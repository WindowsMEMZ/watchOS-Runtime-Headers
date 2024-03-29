//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKStreamingAsset_h
#define CKStreamingAsset_h
@import Foundation;

#include "CKPropertiesDescription-Protocol.h"
#include "CKRecordValue-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class C2RequestOptions, NSData, NSDate, NSString, NSURL;

@interface CKStreamingAsset : NSObject<CKRecordValue, CKPropertiesDescription, NSSecureCoding, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) C2RequestOptions *immutableRequestOptions;
@property (copy) NSData *fileSignature;
@property (copy) NSData *referenceSignature;
@property (copy) NSString *owner;
@property long long expectedSizeBytes;
@property (copy) NSURL *uploadURL;
@property (copy) NSDate *uploadURLExpirationDate;
@property long long reservedSize;
@property (copy) C2RequestOptions *requestOptions;
@property (copy) NSURL *downloadURL;
@property (copy) NSDate *downloadURLExpirationDate;
@property long long size;
@property BOOL hasSize;
@property (copy) NSString *uploadReceipt;
@property (readonly) long long bytesUploaded;
@property (readonly) long long bytesUpperBound;
@property (readonly, copy) NSURL *contentDownloadURL;
@property (readonly, copy) NSDate *contentDownloadURLExpirationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)initialize;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithExpectedSizeBytes:(long long)bytes;
- (id)initInternal;
- (id)init;
- (void)copyServerFieldsFromStreamingAsset:(id)asset;
- (void)CKDescribePropertiesUsing:(id)using;
- (id)redactedDescription;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CKStreamingAsset_h */
