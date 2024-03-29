//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef _TtC7Message18PersistenceAdaptor_h
#define _TtC7Message18PersistenceAdaptor_h
@import Foundation;

#include "_TtCs12_SwiftObject.h"

@interface Message.PersistenceAdaptor : Swift._SwiftObject { // (Swift)
  /* instance variables */
   _nextActionID;
   _sendReply;
   messagesBeingDownloaded;
   didTearDown;
   statusIsolationQueue;
   account;
   workloop;
   workQueueKey;
   workQueue;
   opaqueIDCoder;
   nameMapping;
   userVisibleMailboxes;
   mimeCache;
   logger;
   _mailboxPathSeparator;
   _allLocalMessageActions;
   _allLocalMailboxActions;
   lastKnownLocalAction;
   downloads;
   searches;
   clientStateObserver;
   cancelationToken;
   limitBackgroundSyncTimer;
   lastKnownEnvironment;
   runningSyncs;
   currentBackFillSync;
   mailboxPersistenceHelperCache;
   stateCapture;
}

@end

#endif /* _TtC7Message18PersistenceAdaptor_h */
