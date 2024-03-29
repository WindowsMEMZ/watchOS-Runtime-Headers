//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1490.0.4.0.0
//
#ifndef NSMemoryHTTPCookie2Storage_h
#define NSMemoryHTTPCookie2Storage_h
@import Foundation;

#include "NSInternalHTTPCookie2Storage-Protocol.h"

@class NSMutableDictionary, NSString;

@interface NSMemoryHTTPCookie2Storage : NSObject<NSInternalHTTPCookie2Storage> {
  /* instance variables */
  NSMutableDictionary *memoryCookies;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)setCookie:(id)cookie;
- (void)setCookies:(id)cookies;
- (void)deleteAllCookies;
- (void)deleteCookie:(id)cookie;
- (void)deleteCookies:(id)cookies;
- (void)deleteCookiesWithFilter:(id)filter;
- (id)getAllCookies;
- (id)getCookiesWithFilter:(id)filter;
@end

#endif /* NSMemoryHTTPCookie2Storage_h */
