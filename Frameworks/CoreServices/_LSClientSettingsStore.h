//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1299.2.3.1.0
//
#ifndef _LSClientSettingsStore_h
#define _LSClientSettingsStore_h
@import Foundation;

#include "LSSettingsStore.h"
#include "LSSettingsStoreConfiguration.h"

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface _LSClientSettingsStore : LSSettingsStore {
  /* instance variables */
  NSXPCConnection *_xpcConnection;
}

@property (retain, nonatomic) LSSettingsStoreConfiguration *configuration;
@property (retain) NSObject<OS_dispatch_queue> *internalQueue;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)__internalQueue_xpcConnectionWithError:(id *)error;
- (unsigned char)userElectionForExtensionKey:(id)key;
- (BOOL)setUserElection:(unsigned char)election forExtensionKey:(id)key error:(id *)error;
- (BOOL)resetUserElectionsWithError:(id *)error;
@end

#endif /* _LSClientSettingsStore_h */
