//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsUIKit/NCNotificationListComponentDelegate-Protocol.h>

@class NCNotificationGroupList, NCNotificationRequest, NCNotificationStructuredSectionList;
@protocol NCAuxiliaryOptionsProviding;

@protocol NCNotificationStructuredSectionListDelegate <NCNotificationListComponentDelegate>
- (BOOL)notificationStructuredSectionList:(NCNotificationStructuredSectionList *)arg1 shouldScrollToTopForGroupList:(NCNotificationGroupList *)arg2;
- (void)notificationStructuredSectionList:(NCNotificationStructuredSectionList *)arg1 requestsScrollingToContentOffset:(double)arg2 withCompletion:(void (^)(void))arg3;
- (BOOL)notificationStructuredSectionList:(NCNotificationStructuredSectionList *)arg1 shouldFilterNotificationRequest:(NCNotificationRequest *)arg2;
- (id <NCAuxiliaryOptionsProviding>)notificationStructuredSectionList:(NCNotificationStructuredSectionList *)arg1 requestsAuxiliaryOptionsContentProviderForNotificationRequest:(NCNotificationRequest *)arg2 isLongLook:(BOOL)arg3;
@end

