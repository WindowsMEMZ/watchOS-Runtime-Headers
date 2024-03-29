//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICMonitoredAccountStoreObserver_Protocol_h
#define ICMonitoredAccountStoreObserver_Protocol_h
@import Foundation;

@protocol ICMonitoredAccountStoreObserver <NSObject>
@optional
/* instance methods */
- (void)monitoredAccountStore:(id)store didAddAccount:(id)account;
- (void)monitoredAccountStore:(id)store didUpdateAccount:(id)account;
- (void)monitoredAccountStore:(id)store didRemoveAccount:(id)account;
- (void)monitoredAccountStore:(id)store didChangeCredentialsForAccount:(id)account;
@end

#endif /* ICMonitoredAccountStoreObserver_Protocol_h */
