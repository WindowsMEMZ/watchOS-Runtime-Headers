//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 388.0.0.0.0
//
#ifndef _PASArgSubcommand_h
#define _PASArgSubcommand_h
@import Foundation;

@class NSMutableArray, NSMutableSet, NSString;

@interface _PASArgSubcommand : NSObject

@property (retain, nonatomic) NSMutableArray *registeredOptions;
@property (retain, nonatomic) NSMutableSet *requiredOptions;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *helpDescription;
@property (readonly, nonatomic) id /* block */ handler;

/* class methods */
+ (id)subcommandWithName:(id)name help:(id)help handler:(id /* block */)handler;
+ (id)simpleSubcommandWithHelpGenerator:(id /* block */)generator name:(id)name help:(id)help handler:(id /* block */)handler;

/* instance methods */
- (id)initWithName:(id)name help:(id)help handler:(id /* block */)handler;
- (id)description;
- (void)registerOption:(id)option;
- (id)optionShortHelp;
- (id)optionLongHelp;
- (id)naiveUsageHelpWithPositionalArgString:(id)string;
- (id)customUsageHelpWithUsageOverride:(id)override positionalArgString:(id)string optionHelpOverride:(id)override additionalHelpText:(id)text;
@end

#endif /* _PASArgSubcommand_h */
