//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDUserDomainConceptObserver_Protocol_h
#define HDUserDomainConceptObserver_Protocol_h
@import Foundation;

@protocol HDUserDomainConceptObserver 
/* instance methods */
- (void)userDomainConceptManager:(id)manager didAddUserDomainConcepts:(id)concepts;
- (void)userDomainConceptManager:(id)manager didUpdateUserDomainConcepts:(id)concepts;
- (void)userDomainConceptManager:(id)manager didDeleteUserDomainConcepts:(id)concepts;
- (void)userDomainConceptManager:(id)manager didJournalUserDomainConcepts:(id)concepts;
@end

#endif /* HDUserDomainConceptObserver_Protocol_h */
