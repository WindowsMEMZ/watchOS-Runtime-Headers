//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKFetchShareMetadataOperationInfo_h
#define CKFetchShareMetadataOperationInfo_h
@import Foundation;

#include "CKOperationInfo.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSDictionary;

@interface CKFetchShareMetadataOperationInfo : CKOperationInfo<NSSecureCoding>

@property (retain, nonatomic) NSArray *shareURLsToFetch;
@property (nonatomic) BOOL shouldFetchRootRecord;
@property (retain, nonatomic) NSArray *rootRecordDesiredKeys;
@property (retain, nonatomic) NSDictionary *shareInvitationTokensByShareURL;
@property (nonatomic) BOOL overwriteContainerPCSServiceIfManatee;
@property (nonatomic) BOOL skipShareDecryption;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* CKFetchShareMetadataOperationInfo_h */
