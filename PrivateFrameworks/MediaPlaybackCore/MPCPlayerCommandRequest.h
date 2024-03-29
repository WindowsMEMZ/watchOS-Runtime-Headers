//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPCPlayerCommandRequest_h
#define MPCPlayerCommandRequest_h
@import Foundation;

#include "MPCMediaRemoteController.h"
#include "MPCPlayerPath.h"

@class NSDictionary, NSString;

@interface MPCPlayerCommandRequest : NSObject

@property (readonly, copy, nonatomic) NSString *originalLabel;
@property (readonly, nonatomic) unsigned int command;
@property (readonly, copy, nonatomic) NSDictionary *options;
@property (copy, nonatomic) NSDictionary *userInitiatedOptions;
@property (readonly, nonatomic) MPCMediaRemoteController *controller;
@property (readonly, nonatomic) MPCPlayerPath *playerPath;
@property (copy, nonatomic) id /* block */ statusTransformer;
@property (copy, nonatomic) NSString *label;

/* instance methods */
- (id)initWithMediaRemoteCommand:(unsigned int)command options:(id)options controller:(id)controller label:(id)label;
- (id)initWithMediaRemoteCommand:(unsigned int)command options:(id)options playerPath:(id)path label:(id)label;
- (void)setCommandOptionValue:(id)value forKey:(id)key;
- (id)description;
@end

#endif /* MPCPlayerCommandRequest_h */
