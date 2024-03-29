//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef RFSchemaRFInteractionPerformed_h
#define RFSchemaRFInteractionPerformed_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"

@class NSData, NSString;

@interface RFSchemaRFInteractionPerformed : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 userInteraction; unsigned int x :1 visualComponent; unsigned int x :1 commandType; } _has;
}

@property (copy, nonatomic) NSString *actionName;
@property (nonatomic) BOOL hasActionName;
@property (nonatomic) int userInteraction;
@property (nonatomic) BOOL hasUserInteraction;
@property (nonatomic) int visualComponent;
@property (nonatomic) BOOL hasVisualComponent;
@property (copy, nonatomic) NSString *componentName;
@property (nonatomic) BOOL hasComponentName;
@property (nonatomic) int commandType;
@property (nonatomic) BOOL hasCommandType;
@property (copy, nonatomic) NSString *componentIndex;
@property (nonatomic) BOOL hasComponentIndex;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (void)deleteActionName;
- (void)deleteUserInteraction;
- (void)deleteVisualComponent;
- (void)deleteComponentName;
- (void)deleteCommandType;
- (void)deleteComponentIndex;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* RFSchemaRFInteractionPerformed_h */
