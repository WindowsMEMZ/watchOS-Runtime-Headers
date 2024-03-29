//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef _AFSpeechParametersMutation_h
#define _AFSpeechParametersMutation_h
@import Foundation;

#include "AFSpeechParameters.h"
#include "AFSpeechParametersMutating-Protocol.h"

@class CLLocation, NSArray, NSData, NSDictionary, NSString, NSURL;

@interface _AFSpeechParametersMutation : NSObject<AFSpeechParametersMutating> {
  /* instance variables */
  AFSpeechParameters *_base;
  NSString *_language;
  NSString *_interactionIdentifier;
  NSString *_task;
  NSArray *_loggingContext;
  NSString *_applicationName;
  NSData *_profile;
  NSDictionary *_overrides;
  NSURL *_modelOverrideURL;
  NSURL *_originalAudioFileURL;
  BOOL _narrowband;
  BOOL _detectUtterances;
  BOOL _censorSpeech;
  BOOL _farField;
  BOOL _secureOfflineOnly;
  BOOL _shouldStoreAudioOnDevice;
  double _maximumRecognitionDuration;
  NSString *_inputOrigin;
  CLLocation *_location;
  NSArray *_jitGrammar;
  struct _mutationFlags { unsigned int x :1 isDirty; unsigned int x :1 hasLanguage; unsigned int x :1 hasInteractionIdentifier; unsigned int x :1 hasTask; unsigned int x :1 hasLoggingContext; unsigned int x :1 hasApplicationName; unsigned int x :1 hasProfile; unsigned int x :1 hasOverrides; unsigned int x :1 hasModelOverrideURL; unsigned int x :1 hasOriginalAudioFileURL; unsigned int x :1 hasNarrowband; unsigned int x :1 hasDetectUtterances; unsigned int x :1 hasCensorSpeech; unsigned int x :1 hasFarField; unsigned int x :1 hasSecureOfflineOnly; unsigned int x :1 hasShouldStoreAudioOnDevice; unsigned int x :1 hasMaximumRecognitionDuration; unsigned int x :1 hasInputOrigin; unsigned int x :1 hasLocation; unsigned int x :1 hasJitGrammar; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithBase:(id)base;
- (BOOL)isDirty;
- (id)getLanguage;
- (void)setLanguage:(id)language;
- (id)getInteractionIdentifier;
- (void)setInteractionIdentifier:(id)identifier;
- (id)getTask;
- (void)setTask:(id)task;
- (id)getLoggingContext;
- (void)setLoggingContext:(id)context;
- (id)getApplicationName;
- (void)setApplicationName:(id)name;
- (id)getProfile;
- (void)setProfile:(id)profile;
- (id)getOverrides;
- (void)setOverrides:(id)overrides;
- (id)getModelOverrideURL;
- (void)setModelOverrideURL:(id)url;
- (id)getOriginalAudioFileURL;
- (void)setOriginalAudioFileURL:(id)url;
- (BOOL)getNarrowband;
- (void)setNarrowband:(BOOL)narrowband;
- (BOOL)getDetectUtterances;
- (void)setDetectUtterances:(BOOL)utterances;
- (BOOL)getCensorSpeech;
- (void)setCensorSpeech:(BOOL)speech;
- (BOOL)getFarField;
- (void)setFarField:(BOOL)field;
- (BOOL)getSecureOfflineOnly;
- (void)setSecureOfflineOnly:(BOOL)only;
- (BOOL)getShouldStoreAudioOnDevice;
- (void)setShouldStoreAudioOnDevice:(BOOL)device;
- (double)getMaximumRecognitionDuration;
- (void)setMaximumRecognitionDuration:(double)duration;
- (id)getInputOrigin;
- (void)setInputOrigin:(id)origin;
- (id)getLocation;
- (void)setLocation:(id)location;
- (id)getJitGrammar;
- (void)setJitGrammar:(id)grammar;
@end

#endif /* _AFSpeechParametersMutation_h */
