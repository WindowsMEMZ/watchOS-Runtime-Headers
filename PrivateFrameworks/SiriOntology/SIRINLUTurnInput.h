//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef SIRINLUTurnInput_h
#define SIRINLUTurnInput_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "SIRINLUTurnContext.h"

@class NSArray, NSString;

@interface SIRINLUTurnInput : NSObject<NSSecureCoding>

@property (retain, nonatomic) NSArray *asrOutputs;
@property (retain, nonatomic) NSArray *systemDialogActs;
@property (retain, nonatomic) NSArray *activeTasks;
@property (retain, nonatomic) NSArray *executedTasks;
@property (retain, nonatomic) NSArray *salientEntities;
@property (retain, nonatomic) SIRINLUTurnContext *turnContext;
@property (retain, nonatomic) NSString *locale;
@property (nonatomic) BOOL tapToEdit;
@property (nonatomic) unsigned long long startTimestamp;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithAsrOutputs:(id)outputs salientEntities:(id)entities turnContext:(id)context;
- (id)initWithAsrOutputs:(id)outputs systemDialogActs:(id)acts activeTasks:(id)tasks executedTasks:(id)tasks salientEntities:(id)entities;
- (id)initWithAsrOutputs:(id)outputs salientEntities:(id)entities turnContext:(id)context locale:(id)locale tapToEdit:(BOOL)edit startTimestamp:(unsigned long long)timestamp;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
@end

#endif /* SIRINLUTurnInput_h */
