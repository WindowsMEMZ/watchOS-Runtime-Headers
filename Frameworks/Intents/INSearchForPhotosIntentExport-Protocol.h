//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef INSearchForPhotosIntentExport_Protocol_h
#define INSearchForPhotosIntentExport_Protocol_h
@import Foundation;

@protocol INSearchForPhotosIntentExport <NSObject, JSExport>

@property (copy, nonatomic) INDateComponentsRange *dateCreated;
@property (copy, nonatomic) CLPlacemark *locationCreated;
@property (copy, nonatomic) NSString *albumName;
@property (copy, nonatomic) NSArray *searchTerms;
@property (nonatomic) unsigned long long includedAttributes;
@property (nonatomic) unsigned long long excludedAttributes;
@property (copy, nonatomic) NSArray *peopleInPhoto;
@property (copy, nonatomic) NSArray *events;
@property (readonly, nonatomic) long long eventsOperator;
@property (copy, nonatomic) NSArray *places;
@property (readonly, nonatomic) long long placesOperator;
@property (copy, nonatomic) NSArray *activities;
@property (readonly, nonatomic) long long activitiesOperator;
@property (copy, nonatomic) NSArray *geographicalFeatures;
@property (readonly, nonatomic) long long geographicalFeaturesOperator;
@property (copy, nonatomic) NSString *memoryName;

/* instance methods */
- (id)init;
@end

#endif /* INSearchForPhotosIntentExport_Protocol_h */
