//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WKProcessGroup_h
#define WKProcessGroup_h
@import Foundation;

#include "WKGeolocationProviderIOS.h"

@protocol WKProcessGroupDelegate, {RefPtr<WebKit::WebProcessPool, WTF::RawPtrTraits<WebKit::WebProcessPool>, WTF::DefaultRefDerefTraits<WebKit::WebProcessPool>>="m_ptr"^{WebProcessPool}}, {RetainPtr<WKGeolocationProviderIOS>="m_ptr"^v}, {WeakObjCPtr<id<WKProcessGroupDelegate>>="m_weakReference"@};

@interface WKProcessGroup : NSObject {
  /* instance variables */
  struct RefPtr<WebKit::WebProcessPool, WTF::RawPtrTraits<WebKit::WebProcessPool>, WTF::DefaultRefDerefTraits<WebKit::WebProcessPool>> { struct WebProcessPool *m_ptr; } _processPool;
  struct RetainPtr<WKGeolocationProviderIOS> { void *m_ptr; } _geolocationProvider;
}

@property (readonly) struct OpaqueWKContext * _contextRef;
@property (readonly) WKGeolocationProviderIOS *_geolocationProvider;
@property (weak, nonatomic) NSObject<WKProcessGroupDelegate> *delegate;

/* instance methods */
- (id)init;
- (id)initWithInjectedBundleURL:(id)url;
- (id)initWithInjectedBundleURL:(id)url andCustomClassesForParameterCoder:(id)coder;
@end

#endif /* WKProcessGroup_h */
