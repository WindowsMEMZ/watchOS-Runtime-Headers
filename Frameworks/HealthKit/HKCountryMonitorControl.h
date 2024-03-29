//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKCountryMonitorControl_h
#define HKCountryMonitorControl_h
@import Foundation;

#include "HKCountryMonitorControlClient-Protocol.h"
#include "HKProxyProvider.h"
#include "_HKXPCExportable-Protocol.h"

@class NSString;

@interface HKCountryMonitorControl : NSObject<_HKXPCExportable, HKCountryMonitorControlClient> {
  /* instance variables */
  HKProxyProvider *_proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)taskIdentifier;
+ (void)checkCurrentCountry;
+ (void)checkCurrentCountryWithHealthStore:(id)store;

/* instance methods */
- (id)initWithHealthStore:(id)store;
- (void)dealloc;
- (void)fetchCurrentISOCountryCodeAndNotifyObserversWithCompletion:(id /* block */)completion;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)remoteInterface;
@end

#endif /* HKCountryMonitorControl_h */
