//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EDThreadQueryHandler_Protocol_h
#define EDThreadQueryHandler_Protocol_h
@import Foundation;

#include "EDMessagePersistence.h"
#include "EDPersistenceHookRegistry.h"
#include "EDRemindMeNotificationController.h"
#include "EDResumable-Protocol.h"
#include "EDThreadChangeHookResponder-Protocol.h"
#include "EDThreadMigratorDelegate-Protocol.h"
#include "EDThreadPersistence.h"
#include "EDThreadQueryHandler-Protocol.h"
#include "EDThreadQueryHandlerDelegate-Protocol.h"
#include "EDVIPManager.h"
#include "EFLoggable-Protocol.h"
#include "EMMessageListItemQueryResultsObserver-Protocol.h"

@class BOOL *, EFLocked, EMObjectID, EMQuery, EMThreadScope, NSString;
@protocol EDRemoteSearchProvider;

@protocol EDThreadQueryHandler <EDMessageRepositoryQueryHandler>

@property (readonly, nonatomic) EMThreadScope *threadScope;

/* instance methods */
- (id)messageListItemForObjectID:(id)id isPersisted:(BOOL *)persisted error:(id *)error;
- (id)inMemoryMessageObjectIDsForThread:(id)thread;
@end

#endif /* EDThreadQueryHandler_Protocol_h */
