//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef RERemoteTrainingServer_h
#define RERemoteTrainingServer_h
@import Foundation;

#include "RERemoteTrainingServerInterface-Protocol.h"

@class NSString, NSXPCConnection;

@interface RERemoteTrainingServer : NSObject<RERemoteTrainingServerInterface> {
  /* instance variables */
  NSXPCConnection *_connection;
  NSString *_processName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTargetProcessName:(id)name;
- (void)_queue_setupConnectionIfNeeded;
- (void)_clearConnection;
- (void)updateRemoteAttribute:(id)attribute forKey:(id)key completion:(id /* block */)completion;
- (void)performTrainingWithElements:(id)elements events:(id)events interactions:(id)interactions completion:(id /* block */)completion;
@end

#endif /* RERemoteTrainingServer_h */
