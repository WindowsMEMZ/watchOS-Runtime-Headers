//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WebCoreMotionManager_h
#define WebCoreMotionManager_h
@import Foundation;

@protocol {RetainPtr<CLLocationManager>="m_ptr"^v}, {RetainPtr<CMMotionManager>="m_ptr"^v}, {RetainPtr<NSTimer>="m_ptr"^v}, {WeakHashSet<WebCore::MotionManagerClient, WTF::DefaultWeakPtrImpl, WTF::EnableWeakPtrThreadingAssertions::Yes>="m_set"{HashSet<WTF::Ref<WTF::DefaultWeakPtrImpl>, WTF::DefaultHash<WTF::Ref<WTF::DefaultWeakPtrImpl>>, WTF::HashTraits<WTF::Ref<WTF::DefaultWeakPtrImpl>>, WTF::HashTableTraits>="m_impl"{HashTable<WTF::Ref<WTF::DefaultWeakPtrImpl>, WTF::Ref<WTF::DefaultWeakPtrImpl>, WTF::IdentityExtractor, WTF::DefaultHash<WTF::Ref<WTF::DefaultWeakPtrImpl>>, WTF::HashTraits<WTF::Ref<WTF::DefaultWeakPtrImpl>>, WTF::HashTraits<WTF::Ref<WTF::DefaultWeakPtrImpl>>>=""(?="m_table"^v"m_tableForLLDB"^I)}}"m_operationCountSinceLastCleanup"I"m_maxOperationCountWithoutCleanup"I};

@interface WebCoreMotionManager : NSObject {
  /* instance variables */
  struct RetainPtr<CMMotionManager> { void *m_ptr; } m_motionManager;
  struct RetainPtr<CLLocationManager> { void *m_ptr; } m_locationManager;
  struct WeakHashSet<WebCore::MotionManagerClient, WTF::DefaultWeakPtrImpl, WTF::EnableWeakPtrThreadingAssertions::Yes> { struct HashSet<WTF::Ref<WTF::DefaultWeakPtrImpl>, WTF::DefaultHash<WTF::Ref<WTF::DefaultWeakPtrImpl>>, WTF::HashTraits<WTF::Ref<WTF::DefaultWeakPtrImpl>>, WTF::HashTableTraits> { struct HashTable<WTF::Ref<WTF::DefaultWeakPtrImpl>, WTF::Ref<WTF::DefaultWeakPtrImpl>, WTF::IdentityExtractor, WTF::DefaultHash<WTF::Ref<WTF::DefaultWeakPtrImpl>>, WTF::HashTraits<WTF::Ref<WTF::DefaultWeakPtrImpl>>, WTF::HashTraits<WTF::Ref<WTF::DefaultWeakPtrImpl>>> { union { void *m_table; unsigned int *m_tableForLLDB; } x0; } m_impl; } m_set; unsigned int m_operationCountSinceLastCleanup; unsigned int m_maxOperationCountWithoutCleanup; } m_deviceMotionClients;
  struct WeakHashSet<WebCore::MotionManagerClient, WTF::DefaultWeakPtrImpl, WTF::EnableWeakPtrThreadingAssertions::Yes> { struct HashSet<WTF::Ref<WTF::DefaultWeakPtrImpl>, WTF::DefaultHash<WTF::Ref<WTF::DefaultWeakPtrImpl>>, WTF::HashTraits<WTF::Ref<WTF::DefaultWeakPtrImpl>>, WTF::HashTableTraits> { struct HashTable<WTF::Ref<WTF::DefaultWeakPtrImpl>, WTF::Ref<WTF::DefaultWeakPtrImpl>, WTF::IdentityExtractor, WTF::DefaultHash<WTF::Ref<WTF::DefaultWeakPtrImpl>>, WTF::HashTraits<WTF::Ref<WTF::DefaultWeakPtrImpl>>, WTF::HashTraits<WTF::Ref<WTF::DefaultWeakPtrImpl>>> { union { void *m_table; unsigned int *m_tableForLLDB; } x0; } m_impl; } m_set; unsigned int m_operationCountSinceLastCleanup; unsigned int m_maxOperationCountWithoutCleanup; } m_deviceOrientationClients;
  struct RetainPtr<NSTimer> { void *m_ptr; } m_updateTimer;
  BOOL m_gyroAvailable;
  BOOL m_headingAvailable;
  BOOL m_initialized;
}

/* class methods */
+ (id)sharedManager;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)addMotionClient:(void *)client;
- (void)removeMotionClient:(void *)client;
- (void)addOrientationClient:(void *)client;
- (void)removeOrientationClient:(void *)client;
- (BOOL)gyroAvailable;
- (BOOL)headingAvailable;
- (void)initializeOnMainThread;
- (void)checkClientStatus;
- (void)update;
- (void)sendAccelerometerData:(id)data;
- (void)sendMotionData:(id)data withHeading:(id)heading;
@end

#endif /* WebCoreMotionManager_h */
