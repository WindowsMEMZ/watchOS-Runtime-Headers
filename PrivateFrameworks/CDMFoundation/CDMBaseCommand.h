//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef CDMBaseCommand_h
#define CDMBaseCommand_h
@import Foundation;

#include "CDMCommand-Protocol.h"

@class NSError, NSString;

@interface CDMBaseCommand : NSObject<CDMCommand>

@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSString *commandName;
@property (retain, nonatomic) NSError *cmdError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)commandName;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* CDMBaseCommand_h */
