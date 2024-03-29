//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TIConvertedCandidate_h
#define TIConvertedCandidate_h
@import Foundation;

@class NSArray, NSString, TIKeyboardCandidate;

@interface TIConvertedCandidate : NSObject

@property (retain, nonatomic) TIKeyboardCandidate *candidate;
@property (copy, nonatomic) NSString *convertedInput;
@property (readonly, nonatomic) NSString *revertedInput;
@property (copy, nonatomic) NSArray *replacedAmbiguousPinyinSyllables;
@property (copy, nonatomic) NSArray *replacementUnambiguousPinyinSyllables;
@property (copy, nonatomic) NSArray *geometryData;
@property (copy, nonatomic) NSArray *touchData;

/* instance methods */
- (id)initWithCandidate:(id)candidate;
- (id)initWithCandidate:(id)candidate replacedAmbiguousPinyinSyllables:(id)syllables replacementUnambiguousPinyinSyllables:(id)syllables convertedInput:(id)input;
@end

#endif /* TIConvertedCandidate_h */
