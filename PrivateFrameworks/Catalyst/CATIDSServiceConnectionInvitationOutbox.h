//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 10.0.0.0.0
//
#ifndef CATIDSServiceConnectionInvitationOutbox_h
#define CATIDSServiceConnectionInvitationOutbox_h
@import Foundation;

#include "CATAssertionProviding-Protocol.h"
#include "CATIDSServiceConnectionInvitationOutboxDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CATIDSServiceConnectionInvitationOutbox : NSObject {
  /* instance variables */
  NSObject<CATAssertionProviding> *mAssertionProvider;
  NSObject<OS_dispatch_queue> *mWorkQueue;
  NSMutableDictionary *mInFlightInvitationRequestsByInvitationID;
  NSMutableArray *mInvitationRequestQueue;
  BOOL mIsActive;
}

@property (weak, nonatomic) NSObject<CATIDSServiceConnectionInvitationOutboxDelegate> *delegate;

/* instance methods */
- (void)dealloc;
- (id)initWithAssertionProvider:(id)provider workQueue:(id)queue;
- (void)beginInvitationWithIdentifier:(id)identifier appleID:(id)id userInfo:(id)info;
- (void)resume;
- (void)suspend;
- (void)receiveAcceptForInvitation:(id)invitation connectionIdentifier:(id)identifier senderAddress:(id)address messagingVersion:(unsigned long long)version;
- (void)receiveRejectForInvitation:(id)invitation connectionIdentifier:(id)identifier senderAddress:(id)address error:(id)error;
- (void)cancelInvitationWithIdentifier:(id)identifier;
- (void)cancelAllInvitations;
- (void)serviceInvitationQueue;
- (void)cancelAllPowerAssertions;
@end

#endif /* CATIDSServiceConnectionInvitationOutbox_h */
