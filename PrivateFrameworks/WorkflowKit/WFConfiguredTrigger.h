//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFConfiguredTrigger_h
#define WFConfiguredTrigger_h
@import Foundation;

#include "WFDatabaseObjectDescriptor.h"
#include "WFTrigger.h"

@class NSData, NSString;

@interface WFConfiguredTrigger : WFDatabaseObjectDescriptor

@property (readonly, nonatomic) NSString *workflowID;
@property (readonly, nonatomic) NSData *selectedEntryMetadata;
@property (readonly, nonatomic) WFTrigger *trigger;
@property (readonly, nonatomic) BOOL shouldPrompt;
@property (readonly, nonatomic) BOOL shouldNotify;
@property (readonly, nonatomic) BOOL editableShortcut;
@property (readonly, nonatomic) BOOL enabled;
@property (readonly, nonatomic) int source;
@property (readonly, nonatomic) int notificationLevel;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithIdentifier:(id)identifier workflowID:(id)id trigger:(id)trigger shouldPrompt:(BOOL)prompt shouldNotify:(BOOL)notify enabled:(BOOL)enabled editableShortcut:(BOOL)shortcut selectedEntryMetadata:(id)metadata;
- (id)initWithIdentifier:(id)identifier workflowID:(id)id trigger:(id)trigger shouldPrompt:(BOOL)prompt shouldNotify:(BOOL)notify enabled:(BOOL)enabled triggerSource:(int)source notificationLevel:(int)level editableShortcut:(BOOL)shortcut selectedEntryMetadata:(id)metadata;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (BOOL)isEnabled;
@end

#endif /* WFConfiguredTrigger_h */
