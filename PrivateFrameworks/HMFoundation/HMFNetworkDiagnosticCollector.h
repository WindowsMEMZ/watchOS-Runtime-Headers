//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 767.3.3.0.0
//
#ifndef HMFNetworkDiagnosticCollector_h
#define HMFNetworkDiagnosticCollector_h
@import Foundation;

#include "HMFObject.h"
#include "HMFNetworkBrowser.h"
#include "HMFNetworkBrowserDelegate-Protocol.h"
#include "HMFNetworkDiagnosticDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface HMFNetworkDiagnosticCollector : HMFObject<HMFNetworkDiagnosticDelegate, HMFNetworkBrowserDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSArray *serviceTypes;
@property (retain, nonatomic) NSMutableDictionary *devicesMap;
@property (nonatomic) double discoveryTimeout;
@property (nonatomic) double resolveTimeout;
@property (nonatomic) double diagnosticTimeout;
@property (retain, nonatomic) HMFNetworkBrowser *browser;
@property (readonly, nonatomic) NSArray *currentDiagnostics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithQueue:(id)queue discoveryTimeout:(double)timeout resolveTimeout:(double)timeout diagnosticTimeout:(double)timeout serviceTypes:(id)types;
- (id)initWithQueue:(id)queue;
- (id)networkDiagnostics;
- (id)workContext;
- (id)run;
- (void)stop;
- (id)devices;
- (id)discoverDevicesWithTimeout:(double)timeout;
- (id)resolveDevicesWithAddressType:(unsigned long long)type timeout:(double)timeout;
- (id)startDiagnosticsWithTimeout:(double)timeout;
- (id)diagnosticReport;
- (void)diagnostic:(id)diagnostic didStartWithDevice:(id)device;
- (void)diagnostic:(id)diagnostic didCompleteWithError:(id)error;
- (void)browser:(id)browser didStartBrowsingForServiceType:(id)type;
- (void)browser:(id)browser didStopBrowsingForServiceType:(id)type;
- (void)browser:(id)browser didFindNetworkService:(id)service;
- (void)browser:(id)browser didLoseNetworkService:(id)service;
- (void)browser:(id)browser didUpdateNetworkService:(id)service;
@end

#endif /* HMFNetworkDiagnosticCollector_h */
