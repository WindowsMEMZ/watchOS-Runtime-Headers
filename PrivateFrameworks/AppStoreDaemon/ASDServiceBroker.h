//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 10.2.8.0.0
//
#ifndef ASDServiceBroker_h
#define ASDServiceBroker_h
@import Foundation;

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface ASDServiceBroker : NSObject {
  /* instance variables */
  NSXPCConnection *_connection;
  NSObject<OS_dispatch_queue> *_dispatchQueue;
  NSString *_machServiceName;
  int _token;
}

/* class methods */
+ (id)defaultBroker;
+ (id)newBrokerForMachServiceName:(id)name;
+ (id)interface;

/* instance methods */
- (id)initWithMachServiceName:(id)name;
- (void)dealloc;
- (void)getCrossfireServiceWithCompletionHandler:(id /* block */)handler;
- (id)getDiagnosticServiceWithError:(id *)error;
- (void)getDiagnosticServiceWithCompletionHandler:(id /* block */)handler;
- (id)getFairPlayServiceWithError:(id *)error;
- (id)getIAPHistoryServiceWithError:(id *)error;
- (void)getIAPHistoryServiceWithCompletionHandler:(id /* block */)handler;
- (id)getInstallationServiceWithError:(id *)error;
- (void)getInstallationServiceWithCompletionHandler:(id /* block */)handler;
- (id)getLibraryServiceWithError:(id *)error;
- (void)getLibraryServiceWithCompletionHandler:(id /* block */)handler;
- (id)getPurchaseHistoryServiceWithError:(id *)error;
- (void)getPurchaseHistoryServiceWithCompletionHandler:(id /* block */)handler;
- (id)getPurchaseServiceWithError:(id *)error;
- (void)getAppMetricsServiceWithCompletionHandler:(id /* block */)handler;
- (void)getAppStoreServiceWithCompletionHandler:(id /* block */)handler;
- (void)getPurchaseServiceWithCompletionHandler:(id /* block */)handler;
- (id)getStoreKitExternalNotificationServiceWithError:(id *)error;
- (void)getTestFlightFeedbackServiceWithCompletionHandler:(id /* block */)handler;
- (id)getTestFlightFeedbackServiceWithError:(id *)error;
- (id)getUpdatesServiceWithError:(id *)error;
- (id)getRepairServiceWithError:(id *)error;
- (void)getRepairServiceWithCompletionHandler:(id /* block */)handler;
- (void)getRestoreServiceWithCompletionHandler:(id /* block */)handler;
- (void)getUpdatesServiceWithCompletionHandler:(id /* block */)handler;
@end

#endif /* ASDServiceBroker_h */
