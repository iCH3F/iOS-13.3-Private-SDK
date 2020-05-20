//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CATTaskOperationNotificationDelegate-Protocol.h>
#import <ClassroomKit/CRKSettingsPaneInfoProvider-Protocol.h>
#import <ClassroomKit/CRKStudentDaemonProxyObserver-Protocol.h>

@class CATRemoteTaskOperation, CRKSecureCodedUserDefaultsObject, CRKSettingsUIVisibleRemoteValue, CRKStudentDaemonProxy, NSArray, NSDictionary, NSSet;
@protocol CRKCourseEnrollmentControllerDelegate;

@interface CRKCourseEnrollmentController : NSObject <CRKStudentDaemonProxyObserver, CATTaskOperationNotificationDelegate, CRKSettingsPaneInfoProvider>
{
    id <CRKCourseEnrollmentControllerDelegate> mDelegate;
    CRKStudentDaemonProxy *mDaemonProxy;
    CATRemoteTaskOperation *mBrowseOperation;
    CATRemoteTaskOperation *mActiveCoursesOperation;
    CRKSecureCodedUserDefaultsObject *mStoredCourses;
    BOOL mConfigurationFetched;
    CRKSettingsUIVisibleRemoteValue *mSettingsUIVisibleRemoteValue;
    NSArray *_courses;
    NSArray *_courseInvitations;
    NSSet *_acceptedInvitationIdentifiers;
    NSArray *_activeCourseIdentifiers;
    NSArray *_activeInstructorIdentifiers;
    NSDictionary *_observingInstructorIdentifiersByCourseIdentifiers;
    NSUInteger _configurationType;
}

@property(nonatomic) NSUInteger configurationType; // @synthesize configurationType=_configurationType;
@property(retain, nonatomic) NSDictionary *observingInstructorIdentifiersByCourseIdentifiers; // @synthesize observingInstructorIdentifiersByCourseIdentifiers=_observingInstructorIdentifiersByCourseIdentifiers;
@property(copy, nonatomic) NSArray *activeInstructorIdentifiers; // @synthesize activeInstructorIdentifiers=_activeInstructorIdentifiers;
@property(copy, nonatomic) NSArray *activeCourseIdentifiers; // @synthesize activeCourseIdentifiers=_activeCourseIdentifiers;
@property(copy, nonatomic) NSSet *acceptedInvitationIdentifiers; // @synthesize acceptedInvitationIdentifiers=_acceptedInvitationIdentifiers;
@property(copy, nonatomic) NSArray *courseInvitations; // @synthesize courseInvitations=_courseInvitations;
@property(copy, nonatomic) NSArray *courses; // @synthesize courses=_courses;
// - (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)taskOperation:(id)arg1 didPostNotificationWithName:(id)arg2 userInfo:(id)arg3;
- (BOOL)isEphemeralMultiUser;
- (void)screenObserversHaveChanged:(id)arg1;
- (void)fetchScreenObserversDidFinish:(id)arg1;
- (void)fetchScreenObservers;
- (void)fetchCourseInvitationsOperationDidFinish:(id)arg1;
- (void)fetchCourseInvitations;
- (void)storeCourses;
- (void)fetchStoredCourses;
- (void)fetchCoursesOperationDidFinish:(id)arg1;
- (void)fetchCourses;
- (void)fetchActiveCoursesOperationDidFinish:(id)arg1;
- (void)fetchActiveCourses;
- (void)fetchConfigurationTypeOperationDidFinish:(id)arg1;
- (void)fetchConfiguration;
- (void)stopBrowsingForInvitations;
- (void)startBrowsingForInvitations;
- (BOOL)canBrowseForInvitations;
- (void)updateInvitationBrowsingStatus;
- (void)stopLongRunningOperations;
- (void)startLongRunningOperations;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)daemonProxy:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3;
- (void)daemonProxyDidDisconnect:(id)arg1;
- (void)daemonProxyDidConnect:(id)arg1;
@property(readonly, nonatomic) BOOL settingsUIVisible;
- (id)coursesWithInstructorIdentifier:(id)arg1;
- (id)invitationWithCourseIdentifier:(id)arg1;
- (id)courseWithIdentifier:(id)arg1;
- (void)dealloc;
- (id)initWithStudentDaemonProxy:(id)arg1 delegate:(id)arg2;
- (id)initWithDelegate:(id)arg1;

@end

