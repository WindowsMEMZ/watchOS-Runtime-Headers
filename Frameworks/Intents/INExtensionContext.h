//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef INExtensionContext_h
#define INExtensionContext_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSArray, NSString, NSUUID;

@interface INExtensionContext : NSObject<NSSecureCoding> {
  /* instance variables */
  unsigned int _audioSessionID;
  NSString *_recordRoute;
  NSUUID *_recordDeviceUID;
  NSString *_recordDeviceIdentifier;
  NSArray *_airPlayRouteIdentifiers;
}

@property (copy, nonatomic) NSString *_recordRoute;
@property (copy, nonatomic) NSUUID *_recordDeviceUID;
@property (copy, nonatomic) NSString *_recordDeviceIdentifier;
@property (copy, nonatomic) NSArray *_airPlayRouteIdentifiers;
@property (nonatomic) unsigned int _audioSessionID;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (void)_setRecordRoute:(id)route;
- (void)_setRecordDeviceUID:(id)uid;
- (void)_setRecordDeviceIdentifier:(id)identifier;
- (void)_setAirPlayRouteIdentifiers:(id)identifiers;
- (void)_setAudioSessionID:(unsigned int)id;
@end

#endif /* INExtensionContext_h */
