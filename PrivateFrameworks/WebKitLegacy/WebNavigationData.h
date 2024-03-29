//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WebNavigationData_h
#define WebNavigationData_h
@import Foundation;

#include "WebNavigationDataPrivate.h"

@interface WebNavigationData : NSObject {
  /* instance variables */
  WebNavigationDataPrivate *_private;
}

/* instance methods */
- (id)initWithURLString:(id)urlstring title:(id)title originalRequest:(id)request response:(id)response hasSubstituteData:(BOOL)data clientRedirectSource:(id)source;
- (id)url;
- (id)title;
- (id)originalRequest;
- (id)response;
- (BOOL)hasSubstituteData;
- (id)clientRedirectSource;
- (void)dealloc;
@end

#endif /* WebNavigationData_h */
