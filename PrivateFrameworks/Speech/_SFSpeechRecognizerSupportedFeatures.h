//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.15.1.0.0
//
#ifndef _SFSpeechRecognizerSupportedFeatures_h
#define _SFSpeechRecognizerSupportedFeatures_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "_SFSpeechRecognizerDetectorOptions.h"
#include "_SFSpeechRecognizerModelOptions.h"

@class EARVoiceCommandActiveSet, NSLocale, NSSet, NSString;

@interface _SFSpeechRecognizerSupportedFeatures : NSObject<NSSecureCoding>

@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSString *languageIdentifier;
@property (readonly, copy, nonatomic) NSSet *taskHints;
@property (readonly, copy, nonatomic) NSSet *taskNames;
@property (readonly, copy, nonatomic) EARVoiceCommandActiveSet *voiceCommandActiveSet;
@property (readonly, copy, nonatomic) _SFSpeechRecognizerModelOptions *modelOptions;
@property (readonly, nonatomic) unsigned long long flags;
@property (readonly, copy, nonatomic) _SFSpeechRecognizerDetectorOptions *detectionOptions;
@property (readonly, nonatomic) BOOL isSingleUtteranceTask;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithLocale:(id)locale taskHints:(id)hints voiceCommandActiveSet:(id)set modelOptions:(id)options detectionOptions:(id)options flags:(unsigned long long)flags;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (BOOL)taskHintsContainsHint:(long long)hint;
- (id)featuresWithCommandRecogitionForActiveSet:(id)set;
- (id)featuresWithDetectionOptions:(id)options;
- (id)featuresByAddingFlags:(unsigned long long)flags;
- (id)featuresByAddingTaskHints:(id)hints;
- (id)description;
@end

#endif /* _SFSpeechRecognizerSupportedFeatures_h */
