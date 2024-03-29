//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 379.2.3.0.0
//
#ifndef BLTDataProviderConnection_h
#define BLTDataProviderConnection_h
@import Foundation;

@class BBDataProviderConnection;
@protocol OS_dispatch_queue;

@interface BLTDataProviderConnection : NSObject

@property (retain, nonatomic) BBDataProviderConnection *dataProviderConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataProviderConnectionQueue;

/* class methods */
+ (id)dataProviderConnectionWithServiceName:(id)name onQueue:(id)queue;

/* instance methods */
@end

#endif /* BLTDataProviderConnection_h */
