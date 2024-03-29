//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKSampleCountQuery_h
#define HKSampleCountQuery_h
@import Foundation;

#include "HKQuery.h"
#include "HKSampleCountQueryClientInterface-Protocol.h"

@class NSSet, NSString;

@interface HKSampleCountQuery : HKQuery<HKSampleCountQueryClientInterface> {
  /* instance variables */
  id /* block */ _resultsHandler;
  id /* block */ _sampleTypeCountResultsHandler;
}

@property (readonly, copy, nonatomic) NSSet *sampleTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (Class)configurationClass;
+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)interface;

/* instance methods */
- (id)initWithQueryDescriptors:(id)descriptors resultsHandler:(id /* block */)handler;
- (id)initWithSampleTypes:(id)types predicate:(id)predicate resultsHandler:(id /* block */)handler;
- (id)initWithSampleType:(id)type predicate:(id)predicate resultsHandler:(id /* block */)handler;
- (id)initWithResultsHandler:(id /* block */)handler;
- (void)client_deliverSampleCountDictionary:(id)dictionary forQuery:(id)query;
- (void)client_deliverSampleTypeCountDictionary:(id)dictionary forQuery:(id)query;
- (void)queue_deliverError:(id)error;
- (void)queue_populateConfiguration:(id)configuration;
- (void)queue_validate;
- (void)queue_queryDidDeactivate:(id)deactivate;
@end

#endif /* HKSampleCountQuery_h */
