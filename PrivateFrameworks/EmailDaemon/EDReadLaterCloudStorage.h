//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EDReadLaterCloudStorage_h
#define EDReadLaterCloudStorage_h
@import Foundation;

#include "EDMessageChangeHookResponder-Protocol.h"
#include "EDMessagePersistence.h"
#include "EDPersistenceHookRegistry.h"
#include "EDReadLaterCloudStorageDateProvider-Protocol.h"
#include "EMUbiquitouslyPersistedDictionaryDelegate-Protocol.h"

@class NSString;
@protocol EMMutableDictionaryProtocol;

@interface EDReadLaterCloudStorage : NSObject<EMUbiquitouslyPersistedDictionaryDelegate, EDMessageChangeHookResponder, EDReadLaterCloudStorageDateProvider> {
  /* instance variables */
  NSObject<EMMutableDictionaryProtocol> *_persistentDictionary;
}

@property (readonly, nonatomic) EDMessagePersistence *messagePersistence;
@property (readonly, nonatomic) EDPersistenceHookRegistry *hookRegistry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMutableDictionary:(id)dictionary hookRegistry:(id)registry;
- (id)initWithHookRegistry:(id)registry;
- (void)addEntryForMessage:(id)message date:(id)date;
- (void)updateDisplayDateForMessage:(id)message displayDate:(id)date;
- (void)removeEntryForMessage:(id)message;
- (id)cloudStorageReadLaterDateForMessage:(id)message displayDate:(id *)date;
- (id)_keyForMessage:(id)message;
- (void)persistenceDidChangeReadLaterDate:(id)date messages:(id)messages changeIsRemote:(BOOL)remote generationWindow:(id)window;
- (void)persistenceDidUpdateDisplayDateForMessages:(id)messages changeIsRemote:(BOOL)remote generation:(long long)generation;
- (id)_dateFromDictionary:(id)dictionary forKey:(id)key;
- (void)persistedDictionaryDidChangeRemotelyWithChangedItems:(id)items deletedItems:(id)items;
- (id)_messageHashForKey:(id)key;
@end

#endif /* EDReadLaterCloudStorage_h */
