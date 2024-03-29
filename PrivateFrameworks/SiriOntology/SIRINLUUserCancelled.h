//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef SIRINLUUserCancelled_h
#define SIRINLUUserCancelled_h
@import Foundation;

#include "SIRINLUUserDialogAct-Protocol.h"
#include "USOSerializedGraph.h"

@class NSUUID;

@interface SIRINLUUserCancelled : NSObject<SIRINLUUserDialogAct>

@property (retain, nonatomic) NSUUID *taskId;
@property (retain, nonatomic) USOSerializedGraph *reference;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithReference:(id)reference;
- (id)initWithTaskId:(id)id reference:(id)reference;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
@end

#endif /* SIRINLUUserCancelled_h */
