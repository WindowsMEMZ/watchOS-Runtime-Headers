//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef MCKeyboardInput_h
#define MCKeyboardInput_h
@import Foundation;

#include "MCKeyboardInput.h"
#include "MCKeyboardState.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSMutableArray;

@interface MCKeyboardInput : NSObject<NSCopying>

@property (readonly, nonatomic) NSMutableArray *mutableInputs;
@property (nonatomic) unsigned long long composingInputIndex;
@property (readonly, nonatomic) NSArray *inputs;
@property (retain, nonatomic) MCKeyboardInput *composingInput;
@property (readonly, nonatomic) MCKeyboardState *sourceKeyboardState;

/* instance methods */
- (id)asInlineText;
- (id)asCommittedText;
- (unsigned long long)asInlineTextCursorIndex;
- (BOOL)hasRemainingComposingInput;
- (id)asSearchString;
- (id)asMecabraGestures:(BOOL *)gestures;
- (void)_addNearbyKeys:(id)keys to:(void *)to likelihoodThreshold:(float)threshold;
- (id)_asInputStringWithCursorIndex:(unsigned long long *)index remainingComposingInputIndex:(unsigned long long *)index typeInputs:(id)inputs forSearch:(BOOL)search suffix:(id)suffix;
- (BOOL)hasDrawInput;
- (id)init;
- (id)initWithSourceKeyboardState:(id)state;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (id)shortDescription;
- (id)shortDescriptionWithLeadingString:(id)string;
- (BOOL)canComposeNew:(id)new;
- (void)composeNew:(id)new;
- (void)removeAllInputs;
- (void)removeComposingInput;
- (void)removeInputAtIndex:(unsigned long long)index;
- (void)replaceInputAtIndex:(unsigned long long)index with:(id)with;
- (void)replaceComposingInputWith:(id)with;
- (void)insertInput:(id)input atIndex:(unsigned long long)index;
- (BOOL)hasKindOf:(Class)of;
@end

#endif /* MCKeyboardInput_h */
