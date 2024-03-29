//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 73.0.7.0.0
//
#ifndef AXKonaVoice_h
#define AXKonaVoice_h
@import Foundation;

#include "AXKonaParameters.h"

@class NSString;

@interface AXKonaVoice : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long konaLanguage;
@property (retain, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) long long eciVoiceNumber;
@property (retain, nonatomic) AXKonaParameters *parameters;

/* instance methods */
@end

#endif /* AXKonaVoice_h */
