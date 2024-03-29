//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SAAceView_h
#define SAAceView_h
@import Foundation;

#include "SABaseAceObject.h"
#include "SAAceSerializable-Protocol.h"
#include "SADialog.h"
#include "SAUIListenAfterSpeakingBehavior.h"
#include "SAVoice.h"

@class NSDictionary, NSNumber, NSString;

@interface SAAceView : SABaseAceObject<SAAceSerializable>

@property (nonatomic) BOOL canBeRefreshed;
@property (nonatomic) BOOL canUseServerTTS;
@property (retain, nonatomic) NSObject<SAAceSerializable> *context;
@property (copy, nonatomic) NSNumber *deferredRendering;
@property (copy, nonatomic) NSNumber *delayDismissalMs;
@property (retain, nonatomic) SADialog *dialog;
@property (nonatomic) BOOL disableDeviceRacing;
@property (nonatomic) BOOL isTransient;
@property (copy, nonatomic) NSString *itemType;
@property (copy, nonatomic) NSString *correspondingSessionID;
@property (copy, nonatomic) NSNumber *listenAfterSpeaking;
@property (retain, nonatomic) SAUIListenAfterSpeakingBehavior *listenAfterSpeakingBehavior;
@property (retain, nonatomic) SAVoice *preferredSpeakableTextVoice;
@property (nonatomic) BOOL preserveResultSpaceIfPossible;
@property (copy, nonatomic) NSDictionary *speakableContextInfo;
@property (copy, nonatomic) NSString *speakableText;
@property (copy, nonatomic) NSString *viewId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)aceView;
+ (id)aceViewWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
@end

#endif /* SAAceView_h */
