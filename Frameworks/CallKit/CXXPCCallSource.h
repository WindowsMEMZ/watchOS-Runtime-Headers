//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1228.300.81.0.0
//
#ifndef CXXPCCallSource_h
#define CXXPCCallSource_h
@import Foundation;

#include "CXCallSource.h"

@class NSSet, NSString, NSURL, NSXPCConnection;

@interface CXXPCCallSource : CXCallSource {
  /* instance variables */
  NSString *_bundleIdentifier;
  NSURL *_bundleURL;
  NSString *_localizedName;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int x0; } accessorLock;
@property (readonly, copy, nonatomic) NSSet *capabilities;
@property (readonly, nonatomic) BOOL hasVoIPBackgroundMode;

/* instance methods */
- (id)init;
- (id)initWithConnection:(id)connection;
- (void)dealloc;
- (BOOL)isConnected;
- (int)processIdentifier;
- (struct { unsigned int x0[8] })auditToken;
- (BOOL)isPermittedToUsePublicAPI;
- (BOOL)isPermittedToUsePrivateAPI;
- (BOOL)isPermittedToUseBluetoothAccessories;
- (id)vendorProtocolDelegate;
- (id)bundleIdentifier;
- (id)bundleURL;
- (id)localizedName;
@end

#endif /* CXXPCCallSource_h */
