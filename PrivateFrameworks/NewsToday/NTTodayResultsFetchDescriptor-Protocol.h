//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NTTodayResultsFetchDescriptor_Protocol_h
#define NTTodayResultsFetchDescriptor_Protocol_h
@import Foundation;

@protocol NTTodayResultsFetchDescriptor <NSCopying>

@property (readonly, copy, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) Class descriptorsOperationClass;
@property (readonly, nonatomic) Class fetchOperationClass;

/* instance methods */
- (id)placeholderSectionDescriptorsWithContentRequest:(id)request;
@end

#endif /* NTTodayResultsFetchDescriptor_Protocol_h */
