//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIApplicationSceneClientSettings.h>

#import <SpringBoardUIServices/SBSUIStarkNotificationsSceneClientSettings-Protocol.h>

@interface SBSUIStarkNotificationsSceneClientSettings : UIApplicationSceneClientSettings <SBSUIStarkNotificationsSceneClientSettings>
{
}

- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(NSUInteger)arg3;
- (id)keyDescriptionForSetting:(NSUInteger)arg1;
- (id)mutableCopyWithZone:(_NSZone )arg1;
@property(readonly, nonatomic) BOOL shouldBorrowScreen;
@property(readonly, nonatomic, getter=isDisplayingNotification) BOOL displayingNotification;

@end
