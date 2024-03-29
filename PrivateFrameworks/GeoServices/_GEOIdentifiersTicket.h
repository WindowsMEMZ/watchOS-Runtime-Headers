//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef _GEOIdentifiersTicket_h
#define _GEOIdentifiersTicket_h
@import Foundation;

#include "GEOAbstractMapServiceTicket.h"

@class NSArray, NSString;

@interface _GEOIdentifiersTicket : GEOAbstractMapServiceTicket {
  /* instance variables */
  NSArray *_identifiers;
  id _requestToken;
  int _resultProviderID;
  NSString *_contentProvider;
  unsigned long long _options;
}

/* instance methods */
- (id)initWithTraits:(id)traits;
- (id)initWithMUIDs:(id)muids resultProviderID:(int)id contentProvider:(id)provider traits:(id)traits options:(unsigned long long)options;
- (id)initWithIdentifiers:(id)identifiers resultProviderID:(int)id contentProvider:(id)provider traits:(id)traits options:(unsigned long long)options;
- (id)description;
- (void)submitWithHandler:(id /* block */)handler auditToken:(id)token timeout:(long long)timeout networkActivity:(id /* block */)activity;
- (struct { int x0; union { int x0; int x1; int x2; } x1; })dataRequestKind;
- (void)cancel;
@end

#endif /* _GEOIdentifiersTicket_h */
