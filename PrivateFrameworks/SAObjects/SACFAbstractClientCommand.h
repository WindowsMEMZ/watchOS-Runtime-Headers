//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SACFAbstractClientCommand_h
#define SACFAbstractClientCommand_h
@import Foundation;

#include "SADomainCommand.h"

@class NSArray, NSString;

@interface SACFAbstractClientCommand : SADomainCommand

@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *jsFileNameSuffix;
@property (copy, nonatomic) NSArray *jsLibraries;
@property (copy, nonatomic) NSString *jsParameters;
@property (copy, nonatomic) NSString *jsScript;
@property (nonatomic) BOOL shouldCacheBytecode;
@property (nonatomic) BOOL shouldCacheScript;
@property (nonatomic) BOOL shouldRestartContext;

/* class methods */
+ (id)abstractClientCommand;
+ (id)abstractClientCommandWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
@end

#endif /* SACFAbstractClientCommand_h */
