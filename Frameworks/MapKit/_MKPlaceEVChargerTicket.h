//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2417.42.9.28.9
//
#ifndef _MKPlaceEVChargerTicket_h
#define _MKPlaceEVChargerTicket_h
@import Foundation;

#include "MKMapServiceRefreshEVChargerTicket-Protocol.h"

@class GEOMapServiceTraits, NSString;
@protocol GEOMapServiceRefreshEVChargerTicket;

@interface _MKPlaceEVChargerTicket : NSObject<MKMapServiceRefreshEVChargerTicket> {
  /* instance variables */
  NSObject<GEOMapServiceRefreshEVChargerTicket> *_ticket;
}

@property (readonly, nonatomic) GEOMapServiceTraits *traits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTicket:(id)ticket;
- (void)cancel;
- (void)submitRefreshRequestWithHandler:(id /* block */)handler networkActivity:(id /* block */)activity;
@end

#endif /* _MKPlaceEVChargerTicket_h */
