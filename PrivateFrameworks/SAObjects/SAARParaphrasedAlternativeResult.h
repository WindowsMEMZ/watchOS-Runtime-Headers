//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SAARParaphrasedAlternativeResult_h
#define SAARParaphrasedAlternativeResult_h
@import Foundation;

#include "SAAceView.h"
#include "SAClientBoundCommand-Protocol.h"

@class NSString;

@interface SAARParaphrasedAlternativeResult : SAAceView

@property (retain, nonatomic) NSObject<SAClientBoundCommand> *command;
@property (copy, nonatomic) NSString *displayText;
@property (copy, nonatomic) NSString *paraphrasedIntent;

/* class methods */
+ (id)paraphrasedAlternativeResult;
+ (id)paraphrasedAlternativeResultWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
@end

#endif /* SAARParaphrasedAlternativeResult_h */
