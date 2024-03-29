//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MSAutosave_h
#define MSAutosave_h
@import Foundation;

#include "MSXPCService.h"

@class NSHashTable;

@interface MSAutosave : MSXPCService

@property (retain, nonatomic) NSHashTable *activeAutosaveSessions;

/* class methods */
+ (id)log;
+ (id)autosave;

/* instance methods */
- (id)init;
- (id)initWithRemoteObjectInterface:(id)interface;
- (BOOL)hasAutosavedMessageWithIdentifier:(id)identifier;
- (void)removeAutosavedMessageWithIdentifier:(id)identifier;
- (id)autosavedMessageDataWithIdentifier:(id)identifier;
- (void)autosaveMessageData:(id)data replacingIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)getIdleAutosaves:(id /* block */)autosaves;
- (void)autosaveSessionForIdentifier:(id)identifier completion:(id /* block */)completion;
- (id)newConnectionForInterface:(id)interface;
- (void)_handleInterruptedConnection;
- (void)_getRemoteAutosaveSessionForIdentifier:(id)identifier completion:(id /* block */)completion;
@end

#endif /* MSAutosave_h */
