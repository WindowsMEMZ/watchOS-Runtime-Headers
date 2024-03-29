//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef SIRINLUEXTERNALUserDialogAct_h
#define SIRINLUEXTERNALUserDialogAct_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "SIRINLUEXTERNALDelegatedUserDialogAct.h"
#include "SIRINLUEXTERNALUserAccepted.h"
#include "SIRINLUEXTERNALUserAcknowledged.h"
#include "SIRINLUEXTERNALUserCancelled.h"
#include "SIRINLUEXTERNALUserRejected.h"
#include "SIRINLUEXTERNALUserStatedTask.h"
#include "SIRINLUEXTERNALUserWantedToPause.h"
#include "SIRINLUEXTERNALUserWantedToProceed.h"
#include "SIRINLUEXTERNALUserWantedToRepeat.h"
#include "SIRINLUEXTERNALUtteranceAlignment.h"

@interface SIRINLUEXTERNALUserDialogAct : PBCodable<NSCopying>

@property (readonly, nonatomic) BOOL hasAccepted;
@property (retain, nonatomic) SIRINLUEXTERNALUserAccepted *accepted;
@property (readonly, nonatomic) BOOL hasRejected;
@property (retain, nonatomic) SIRINLUEXTERNALUserRejected *rejected;
@property (readonly, nonatomic) BOOL hasCancelled;
@property (retain, nonatomic) SIRINLUEXTERNALUserCancelled *cancelled;
@property (readonly, nonatomic) BOOL hasWantedToRepeat;
@property (retain, nonatomic) SIRINLUEXTERNALUserWantedToRepeat *wantedToRepeat;
@property (readonly, nonatomic) BOOL hasAcknowledged;
@property (retain, nonatomic) SIRINLUEXTERNALUserAcknowledged *acknowledged;
@property (readonly, nonatomic) BOOL hasWantedToProceed;
@property (retain, nonatomic) SIRINLUEXTERNALUserWantedToProceed *wantedToProceed;
@property (readonly, nonatomic) BOOL hasWantedToPause;
@property (retain, nonatomic) SIRINLUEXTERNALUserWantedToPause *wantedToPause;
@property (readonly, nonatomic) BOOL hasDelegated;
@property (retain, nonatomic) SIRINLUEXTERNALDelegatedUserDialogAct *delegated;
@property (readonly, nonatomic) BOOL hasUserStatedTask;
@property (retain, nonatomic) SIRINLUEXTERNALUserStatedTask *userStatedTask;
@property (readonly, nonatomic) BOOL hasAlignment;
@property (retain, nonatomic) SIRINLUEXTERNALUtteranceAlignment *alignment;

/* instance methods */
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* SIRINLUEXTERNALUserDialogAct_h */
