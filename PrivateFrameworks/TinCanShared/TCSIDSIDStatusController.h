//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 232.0.0.0.0
//
#ifndef TCSIDSIDStatusController_h
#define TCSIDSIDStatusController_h
@import Foundation;

#include "IDSBatchIDQueryControllerDelegate-Protocol.h"

@class IDSBatchIDQueryController, NSArray, NSMutableDictionary, NSNumber, NSString;
@protocol OS_dispatch_source, TCSIDSIDStatusControllerDelegate, TUIDSLookup;

@interface TCSIDSIDStatusController : NSObject<IDSBatchIDQueryControllerDelegate> {
  /* instance variables */
  NSObject<OS_dispatch_source> *_timer;
  double _timeout;
}

@property (retain, nonatomic) IDSBatchIDQueryController *queryController;
@property (readonly, nonatomic) NSArray *destinations;
@property (readonly, nonatomic) NSMutableDictionary *destinationToStatus;
@property (readonly, nonatomic) NSObject<TUIDSLookup> *item;
@property (readonly, nonatomic) NSNumber *status;
@property (readonly, nonatomic) NSString *tinCanHandle;
@property (readonly, weak, nonatomic) NSObject<TCSIDSIDStatusControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)stringForDestinationToStatus:(id)status;

/* instance methods */
- (id)initWithItem:(id)item delegate:(id)delegate timeout:(double)timeout;
- (void)execute;
- (void)dealloc;
- (void)_statusQueryTimedOut;
- (void)batchQueryController:(id)controller updatedDestinationsStatus:(id)status onService:(id)service error:(id)error;
@end

#endif /* TCSIDSIDStatusController_h */
