//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1547.1.1.3.0
//
#ifndef CalCalendarDataContainerProvider_Protocol_h
#define CalCalendarDataContainerProvider_Protocol_h
@import Foundation;

@protocol CalCalendarDataContainerProvider <NSObject>
/* instance methods */
- (id)containerInfoForAccountIdentifier:(id)identifier;
- (id)containerInfoForPersonaIdentifier:(id)identifier;
- (id)containerForAccountIdentifier:(id)identifier;
- (BOOL)accountUsesDataSeparatedContainer:(id)container;
@end

#endif /* CalCalendarDataContainerProvider_Protocol_h */
