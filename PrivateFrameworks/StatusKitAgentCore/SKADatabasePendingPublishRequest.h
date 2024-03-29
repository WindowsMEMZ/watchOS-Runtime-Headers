//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 25.300.51.0.0
//
#ifndef SKADatabasePendingPublishRequest_h
#define SKADatabasePendingPublishRequest_h
@import Foundation;

@class NSData, NSDate, NSString;

@interface SKADatabasePendingPublishRequest : NSObject

@property (readonly, copy, nonatomic) NSString *statusTypeIdentifier;
@property (readonly, copy, nonatomic) NSDate *dateCreated;
@property (readonly, nonatomic) NSData *payloadData;
@property (readonly, copy, nonatomic) NSString *statusUniqueIdentifier;
@property (readonly, nonatomic) long long retryCount;

/* instance methods */
- (id)initWithCoreDataPendingPublishRequest:(id)request;
- (id)initWithStatusTypeIdentifier:(id)identifier dateCreated:(id)created payloadData:(id)data statusUniqueIdentifier:(id)identifier retryCount:(long long)count;
@end

#endif /* SKADatabasePendingPublishRequest_h */
