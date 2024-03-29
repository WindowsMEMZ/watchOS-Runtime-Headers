//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef NLXSchemaCDMUserDialogAct_h
#define NLXSchemaCDMUserDialogAct_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "NLXSchemaCDMDelegatedUserDialogAct.h"
#include "NLXSchemaCDMUserAccepted.h"
#include "NLXSchemaCDMUserAcknowledged.h"
#include "NLXSchemaCDMUserCancelled.h"
#include "NLXSchemaCDMUserRejected.h"
#include "NLXSchemaCDMUserStatedTask.h"
#include "NLXSchemaCDMUserWantedToPause.h"
#include "NLXSchemaCDMUserWantedToProceed.h"
#include "NLXSchemaCDMUserWantedToRepeat.h"
#include "USOSchemaUSOGraph.h"
#include "USOSchemaUSOUtteranceAlignment.h"

@class NSData;

@interface NLXSchemaCDMUserDialogAct : SISchemaInstrumentationMessage

@property (retain, nonatomic) USOSchemaUSOUtteranceAlignment *alignment;
@property (nonatomic) BOOL hasAlignment;
@property (retain, nonatomic) USOSchemaUSOGraph *reference;
@property (nonatomic) BOOL hasReference;
@property (retain, nonatomic) NLXSchemaCDMUserAccepted *accepted;
@property (nonatomic) BOOL hasAccepted;
@property (retain, nonatomic) NLXSchemaCDMUserRejected *rejected;
@property (nonatomic) BOOL hasRejected;
@property (retain, nonatomic) NLXSchemaCDMUserCancelled *cancelled;
@property (nonatomic) BOOL hasCancelled;
@property (retain, nonatomic) NLXSchemaCDMUserWantedToRepeat *wantedToRepeat;
@property (nonatomic) BOOL hasWantedToRepeat;
@property (retain, nonatomic) NLXSchemaCDMUserAcknowledged *acknowledged;
@property (nonatomic) BOOL hasAcknowledged;
@property (retain, nonatomic) NLXSchemaCDMUserWantedToProceed *wantedToProceed;
@property (nonatomic) BOOL hasWantedToProceed;
@property (retain, nonatomic) NLXSchemaCDMUserWantedToPause *wantedToPause;
@property (nonatomic) BOOL hasWantedToPause;
@property (retain, nonatomic) NLXSchemaCDMDelegatedUserDialogAct *delegated;
@property (nonatomic) BOOL hasDelegated;
@property (retain, nonatomic) NLXSchemaCDMUserStatedTask *userStatedTask;
@property (nonatomic) BOOL hasUserStatedTask;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichUserdialogacttype;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteAlignment;
- (void)deleteReference;
- (void)deleteAccepted;
- (void)deleteRejected;
- (void)deleteCancelled;
- (void)deleteWantedToRepeat;
- (void)deleteAcknowledged;
- (void)deleteWantedToProceed;
- (void)deleteWantedToPause;
- (void)deleteDelegated;
- (void)deleteUserStatedTask;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* NLXSchemaCDMUserDialogAct_h */
