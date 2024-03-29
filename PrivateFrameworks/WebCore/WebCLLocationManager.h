//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WebCLLocationManager_h
#define WebCLLocationManager_h
@import Foundation;

#include "CLLocationManagerDelegate-Protocol.h"

@class NSString;
@protocol {RetainPtr<CLLocationManager>="m_ptr"^v}, {String="m_impl"{RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>>="m_ptr"^{StringImpl}}};

@interface WebCLLocationManager : NSObject<CLLocationManagerDelegate> {
  /* instance variables */
  struct RetainPtr<CLLocationManager> { void *m_ptr; } _locationManager;
  struct Client { undefined * * x0; } * _client;
  struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } _websiteIdentifier;
  BOOL _isWaitingForAuthorization;
  BOOL _mode;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithWebsiteIdentifier:(const void *)identifier client:(struct Client { undefined * * x0; } *)client mode:(BOOL)mode;
- (void)dealloc;
- (void)stop;
- (void)setEnableHighAccuracy:(BOOL)accuracy;
- (void)locationManagerDidChangeAuthorization:(id)authorization;
- (void)locationManager:(id)manager didUpdateLocations:(id)locations;
- (void)locationManager:(id)manager didFailWithError:(id)error;
@end

#endif /* WebCLLocationManager_h */
