//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2298.42.9.28.5
//
#ifndef MNSignInstructionContents_h
#define MNSignInstructionContents_h
@import Foundation;

#include "MNListInstructionContents.h"
#include "MNInstructionContents-Protocol.h"

@class NSArray, NSString;

@interface MNSignInstructionContents : MNListInstructionContents<MNInstructionContents> {
  /* instance variables */
  NSArray *_normalInstructionStrings;
}

@property (retain, nonatomic) NSArray *maneuverFormats;
@property (readonly, nonatomic) long long context;
@property (nonatomic) BOOL suppressNames;
@property (retain, nonatomic) NSString *roadName;
@property (readonly, nonatomic) BOOL hasServerContent;
@property (nonatomic) BOOL suppressFallback;

/* class methods */
+ (id)contentsWithStep:(id)step destination:(id)destination;

/* instance methods */
- (void)_populateFromStep:(id)step;
- (id)description;
- (id)_evaluatedStringsForInstructionStrings:(id)strings;
- (unsigned long long)_distanceFormatOptions;
- (id)_instructionsForFormats:(id)formats;
- (id)instructionWithShorterAlternatives;
@end

#endif /* MNSignInstructionContents_h */
