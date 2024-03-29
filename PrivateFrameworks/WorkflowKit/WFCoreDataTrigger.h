//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFCoreDataTrigger_h
#define WFCoreDataTrigger_h
@import Foundation;

#include "NSManagedObject.h"
#include "WFCoreDataRunEvent.h"
#include "WFCoreDataWorkflow.h"
#include "WFRecordStorage-Protocol.h"

@class NSData, NSSet, NSString;

@interface WFCoreDataTrigger : NSManagedObject<WFRecordStorage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, @dynamic, nonatomic) NSData *data;
@property (@dynamic, nonatomic) BOOL editableShortcut;
@property (@dynamic, nonatomic) BOOL enabled;
@property (copy, @dynamic, nonatomic) NSString *identifier;
@property (@dynamic, nonatomic) int notificationLevel;
@property (retain, @dynamic, nonatomic) NSData *selectedEntryMetadata;
@property (@dynamic, nonatomic) BOOL shouldNotify;
@property (@dynamic, nonatomic) BOOL shouldPrompt;
@property (@dynamic, nonatomic) int source;
@property (retain, @dynamic, nonatomic) NSSet *events;
@property (retain, @dynamic, nonatomic) WFCoreDataRunEvent *runEvents;
@property (retain, @dynamic, nonatomic) WFCoreDataWorkflow *shortcut;

/* class methods */
+ (id)fetchRequest;
+ (id)recordPropertyMap;

/* instance methods */
- (id)descriptor;
- (id)trigger;
@end

#endif /* WFCoreDataTrigger_h */
