//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SATTSStartSpeechSynthesisRequest_h
#define SATTSStartSpeechSynthesisRequest_h
@import Foundation;

#include "SABaseCommand.h"
#include "SAServerBoundCommand-Protocol.h"

@class NSDictionary, NSString;

@interface SATTSStartSpeechSynthesisRequest : SABaseCommand<SAServerBoundCommand>

@property (copy, nonatomic) NSString *audioType;
@property (nonatomic) BOOL enableAudioInfo;
@property (copy, nonatomic) NSString *gender;
@property (copy, nonatomic) NSString *languageCode;
@property (copy, nonatomic) NSString *quality;
@property (copy, nonatomic) NSDictionary *speakableContextInfo;
@property (nonatomic) BOOL streaming;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *voiceName;
@property (copy, @dynamic, nonatomic) NSString *aceId;
@property (copy, @dynamic, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)startSpeechSynthesisRequest;
+ (id)startSpeechSynthesisRequestWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
@end

#endif /* SATTSStartSpeechSynthesisRequest_h */
