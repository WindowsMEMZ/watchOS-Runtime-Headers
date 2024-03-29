//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1838.60.8.0.0
//
#ifndef NEVPNConnection_h
#define NEVPNConnection_h
@import Foundation;

#include "NEConfigurationManager.h"
#include "NEVPNManager.h"

@class NSDate, NSError, NSString;
@protocol OS_dispatch_queue;

@interface NEVPNConnection : NSObject {
  /* instance variables */
  BOOL _initialized;
  int _sessionType;
  NEConfigurationManager *_configManager;
  NSString *_configurationName;
  NSObject<OS_dispatch_queue> *_queue;
  void * _session;
  NEVPNManager *_weakmanager;
}

@property (nonatomic) BOOL installed;
@property (nonatomic) BOOL installNotify;
@property (readonly) NSError *lastDisconnectError;
@property (readonly) long long status;
@property (readonly) NSDate *connectedDate;
@property (readonly) NEVPNManager *manager;

/* class methods */
+ (id)createDisconnectErrorWithDomain:(id)domain code:(unsigned int)code;
+ (id)createConnectionForEnabledEnterpriseConfiguration;
+ (id)createConnectionForEnabledEnterpriseConfigurationWithName:(id)name;

/* instance methods */
- (void)dealloc;
- (BOOL)startVPNTunnelAndReturnError:(id *)error;
- (BOOL)startVPNTunnelWithOptions:(id)options andReturnError:(id *)error;
- (void)stopVPNTunnel;
- (void)fetchLastDisconnectErrorWithCompletionHandler:(id /* block */)handler;
- (void)fetchExtendedStatusWithCompletionHandler:(id /* block */)handler;
- (void)fetchStatisticsWithCompletionHandler:(id /* block */)handler;
@end

#endif /* NEVPNConnection_h */
