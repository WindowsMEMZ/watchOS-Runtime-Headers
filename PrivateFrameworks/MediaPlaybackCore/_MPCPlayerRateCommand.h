//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef _MPCPlayerRateCommand_h
#define _MPCPlayerRateCommand_h
@import Foundation;

#include "_MPCPlayerItemCommand.h"
#include "MPCPlayerRateCommand-Protocol.h"

@class NSString;

@interface _MPCPlayerRateCommand : _MPCPlayerItemCommand<MPCPlayerRateCommand>

@property (nonatomic) float minimumValue;
@property (nonatomic) float maximumValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)changeValue:(float)value;
@end

#endif /* _MPCPlayerRateCommand_h */
