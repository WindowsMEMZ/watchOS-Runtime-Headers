//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BPSSubscriberList_h
#define BPSSubscriberList_h
@import Foundation;

@class NSMutableArray;

@interface BPSSubscriberList : NSObject

@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSMutableArray *tickets;
@property (nonatomic) long long nextTicket;

/* instance methods */
- (id)init;
- (long long)appendElement:(id)element;
- (void)removeTicket:(long long)ticket;
- (id)claimAll;
@end

#endif /* BPSSubscriberList_h */
