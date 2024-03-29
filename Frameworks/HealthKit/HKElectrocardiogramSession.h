//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKElectrocardiogramSession_h
#define HKElectrocardiogramSession_h
@import Foundation;

#include "HKElectrocardiogramSessionClientInterface-Protocol.h"
#include "HKElectrocardiogramSessionConfiguration.h"
#include "HKHealthStore.h"
#include "HKTaskServerProxyProvider.h"
#include "_HKXPCExportable-Protocol.h"

@class NSString;
@protocol HKElectrocardiogramSessionDelegate;

@interface HKElectrocardiogramSession : NSObject<_HKXPCExportable, HKElectrocardiogramSessionClientInterface> {
  /* instance variables */
  HKHealthStore *_healthStore;
  HKTaskServerProxyProvider *_proxyProvider;
}

@property (readonly, copy, nonatomic) HKElectrocardiogramSessionConfiguration *sessionConfiguration;
@property (weak, nonatomic) NSObject<HKElectrocardiogramSessionDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)isElectrocardiogramSessionAvailable;
+ (id)clientInterface;
+ (id)serverInterface;

/* instance methods */
- (id)init;
- (id)initWithHealthStore:(id)store configuration:(id)configuration;
- (void)startWithCompletion:(id /* block */)completion;
- (void)abortWithCompletion:(id /* block */)completion;
- (void)clientRemote_didDetectContactAtDate:(id)date;
- (void)clientRemote_didEndWithReason:(long long)reason error:(id)error;
- (void)clientRemote_didDetectEmergencyCallbackModeWithEndDate:(id)date;
- (id)exportedInterface;
- (id)remoteInterface;
- (void)connectionInvalidated;
- (void)connectionInterrupted;
@end

#endif /* HKElectrocardiogramSession_h */
