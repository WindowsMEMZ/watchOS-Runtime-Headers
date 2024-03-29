//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 135.6.0.0.0
//
#ifndef CLTOption_h
#define CLTOption_h
@import Foundation;

@class NSArray, NSMutableArray, NSNumber, NSString;

@interface CLTOption : NSObject

@property (readonly, nonatomic) NSArray *shorthands;
@property (readonly, nonatomic) NSArray *longforms;
@property (copy, nonatomic) id /* block */ triggerAction;
@property (readonly, nonatomic) NSString *lefthandHelp;
@property (retain, nonatomic) NSString *righthandHelp;
@property (retain, nonatomic) NSString *argumentHelp;
@property (nonatomic) int occurencies;
@property (nonatomic) int maxAllowedOccurencies;
@property (nonatomic) int minConsumedArguments;
@property (nonatomic) int maxConsumedArguments;
@property (nonatomic) BOOL allowsNegativeNumbersAsArguments;
@property (retain, nonatomic) NSMutableArray *consumedArguments;
@property (readonly, nonatomic) NSArray *consumedOrDefaultArguments;
@property (retain, nonatomic) NSArray *defaultArguments;
@property (readonly, nonatomic) NSNumber *numberValue;

/* instance methods */
- (id)init;
- (void)addShorthand:(id)shorthand;
- (void)addLongform:(id)longform;
- (BOOL)consumeArgument:(id)argument;
@end

#endif /* CLTOption_h */
