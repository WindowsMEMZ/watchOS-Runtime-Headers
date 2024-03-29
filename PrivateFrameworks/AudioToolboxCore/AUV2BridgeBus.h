//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1387.3.4.0.0
//
#ifndef AUV2BridgeBus_h
#define AUV2BridgeBus_h
@import Foundation;

#include "AUAudioUnitBus.h"
#include "AUAudioUnitV2Bridge.h"

@interface AUV2BridgeBus : AUAudioUnitBus {
  /* instance variables */
  AUAudioUnitV2Bridge *_owner;
  struct OpaqueAudioComponentInstance * _audioUnit;
  unsigned int _scope;
  unsigned int _element;
}

/* instance methods */
- (id)initWithOwner:(id)owner au:(struct OpaqueAudioComponentInstance *)au scope:(unsigned int)scope element:(unsigned int)element;
- (id)format;
- (BOOL)setFormat:(id)format error:(id *)error;
- (void)setEnabled:(BOOL)enabled;
@end

#endif /* AUV2BridgeBus_h */
