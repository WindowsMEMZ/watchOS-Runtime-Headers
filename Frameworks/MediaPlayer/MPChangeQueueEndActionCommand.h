//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPChangeQueueEndActionCommand_h
#define MPChangeQueueEndActionCommand_h
@import Foundation;

#include "MPRemoteCommand.h"

@class NSArray;

@interface MPChangeQueueEndActionCommand : MPRemoteCommand

@property (nonatomic) long long currentQueueEndAction;
@property (copy, nonatomic) NSArray *supportedQueueEndActions;

/* instance methods */
- (id)_mediaRemoteCommandInfoOptions;
@end

#endif /* MPChangeQueueEndActionCommand_h */
