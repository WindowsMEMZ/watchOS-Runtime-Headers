//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 217.20.3.0.0
//
#ifndef ANTransactionInfo_h
#define ANTransactionInfo_h
@import Foundation;

@protocol OS_dispatch_source, OS_os_transaction;

@interface ANTransactionInfo : NSObject

@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) double expiration;

/* class methods */
+ (id)infoWithTransaction:(id)transaction;

/* instance methods */
@end

#endif /* ANTransactionInfo_h */
