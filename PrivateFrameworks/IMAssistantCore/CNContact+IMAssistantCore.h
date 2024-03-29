//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CNContact_IMAssistantCore_h
#define CNContact_IMAssistantCore_h
@import Foundation;

@interface CNContact (IMAssistantCore)
/* instance methods */
- (id)__im_assistant_handlesMatchingRequestedHandleType:(long long)type requestedHandleLabel:(id)label;
- (id)__im_assistant_phoneNumbersMatchingLabel:(id)label;
- (id)__im_assistant_emailAddressesMatchingLabel:(id)label;
- (id)__im_assistant_handlesMatchingHandleID:(id)id;
- (id)__im_assistant_matchingNormalizedHandlesForType:(long long)type andLabel:(id)label forCountryCode:(id)code;
- (id)__im_assistant_allValidPersonOptionsWithAccountDataSource:(id)source;
- (id)__im_assistant_allIMHandles;
@end

#endif /* CNContact_IMAssistantCore_h */
