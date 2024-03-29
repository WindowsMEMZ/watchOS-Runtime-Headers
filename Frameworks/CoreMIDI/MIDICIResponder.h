//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 301.2.1.0.0
//
#ifndef MIDICIResponder_h
#define MIDICIResponder_h
@import Foundation;

#include "MIDICIDeviceInfo.h"

@class NSArray, NSMutableArray;
@protocol MIDICIProfileResponderDelegate, MIDICIPropertyResponderDelegate, {shared_ptr<LocalCIResponder>="__ptr_"^{LocalCIResponder}"__cntrl_"^{__shared_weak_count}};

@interface MIDICIResponder : NSObject {
  /* instance variables */
  struct shared_ptr<LocalCIResponder> { struct LocalCIResponder *__ptr_; struct __shared_weak_count *__cntrl_; } _impl;
  unsigned int _serverResponderRef;
  NSMutableArray *_subscribers;
  NSMutableArray *_profileStates;
  unsigned int _midiDestination;
  BOOL _propertiesSupported;
  BOOL _isStarted;
}

@property (retain, nonatomic) NSObject<MIDICIPropertyResponderDelegate> *propertyDelegate;
@property (readonly, nonatomic) NSArray *initiators;
@property (readonly, retain, nonatomic) NSObject<MIDICIProfileResponderDelegate> *profileDelegate;
@property (readonly, nonatomic) MIDICIDeviceInfo *deviceInfo;

/* class methods */
+ (id)description;

/* instance methods */
- (id)init;
- (id)initWithDeviceInfo:(id)info profileDelegate:(id)delegate profileStates:(id)states supportProperties:(BOOL)properties;
- (id)description;
- (BOOL)containsValidChannels:(id)channels;
- (void)registerProfiles:(id)profiles;
- (id)getInitiators;
- (BOOL)sendProfile:(id)profile onChannel:(unsigned char)channel profileData:(id)data;
- (BOOL)notifyProfile:(id)profile onChannel:(unsigned char)channel isEnabled:(BOOL)enabled;
- (BOOL)notifyProperty:(id)property onChannel:(unsigned char)channel forSubscribers:(id)subscribers;
- (BOOL)start;
- (void)stop;
@end

#endif /* MIDICIResponder_h */
