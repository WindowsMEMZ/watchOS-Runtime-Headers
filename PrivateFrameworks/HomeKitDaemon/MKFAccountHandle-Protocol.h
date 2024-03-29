//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef MKFAccountHandle_Protocol_h
#define MKFAccountHandle_Protocol_h
@import Foundation;

@protocol MKFAccountHandle <MKFModel, MKFAccountHandlePublicExtensions>

@property (retain, nonatomic) IDSURI *idsURI;
@property (copy, nonatomic) NSNumber *local;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, retain, nonatomic) NSObject<MKFAccount> *account;
@property (readonly, copy, nonatomic) MKFAccountHandleDatabaseID *databaseID;

@end

#endif /* MKFAccountHandle_Protocol_h */
