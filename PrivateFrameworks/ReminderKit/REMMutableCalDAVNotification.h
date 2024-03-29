//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef REMMutableCalDAVNotification_h
#define REMMutableCalDAVNotification_h
@import Foundation;

#include "REMCalDAVNotification.h"
#include "REMExternalSyncMetadataWritableProviding-Protocol.h"

@class NSString, NSURL;

@interface REMMutableCalDAVNotification : REMCalDAVNotification<REMExternalSyncMetadataWritableProviding>

@property (retain, @dynamic, nonatomic) NSString *uuidString;
@property (retain, @dynamic, nonatomic) NSURL *hostURL;
@property (copy, nonatomic) NSString *externalIdentifier;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (copy, nonatomic) NSString *daSyncToken;
@property (copy, nonatomic) NSString *daPushKey;

@end

#endif /* REMMutableCalDAVNotification_h */
